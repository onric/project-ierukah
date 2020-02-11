// ABI_TREE.cpp: 구현 파일
//

#include "stdafx.h"
#include "ABI_TREE.h"
#include "afxdialogex.h"
#include "resource.h"


// ABI_TREE 대화 상자

IMPLEMENT_DYNAMIC(ABI_TREE, CDialog)
CString point_buf;
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
	DDX_Control(pDX, IDC_POINT, dis_point);
	DDX_Control(pDX, IDC_BUTTON1, 백조의부름);
	DDX_Control(pDX, IDC_BUTTON2, 회복의삼지창);
	DDX_Control(pDX, IDC_BUTTON3, 밤의사냥꾼);
	DDX_Control(pDX, IDC_BUTTON4, 비겁한고블린);
	DDX_Control(pDX, IDC_BUTTON5, 깨달음);
	DDX_Control(pDX, IDC_BUTTON6, 흑마법);
	DDX_Control(pDX, IDC_BUTTON7, 음과양의조화);
	DDX_Control(pDX, IDC_BUTTON8, 아레스의투구);
	DDX_Control(pDX, IDC_BUTTON9, 라식);
	DDX_Control(pDX, IDC_BUTTON10, 축복의장화);
	DDX_Control(pDX, IDC_BUTTON11, 신비로운반지);
	DDX_Control(pDX, IDC_BUTTON12, 치명적인탄환);
	DDX_Control(pDX, IDC_BUTTON13, 깨물기);
	DDX_Control(pDX, IDC_BUTTON14, 이동의즐거움);
}


BEGIN_MESSAGE_MAP(ABI_TREE, CDialog)
	ON_BN_CLICKED(IDOK, &ABI_TREE::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &ABI_TREE::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON32, &ABI_TREE::OnBnClickedButton32)
	ON_BN_CLICKED(IDC_BUTTON1, &ABI_TREE::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &ABI_TREE::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &ABI_TREE::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &ABI_TREE::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &ABI_TREE::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &ABI_TREE::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &ABI_TREE::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &ABI_TREE::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &ABI_TREE::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &ABI_TREE::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &ABI_TREE::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &ABI_TREE::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &ABI_TREE::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &ABI_TREE::OnBnClickedButton14)
	ON_BN_CLICKED(IDC_BUTTON15, &ABI_TREE::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &ABI_TREE::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &ABI_TREE::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON18, &ABI_TREE::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &ABI_TREE::OnBnClickedButton19)
	ON_BN_CLICKED(IDC_BUTTON20, &ABI_TREE::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &ABI_TREE::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &ABI_TREE::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON23, &ABI_TREE::OnBnClickedButton23)
	ON_BN_CLICKED(IDC_BUTTON24, &ABI_TREE::OnBnClickedButton24)
	ON_BN_CLICKED(IDC_BUTTON25, &ABI_TREE::OnBnClickedButton25)
	ON_BN_CLICKED(IDC_BUTTON26, &ABI_TREE::OnBnClickedButton26)
	ON_BN_CLICKED(IDC_BUTTON28, &ABI_TREE::OnBnClickedButton28)
	ON_BN_CLICKED(IDC_BUTTON29, &ABI_TREE::OnBnClickedButton29)
	ON_BN_CLICKED(IDC_BUTTON30, &ABI_TREE::OnBnClickedButton30)
	ON_BN_CLICKED(IDC_BUTTON27, &ABI_TREE::OnBnClickedButton27)
	ON_BN_CLICKED(IDC_BUTTON31, &ABI_TREE::OnBnClickedButton31)
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

//이하 특성선택 구문, 비활성화도 구현해야한다.
void ABI_TREE::OnBnClickedButton1()//백조의 부름
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	TRACE("호출\n");
	if (point > 0)
	{
		TRACE("포인트 있음\n");
		if (a_1_1 != TRUE)
		{
			a_1_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			UpdateData(TRUE);
			dis_point.SetWindowTextW(point_buf);
			if (a_1 == FALSE)
			{
				a_1 = TRUE;
				TRACE("a_1 true\n");
			}
			회복의삼지창.EnableWindow(FALSE);
			TRACE("버튼 비활성화\n");
			enabling();
		}
	}
	TRACE("함수종료\n");
}
void ABI_TREE::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_1_2 != TRUE)
		{
			a_1_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_1 == FALSE)
			{
				a_1 = TRUE;
			}
			백조의부름.EnableWindow(FALSE);
			enabling();
		}
	}
}






void ABI_TREE::OnBnClickedButton3()//밤사
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_1_1 != TRUE)
		{
			b_1_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_1 == FALSE)
			{
				b_1 = TRUE;
			}
			비겁한고블린.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton4()//고블린
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_1_2 != TRUE)
		{
			b_1_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_1 == FALSE)
			{
				b_1 = TRUE;
			}
			밤의사냥꾼.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton5()//깨달음
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_1_1 != TRUE)
		{
			c_1_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_1 == FALSE)
			{
				c_1 = TRUE;
			}
			흑마법.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton6()//흑마법
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_1_2 != TRUE)
		{
			c_1_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_1 == FALSE)
			{
				c_1 = TRUE;
			}
			깨달음.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton7()//
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_1_1 != TRUE)
		{
			d_1_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_1 == FALSE)
			{
				d_1 = TRUE;
			}
			아레스의투구.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_1_2 != TRUE)
		{
			d_1_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_1 == FALSE)
			{
				d_1 = TRUE;
			}
			음과양의조화.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_1_1 != TRUE)
		{
			e_1_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_1 == FALSE)
			{
				e_1 = TRUE;
			}
			축복의장화.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_1_2 != TRUE)
		{
			e_1_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_2 == FALSE)
			{
				e_2 = TRUE;
			}
			라식.EnableWindow(FALSE);
			enabling();
		}
	}
}


void ABI_TREE::OnBnClickedButton11()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton12()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton13()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton14()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton15()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton16()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton17()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton18()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton19()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton20()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton21()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton22()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton23()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton24()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton25()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton26()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton28()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton29()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton30()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton27()//투쟁 갑무
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton31()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void ABI_TREE::OnBnClickedButton32()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

