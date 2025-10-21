//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>	
//#include <tchar.h>	
//#include <Windows.h>
//
//#define SLOT_NAME _T("\\\\.\\mailslot\\mailbox")
//
//int _tmain(int argc, TCHAR* argv[])
//{
//	HANDLE hMailslot;
//	TCHAR message[50];
//	DWORD bytesWritten;
//
//	FILE* file = _tfopen(_T("InheritableHandle.txt"), _T("rt"));
//	_ftscanf(file, _T("%d"), &hMailslot);
//	fclose(file);
//	_tprintf(_T("Inheritbale Handle : %d \n"), hMailslot);
//
//	while (1)
//	{
//		_fputts(_T("MY CMD>"), stdout);
//		_fgetts(message, sizeof(message) / sizeof(TCHAR), stdin);
//
//		if (!WriteFile(hMailslot, message, _tcslen(message) * sizeof(TCHAR), &bytesWritten, NULL))
//		{
//			_fputts(_T("Unable to write!"), stdout);
//			CloseHandle(hMailslot);
//			return 1;
//		}
//
//		if (!_tcscmp(message, _T("exit")))
//		{
//			_fputts(_T("Good Bye"), stdout);
//			break;
//		}
//	}
//	CloseHandle(hMailslot);
//	return 0;
//}