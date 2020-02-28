// READTREE.cpp: 구현 파일
//

#include "stdafx.h"
#include "ierukah.h"
#include "READTREE.h"
#include "afxdialogex.h"
#include "resource.h"


// READTREE 대화 상자

IMPLEMENT_DYNAMIC(READTREE, CDialogEx)

READTREE::READTREE(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_TRESTAT, pParent)
{

}

READTREE::~READTREE()
{
}

void READTREE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(READTREE, CDialogEx)
END_MESSAGE_MAP()


// READTREE 메시지 처리기
