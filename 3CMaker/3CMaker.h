// 3CMaker.h : 3CMaker ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CMy3CMakerApp:
// �� Ŭ������ ������ ���ؼ��� 3CMaker.cpp�� �����Ͻʽÿ�.
//

class CMy3CMakerApp : public CWinApp
{
public:
	CMy3CMakerApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnIdle(LONG lCount);
};

extern CMy3CMakerApp theApp;