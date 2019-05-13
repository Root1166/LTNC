/**
 * Copyright (c)2018 by @vinhjaxt
 1.	Tạo một process để thực thi Chương trình 2.2 (hoặc 2.3)
 2.	Đo thời gian thực thi
 Sửa lại để:
   1.	Chương trình 2.2 (hoặc 2.3) xuất kết quả ra một cửa sổ console mới
   Sửa lại chương trình 3.1 trên đây để (Chương trinhf 3.3)
   2.	Chương trình 2.2 (hoặc 2.3) xuất kết quả vào một file nào đó
*/

#include <windows.h>
#include <tchar.h>

#ifdef UNICODE
#include <locale.h>
#include <fcntl.h>
#endif

FLOAT timeProcess(){
  PROCESS_INFORMATION piProcInfo;
  ZeroMemory(&piProcInfo, sizeof(PROCESS_INFORMATION));
  STARTUPINFO siStartInfo;
  ZeroMemory(&siStartInfo, sizeof(STARTUPINFO));
  siStartInfo.cb = sizeof(STARTUPINFO);

  TCHAR lpCmd[MAX_PATH];
  _stprintf(lpCmd, _T("%s"), _T("cmd /c \"echo I am a consummer & timeout /T 30\"")); // một process rất tốn thời gian ^^

  if(!CreateProcess(NULL, lpCmd, NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &siStartInfo, &piProcInfo)){
    _tprintf(_T("\r\nCreateProcess error: %d"), GetLastError());
    return 0;
  }
  DWORD Status = WaitForSingleObject(piProcInfo.hProcess, /*2000*/INFINITE);
  FILETIME fileTimeCreate;
  FILETIME fileTimeExit;
  FILETIME kernelTime;
  FILETIME userTime;
  if(!GetProcessTimes(piProcInfo.hProcess, &fileTimeCreate, &fileTimeExit, &kernelTime, &userTime)){
    return 0;
  }
  DWORD64 deltaTime = ((LONGLONG)fileTimeExit.dwLowDateTime | ((LONGLONG)(fileTimeExit.dwHighDateTime) << 32LL))/* endTime */
                    - ((LONGLONG)fileTimeCreate.dwLowDateTime | ((LONGLONG)(fileTimeCreate.dwHighDateTime) << 32LL)) ;/* startTime */

  CloseHandle(piProcInfo.hProcess);
  CloseHandle(piProcInfo.hThread);
  return (FLOAT)(deltaTime/1e4);
}

