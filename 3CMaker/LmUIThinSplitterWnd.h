#pragma once

// CThinSplitterWnd

class LmUIThinSplitterWnd : public CSplitterWnd
{
	DECLARE_DYNAMIC(LmUIThinSplitterWnd)

//����Լ�
public:
	LmUIThinSplitterWnd();
	virtual ~LmUIThinSplitterWnd();


//�������
public:

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};


