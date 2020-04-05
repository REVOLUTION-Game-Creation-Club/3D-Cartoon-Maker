// stdafx.cpp : 표준 포함 파일만 들어 있는 소스 파일입니다.
// 3CMaker.pch는 미리 컴파일된 헤더가 됩니다.
// stdafx.obj에는 미리 컴파일된 형식 정보가 포함됩니다.

#include "stdafx.h"

//실행 파일이 실행된 경로를 기억해 두기 위한 전역변수
CString g_strFilePath;

void GetResourceDirectory(CString &strResDirectory)
{
	strResDirectory =  g_strFilePath;
	INT FirstSlash = strResDirectory.ReverseFind(L'\\');
	strResDirectory = strResDirectory.Left(FirstSlash);
	strResDirectory+=L"\\Data";
	return;
}