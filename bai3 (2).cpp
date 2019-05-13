// timeP.cpp : Defines the entry point for the console application.
//
#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	STARTUPINFO startUp;
	ZeroMemory(&startUp, sizeof(startUp));
	startUp.cb = sizeof(startUp);
	PROCESS_INFORMATION procInfo;
	union {
		LONGLONG li;
		FILETIME ft;
	} createTime, exitTime, elapsedTime;
	FILETIME kernelTime, userTime;
	SYSTEMTIME elTiSys;
	//LPCTSTR lpApp = __T("D:\\uni.exe");//
	TCHAR szDir[MAX_PATH];
	std::wstring  inputStr;
	cout << "Nhap duong dan den file .exe";
	wcin >> inputStr;
	cin.ignore();
	const TCHAR * argv = inputStr.c_str();
	_tprintf(_T("\nTarget directory is %s\n\n"), argv);
	StringCchCopy(szDir, MAX_PATH, argv);
	GetStartupInfo(&startUp);
	if (CreateProcess(szDir, NULL, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &startUp, &procInfo))

	{
		_tprintf(_T("Chuong trinh %s da khoi chay\n"), szDir);
	}
	else
	{
		printf("Khong the chay chuong trinh\n");
	}

	HANDLE hProc = procInfo.hProcess;
	if (WaitForSingleObject(hProc, 30000) == WAIT_TIMEOUT)
	{
		printf("Chuong trinh qua thoi gian chay\n");
		TerminateProcess(hProc, 1);
	}
	else printf("\n");
	GetProcessTimes(hProc, &createTime.ft,
		&exitTime.ft, &kernelTime, &userTime);
	elapsedTime.li = exitTime.li - createTime.li;
	FileTimeToSystemTime(&elapsedTime.ft, &elTiSys);
	_tprintf(_T("Execution Time: %02d:%02d:%02d.%03d\n"),
		elTiSys.wHour, elTiSys.wMinute, elTiSys.wSecond,
		elTiSys.wMilliseconds);

	CloseHandle(procInfo.hThread);
	CloseHandle(procInfo.hProcess);

	getchar();
	return 0;
}

