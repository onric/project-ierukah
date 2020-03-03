// readdata.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "readdata.h"
#include "afxdialogex.h"
#include <io.h>
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
	DDX_Control(pDX, IDC_EDIT1, editcon);
}


BEGIN_MESSAGE_MAP(readdata, CDialogEx)
	ON_BN_CLICKED(IDOK, &readdata::OnBnClickedOk)
END_MESSAGE_MAP()


// readdata 메시지 처리기


void readdata::OnBnClickedOk()
{
	REF_chara();
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
	TRACE("name : %s\n", name);
	//파일 존재확인
	int acees = _access_s(name, 00);
	if (acees != 0)
	{
		TRACE("파일없음\n");
		AfxMessageBox(_T("해당 유저의 저장소가 없습니다."));
		return;
	}
	else
	{
		
		//if (IO.readsave(name) == -1) { TRACE("오류검출\n!"); }
		//TRACE("테스트용 게임횟수 출력 : %d\n", 총합.게임횟수);
		//표현합니다
		STATUS stat;
		stat.getname(name);
		
		TRACE("새 다이얼로그 오픈\n");
		stat.DoModal();
		TRACE("새 다이얼로그 종료\n");
		//TRACE("테스트용 게임횟수 출력 : %d\n", 총합.게임횟수);
		
	}
	delete name;
	

	
	
	CDialogEx::OnOK();
}
