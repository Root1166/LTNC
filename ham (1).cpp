#include "thuvien.h"
#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <strsafe.h>
void createFile(LPCTSTR lpName, DWORD size)
{
	unsigned char buff[30];
	int i;
	HANDLE file;
	int status;
	DWORD k;
	file = CreateFile(lpName,GENERIC_WRITE,0,NULL,CREATE_NEW,FILE_ATTRIBUTE_NORMAL,NULL);
	if (file == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("Can't create a file\n"));
	}
	_tprintf(_T("Writing into file begins!\n"));
	for(i=0;i<10;i++)
	{
		buff[i] = i;
	}
	status = WriteFile(file,buff,size,&k,NULL);
	if (status == FALSE) _tprintf(_T("Can't write into the file!\n"));
	CloseHandle(file);
}

void printFile(LPCTSTR lpName)
{
	HANDLE file;
	BOOL status;
	unsigned char buff[10];
	DWORD k;
	int i;
	file = CreateFile(lpName,GENERIC_READ,0,NULL,OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL,NULL);
	if (file == INVALID_HANDLE_VALUE)
	{
		_tprintf(_T("FILE NOT EXISTING!\n"));
		CloseHandle(file);
	}
	_tprintf(TEXT("read %d bytes from %s.\n"), size, name);
	else {
		_tprintf(_T("NOW PRINT!\n"));
		status = ReadFile(file, buff,10, &k, NULL);
		for (i = 0; i < 10; i++)
		{
			_tprintf(_T("%d\t"),buff[i]);
		}
	}

}
