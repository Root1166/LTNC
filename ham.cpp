#include "thuvien.h"
#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>

#define buffSize 0x200
void createFile(LPCTSTR lpName, DWORD Size)
{
	unsigned char buff[buffSize];
	int i;
	HANDLE file;
	BOOL status;
	DWORD k;
	file = CreateFile(lpName,GENERIC_WRITE,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
	if (file == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("Can't create a file\n"));
	}
	SetFilePointer(file, Size, NULL, 0);
	status = SetEndOfFile(file);
	if (status == FALSE)
        _tprintf(_T("Can't set the file size!\n"));
	else
        _tprintf(_T("Set the file size done!\n"));
	_tprintf(_T("Writing into file begins!\n"));
	for(i=0;i<10;i++)
	{
		buff[i] = i;
	}
	status = WriteFile(file,buff,buffSize,&k,NULL);
	if (status == FALSE)
        _tprintf(_T("Can't write into the file!\n"));
	CloseHandle(file);
}
void printFile(LPCTSTR lpName)
{
	HANDLE file;
	BOOL status;
	unsigned char buff[buffSize];
	DWORD k;
	int i;
	file = CreateFile(lpName,GENERIC_READ,0,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);
	if (file == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("FILE NOT EXISTING!\n"));
		CloseHandle(file);
	}
	else {
		_tprintf(_T("NOW PRINT!\n"));
		status = ReadFile(file, buff, buffSize, &k, NULL);
		for (i = 0; i < buffSize; i++)
		{
			_tprintf(_T("%d\t"),buff[i]);
		}
	}

}