INT redirFile(LPCTSTR lpFileName){

  HANDLE cStdOutR = NULL;
  HANDLE cStdOutW = NULL;
  HANDLE cStdInR = NULL;
  HANDLE cStdInW = NULL;

  SECURITY_ATTRIBUTES saAttr;
  saAttr.nLength = sizeof(SECURITY_ATTRIBUTES);
  saAttr.bInheritHandle = TRUE;
  saAttr.lpSecurityDescriptor = NULL;

  if(!CreatePipe(&cStdOutR, &cStdOutW, &saAttr, 0)){
    _tprintf(_T("\r\nCreatePipe stdout error: %d"), GetLastError());
    return 1;
  }
  if(!CreatePipe(&cStdInR, &cStdInW, &saAttr, 0)){
    _tprintf(_T("\r\nCreatePipe stdin error: %d"), GetLastError());
    return 1;
  }

  // Không cho inherit đọc stdout
  if(!SetHandleInformation(cStdOutR, HANDLE_FLAG_INHERIT, 0)){
    _tprintf(_T("\r\nSetHandleInformation stdout error: %d"), GetLastError());
    return 2;
  }
  // Không cho inherit write stdin
  if(!SetHandleInformation(cStdInW, HANDLE_FLAG_INHERIT, 0)){
    _tprintf(_T("\r\nSetHandleInformation stdin error: %d"), GetLastError());
    return 2;
  }
  PROCESS_INFORMATION piProcInfo;
  ZeroMemory(&piProcInfo, sizeof(PROCESS_INFORMATION));
  STARTUPINFO siStartInfo;

  ZeroMemory(&siStartInfo, sizeof(STARTUPINFO));
  siStartInfo.cb = sizeof(STARTUPINFO);
  siStartInfo.hStdError = cStdOutW;
  siStartInfo.hStdOutput = cStdOutW;
  siStartInfo.hStdInput = cStdInR;
  siStartInfo.dwFlags |= STARTF_USESTDHANDLES;

  TCHAR lpCmd[MAX_PATH];
  _stprintf(lpCmd, _T("%s"), _T("cmd /c \"echo I am from stdout & more\""));

  if(!CreateProcess(NULL, lpCmd, NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &siStartInfo, &piProcInfo)){
    _tprintf(_T("\r\nCreateProcess error: %d"), GetLastError());
    return 3;
  }

  DWORD written;
  // ghi stdin
  BYTE* lpDataPass = "Hello, i am from stdin.";
  if(!WriteFile(cStdInW, lpDataPass, strlen(lpDataPass), &written, NULL)){
    _tprintf(_T("\r\nWriteFile stdin error: %d"), GetLastError());
    return 5;
  }
  CloseHandle(cStdInW);
  CloseHandle(cStdInR);
  _tprintf(_T("\r\nWrite to Stdin OK"));

  HANDLE fp = CreateFile(lpFileName, GENERIC_WRITE | GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL|FILE_FLAG_SEQUENTIAL_SCAN, NULL);
  if(fp == INVALID_HANDLE_VALUE){
    _tprintf(_T("\r\nCreateFile error: %d"), GetLastError());
    return 4;
  }
  DWORD readBytes;
  BYTE bBuf;
  CloseHandle(cStdOutW); // close Write trước khi Read
  while (ReadFile(cStdOutR, &bBuf, 1, &readBytes, NULL)){
    if(!WriteFile(fp, &bBuf, 1, &written, NULL)){
      _tprintf(_T("\r\nWriteFile error: %d"), GetLastError());
      return 5;
    }
  }
  CloseHandle(fp);
  CloseHandle(cStdOutR);
  CloseHandle(piProcInfo.hProcess);
  CloseHandle(piProcInfo.hThread);

  return 0;
}

INT redirConsole(){
  PROCESS_INFORMATION piProcInfo;
  ZeroMemory(&piProcInfo, sizeof(PROCESS_INFORMATION));
  STARTUPINFO siStartInfo;
  ZeroMemory(&siStartInfo, sizeof(STARTUPINFO));
  siStartInfo.cb = sizeof(STARTUPINFO);

  TCHAR lpCmd[MAX_PATH];
  _stprintf(lpCmd, _T("%s"), _T("cmd /c \"echo I am in a new Console & pause\""));

  if(!CreateProcess(NULL, lpCmd, NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS|CREATE_NEW_CONSOLE, NULL, NULL, &siStartInfo, &piProcInfo)){
    _tprintf(_T("\r\nCreateProcess error: %d"), GetLastError());
    return 1;
  }

  CloseHandle(piProcInfo.hProcess);
  CloseHandle(piProcInfo.hThread);
  return 0;
}

int _tmain(int argc, LPTSTR argv[]){
#ifdef UNICODE
  _setmode(_fileno(stdout), _O_U8TEXT); // _O_U16TEXT
  // if (!setlocale(LC_CTYPE, "") || !setlocale(LC_ALL, ""))
    // return -1;
#endif

  _tprintf(_T("\r\nCalculating process time consumtion: \r\n"));
  _tprintf(_T("\r\nProcess took: %fms"), timeProcess());

  _tprintf(_T("\r\nStart in new console: "));
  redirConsole();
  _tprintf(_T("\r\nEnded in new console."));

  _tprintf(_T("\r\nStart in a file: .\\out.txt"));
  redirFile(_T(".\\out.txt"));
  _tprintf(_T("\r\nEnded in a file."));

  return 0;
}
