
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "Resource.h"

class Cocr_dllApp : public CWinApp
{
public:
	Cocr_dllApp();

public:
	virtual BOOL InitInstance();

	HWND m_hwndDlg;

	DECLARE_MESSAGE_MAP()
private:
	ULONG_PTR m_gdiplusToken;
public:
	virtual int ExitInstance();
};

extern Cocr_dllApp theApp;