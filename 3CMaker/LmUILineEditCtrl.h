#pragma once


// LmUILineEditCtrl

class LmUILineEditCtrl : public CEdit
{
	DECLARE_DYNAMIC(LmUILineEditCtrl)

public:
	LmUILineEditCtrl();
	virtual ~LmUILineEditCtrl();

protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};


