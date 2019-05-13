// ParallelSort.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <windows.h>
#include <process.h>
#include <stdio.h>
#include <tchar.h>
#include <time.h>


int Compare(const void *pVal1, const void *pVal2)
{
	return *(DWORD*)pVal1 - *(DWORD*)pVal2;
}

typedef struct
{
	DWORD dwCount;
	DWORD *pdwData;
}
SORT_THREAD_PARAM;

unsigned int __stdcall SortThreadFunc(PVOID pThreadParam)
{
	SORT_THREAD_PARAM *lpParam = (SORT_THREAD_PARAM*)pThreadParam;
	qsort(lpParam->pdwData, lpParam->dwCount, sizeof(DWORD), Compare);
	return 0;
}

DWORD* GenerateData(DWORD dwCount)
{
	DWORD *pdwData = (DWORD*)malloc(dwCount * sizeof(DWORD));
	for (int i = 0; i < dwCount; i++)
		pdwData[i] = rand();
	return pdwData;
}

void PrintData(DWORD *pdwData, DWORD nData)
{
	for (int i = 0; i < nData; i++)
	{
		if (i > 0 && i % 10 == 0)
			printf("\n");
		printf("%8u", pdwData[i]);
	}
	printf("\n");
}

int main()
{
	const DWORD dwTotalCount = 50;
	DWORD *pdwData[4];
	SORT_THREAD_PARAM pSortParam[4];
	HANDLE phSortThread[2];
	union {
		LONGLONG li;
		FILETIME ft;
	} createTime[4], exitTime[4], elapsedTime[5];
	FILETIME kernelTime, userTime;
	SYSTEMTIME elTiSys[5];
	for (int i = 0; i < 4; i++)
	{
		pdwData[i] = GenerateData(dwTotalCount);
		printf(" Mang thu %d :\n", i + 1);
		PrintData(pdwData[i], dwTotalCount);
		printf("\n");
	}
	getchar();
	for (int i = 0; i < 2; i++)
	{
		pSortParam[i].dwCount = dwTotalCount;
		pSortParam[i].pdwData = pdwData[i];
		pSortParam[i + 2].dwCount = dwTotalCount;
		pSortParam[i + 2].pdwData = pdwData[i + 2];
		phSortThread[0] = (HANDLE)_beginthreadex(NULL, 0, SortThreadFunc, &pSortParam[i], 0, NULL);
		phSortThread[1] = (HANDLE)_beginthreadex(NULL, 0, SortThreadFunc, &pSortParam[i + 2], 0, NULL);
		WaitForSingleObject(phSortThread, INFINITE);
		WaitForMultipleObjects(2, phSortThread, TRUE, INFINITE);

		GetThreadTimes(phSortThread[0], &createTime[i].ft, &exitTime[i].ft, &kernelTime, &userTime);
		elapsedTime[i].li = exitTime[i].li - createTime[i].li;
		FileTimeToSystemTime(&elapsedTime[i].ft, &elTiSys[i]);
		_tprintf(_T("Execution Time Mang %d : .%03d  Milliseconds\n"), i + 1, elTiSys[i].wMilliseconds);

		PrintData(pdwData[i], dwTotalCount);
		GetThreadTimes(phSortThread[1], &createTime[i+2].ft, &exitTime[i+2].ft, &kernelTime, &userTime);
		elapsedTime[i+2].li = exitTime[i+2].li - createTime[i+2].li;
		FileTimeToSystemTime(&elapsedTime[i+2].ft, &elTiSys[i+2]);
		_tprintf(_T("Execution Time Mang %d : .%03d  Milliseconds\n"), i + 3, elTiSys[i+2].wMilliseconds);
		PrintData(pdwData[i+2], dwTotalCount);
	}
	elapsedTime[4].li = 0;
	for (int i = 0; i < 4; i++)
	{
		elapsedTime[4].li += elapsedTime[i].li;
	}
	FileTimeToSystemTime(&elapsedTime[4].ft, &elTiSys[4]);
	_tprintf(_T("Total Execution Time: .%03d  Milliseconds \n"), elTiSys[4].wMilliseconds);
	CloseHandle(phSortThread[0]);
	CloseHandle(phSortThread[1]);
	getchar();
	return 0;
}

//http://www.cplusplus.com/reference/cstdlib/qsort/
//https://msdn.microsoft.com/en-us/library/kdzttdcb.aspx