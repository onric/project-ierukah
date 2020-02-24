// readdata.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "readdata.h"
#include "afxdialogex.h"

#include "STATUS.h"

FILE* save;

// readdata 대화 상자

IMPLEMENT_DYNAMIC(readdata, CDialogEx)

readdata::readdata(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_readsave, pParent)
	, inputedname(_T(""))
{

}

readdata::~readdata()
{
}

void readdata::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, inputedname);
	DDV_MaxChars(pDX, inputedname, 20);
}


BEGIN_MESSAGE_MAP(readdata, CDialogEx)
	ON_BN_CLICKED(IDOK, &readdata::OnBnClickedOk)
END_MESSAGE_MAP()


// readdata 메시지 처리기


void readdata::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	wchar_t *buf;
	char* name;
	int len;
	buf = inputedname.GetBuffer(inputedname.GetLength());
	len = WideCharToMultiByte(CP_ACP, 0, buf, -1, NULL, 0, NULL, NULL);
	 name = new char[len];
	WideCharToMultiByte(CP_ACP, 0, buf, -1, name, len, 0, 0);
	TRACE("LEN:%d\n", len);

	TRACE("TIME:카피전, username=%s \n", name);
	strcpy(name, name);
	//파일 존재확인
	save = fopen(name, "r");
	if (save == NULL)
	{
		AfxMessageBox(_T("해당 유저의 저장소가 없습니다."));
	}
	else
	{
	
		readsave(name);
		//표현합니다
		STATUS stat;
		stat.DoModal();
		TRACE("TIME:readdata, FCLOSE\n");
		fclose(save);
	}
	delete name;
	


	
	CDialogEx::OnOK();
}
