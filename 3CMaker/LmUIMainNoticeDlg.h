#pragma once


// LmUINoticeForm 대화 상자입니다.

class LmUIMainNoticeDlg : public CDialog
{
	DECLARE_DYNAMIC(LmUIMainNoticeDlg)

public:
	LmUIMainNoticeDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~LmUIMainNoticeDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_INITNOTICE };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
};
