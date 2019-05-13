#include<windows.h>
#include<stdio.h>
#include<tchar.h>
#include<string.h>
#ifdef UNICODE
#include <locale.h>
#include <fcntl.h>
#endif
int check(LPCTSTR lpDir)
{
    DWORD dwAttr = GetFileAttributes(lpDir);
    if(INVALID_FILE_ATTRIBUTES == dwAttr) return 0;
    else if((dwAttr&FILE_ATTRIBUTE_DIRECTORY)!=0) return 1;
    return 0;
}
int listFile(LPTSTR lpDir)
{
    WIN32_FIND_DATA data;
    HANDLE lp;
    TCHAR lpMaxPath[MAX_PATH];
    _stprintf(lpMaxPath, _T("%s\\*"), lpDir);
    lp=FindFirstFile(lpMaxPath,&data);
    int count=1;
    if(INVALID_HANDLE_VALUE==lp)
    {
        _tprintf(_T("There is an error here ... %d"),GetLastError());
        return 1;
    }
    _tprintf(_T("\nHere are some directories and files in the input directory"));
    do
    {
        if((lp==INVALID_HANDLE_VALUE)||(data.dwFileAttributes==INVALID_FILE_ATTRIBUTES))
        continue;
        if(data.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)
            _tprintf(_T("\n%d. This is a directory named %s"),count,data.cFileName);
        else _tprintf(_T("\n%d. This is a file named %s"),count,data.cFileName);
        count++;
    }while(FindNextFile(lp,&data)!=0);
    FindClose(lp);
    return 0;
}
/*DWORD64 fileSize(LPCTSTR lpDir)
{
    DWORD64 total=0;
    TCHAR lpMaxPath[MAX_PATH];
    _stprintf(lpMaxPath, _T("%s\\*"),lpDir);

    WIN32_FIND_DATA data;
    HANDLE hfile;

    hfile=FindFirstFile(lpMaxPath,&data);
    if(INVALID_HANDLE_VALUE==hfile)
        {
            return 0;
        }
    do
    {
        if(hfile==INVALID_HANDLE_VALUE||data.dwFileAttributes==INVALID_FILE_ATTRIBUTES)
            continue;
        if(data.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)
        {
            TCHAR lpOther[MAX_PATH];
            _stprintf(lpOther, _T("%s\\%s"),lpDir,data.cFileName);
            total+=fileSize(lpOther);
        }
        else
        {
            LARGE_INTEGER liFileSize;
      liFileSize.HighPart = data.nFileSizeHigh;
      liFileSize.LowPart = data.nFileSizeLow;
      total+= liFileSize.QuadPart;
        }
    }while(FindNextFile(hfile,&data));
    FindClose(hfile);
    return total;
}*/
DWORD64 getDirSize(LPCTSTR lpDirPath){
  DWORD64 dwTotalSize = 0;
  TCHAR lpMaxPath[MAX_PATH];
	_stprintf(lpMaxPath, _T("%s\\*"), lpDirPath);
  WIN32_FIND_DATA fdh;
  HANDLE hFindFile;
  hFindFile = FindFirstFile(lpMaxPath, &fdh);

  if(INVALID_HANDLE_VALUE == hFindFile){
    _tprintf("Error: %d", GetLastError());
    return 0;
  }
  do{
    if(hFindFile == INVALID_HANDLE_VALUE || fdh.dwFileAttributes == INVALID_FILE_ATTRIBUTES || 0 == _tcscmp(_T("."), fdh.cFileName) || 0 == _tcscmp(_T(".."), fdh.cFileName))
      continue;
    if(fdh.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY){
      // Là thư mục
      TCHAR lpChildPath[MAX_PATH];
      _stprintf(lpChildPath, _T("%s\\%s"), lpDirPath, fdh.cFileName);
      dwTotalSize += getDirSize(lpChildPath);
    }else{
      // Là file
      LARGE_INTEGER liFileSize;
      liFileSize.HighPart = fdh.nFileSizeHigh;
      liFileSize.LowPart = fdh.nFileSizeLow;
      dwTotalSize += liFileSize.QuadPart;
    }
  }while(FindNextFile(hFindFile, &fdh));
  FindClose(hFindFile);
  return dwTotalSize;
}


int _tmain(int argc, LPTSTR argv[])
{
    int n;
    LPTSTR lpDir;
    WIN32_FIND_DATA data;
    HANDLE hfile;
    TCHAR newName[MAX_PATH];
    TCHAR lpMaxNew[MAX_PATH];
    if(argc<2)
    {
        _tprintf(_T("There are no directories or files from input"));
        return 0;
    }
    lpDir=argv[1];
    if(check(lpDir)==0) {
            _tprintf(_T("This is not a directory"));
            return 1;
    }
    listFile(lpDir);
    _tprintf(_T("\nChoose your file:"));
    _tscanf("%d",&n);
    int found=0;
    TCHAR lpMaxPath[MAX_PATH];
    _stprintf(lpMaxPath, _T("%s\\*"), lpDir);
    hfile=FindFirstFile(lpMaxPath,&data);
    do{
        if(INVALID_HANDLE_VALUE==hfile||data.dwFileAttributes==INVALID_FILE_ATTRIBUTES)
            continue;
        found++;
        if(found==n)
                break;
    }while(FindNextFile(hfile,&data));
    if(data.dwFileAttributes&FILE_ATTRIBUTE_DIRECTORY)
    _tprintf(_T("The input chosen is a directory named %s"),data.cFileName);
    else
    _tprintf(_T("The input chosen is a file named %s"),data.cFileName);
    _stprintf(lpMaxPath, _T("%s\\%s"), lpDir, data.cFileName);
    command:
    _tprintf(_T("\nWhat do you want to do with this file?(input number):"),data.cFileName);
    _tprintf(_T("\n1. Open the file!"));
    _tprintf(_T("\n2. Delete the file!"));
    _tprintf(_T("\n3. Rename the file!"));
    _tprintf(_T("\n4. Size of the file!"));
    _tprintf(_T("\n5. No! I don't want"));
    _tprintf(_T("\nUr Answer:"));
    _tscanf("%d",&n);

    switch(n)
    {
    case 1:
        if(check(lpMaxPath))
        listFile(lpMaxPath);
        else
        //_tsystem(lpMaxPath);
        goto command;
        break;
    case 2:
        if(check(lpMaxPath))
        {
            _stprintf(lpMaxPath,_T("RMDIR %s\\%s"),lpDir,data.cFileName);
            _tsystem(lpMaxPath);
        }
        else
        {
            _stprintf(lpMaxPath,_T("del %s\\%s"),lpDir,data.cFileName);
            _tsystem(lpMaxPath);
        }
        goto command;
        break;
    case 3:
        _tprintf(_T("\nA new name for chosen one:"));
        _tscanf(_T("%s"),newName);
        _tprintf(_T("\nNew name: %s"), newName);
        _stprintf(lpMaxNew,_T("rename %s\\%s %s"),lpDir,data.cFileName,newName);
        _tsystem(lpMaxNew);
        goto command;
        break;
    case 4:
        if(check(lpMaxPath))
        {
            _tprintf(_T("\nFile size is: %ld bytes"),getDirSize(lpMaxPath));
        }
        else {
            LARGE_INTEGER liFileSize;
          liFileSize.HighPart = data.nFileSizeHigh;
          liFileSize.LowPart = data.nFileSizeLow;
          _tprintf(_T("\r\n %d bytes"), liFileSize.QuadPart);
        }
        goto command;
        break;
    case 5:
        _tprintf(_T("\nSee ya!!!!!!!!!!\n"));
        break;
    }
    return 0;
}


