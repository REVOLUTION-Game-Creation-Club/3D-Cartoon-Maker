#pragma once

// CThinSplitterWnd

class LmUIThinSplitterWnd : public CSplitterWnd
{
	DECLARE_DYNAMIC(LmUIThinSplitterWnd)

//¸â¹öÇÔ¼ö
public:
	LmUIThinSplitterWnd();
	virtual ~LmUIThinSplitterWnd();


//¸â¹öº¯¼ö
public:

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};


