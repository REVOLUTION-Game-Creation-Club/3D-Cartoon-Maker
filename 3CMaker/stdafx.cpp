// stdafx.cpp : ǥ�� ���� ���ϸ� ��� �ִ� �ҽ� �����Դϴ�.
// 3CMaker.pch�� �̸� �����ϵ� ����� �˴ϴ�.
// stdafx.obj���� �̸� �����ϵ� ���� ������ ���Ե˴ϴ�.

#include "stdafx.h"

//���� ������ ����� ��θ� ����� �α� ���� ��������
CString g_strFilePath;

void GetResourceDirectory(CString &strResDirectory)
{
	strResDirectory =  g_strFilePath;
	INT FirstSlash = strResDirectory.ReverseFind(L'\\');
	strResDirectory = strResDirectory.Left(FirstSlash);
	strResDirectory+=L"\\Data";
	return;
}