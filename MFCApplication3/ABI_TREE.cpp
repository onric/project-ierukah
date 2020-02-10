// ABI_TREE.cpp: 구현 파일
//

#include "stdafx.h"
#include "ABI_TREE.h"
#include "afxdialogex.h"
#include "WRITEMODE.h"
#include "resource.h"


// ABI_TREE 대화 상자

IMPLEMENT_DYNAMIC(ABI_TREE, CDialog)

ABI_TREE::ABI_TREE(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_TREE, pParent)
{

}

ABI_TREE::~ABI_TREE()
{
}

void ABI_TREE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ABI_TREE, CDialog)
	ON_BN_CLICKED(IDOK, &ABI_TREE::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &ABI_TREE::OnBnClickedCancel)
END_MESSAGE_MAP()


// ABI_TREE 메시지 처리기


void ABI_TREE::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnOK();
}


void ABI_TREE::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}
