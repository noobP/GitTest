// Testtest.h : Testtest DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CTesttestApp
// �йش���ʵ�ֵ���Ϣ������� Testtest.cpp
//

class CTesttestApp : public CWinApp
{
public:
	CTesttestApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
