#pragma once


// LmUINoticeForm ��ȭ �����Դϴ�.

class LmUIMainNoticeDlg : public CDialog
{
	DECLARE_DYNAMIC(LmUIMainNoticeDlg)

public:
	LmUIMainNoticeDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~LmUIMainNoticeDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_INITNOTICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
