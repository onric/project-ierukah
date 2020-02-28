// ABI_TREE.cpp: 구현 파일
//

#include "stdafx.h"
#include "ABI_TREE.h"
#include "afxdialogex.h"
#include "resource.h"
#include "ierukah.h"
#include "WRITEMODE.h"

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
	DDX_Control(pDX, IDC_BUTTON15, 판다렌의화염작렬);
	DDX_Control(pDX, IDC_BUTTON16, 마법부스터);
	DDX_Control(pDX, IDC_BUTTON17, 단단한벽);
	DDX_Control(pDX, IDC_BUTTON18, 마법의망토);
	DDX_Control(pDX, IDC_BUTTON19, 고대신비의마법서);
	DDX_Control(pDX, IDC_BUTTON20, 산뜻한기분);
	DDX_Control(pDX, IDC_BUTTON21, 갈망의검);
	DDX_Control(pDX, IDC_BUTTON22, 지배전투의기본);
	DDX_Control(pDX, IDC_BUTTON23, 지배푸른영기);
	DDX_Control(pDX, IDC_BUTTON24, 마법전투의기본);
	DDX_Control(pDX, IDC_BUTTON25, 마법푸른영기);
	DDX_Control(pDX, IDC_BUTTON26, 강인한체력);
	DDX_Control(pDX, IDC_BUTTON28, 활력증진);
	DDX_Control(pDX, IDC_BUTTON29, 저돌적인공격방식);
	DDX_Control(pDX, IDC_BUTTON30, 신비한공격방식);
	DDX_Control(pDX, IDC_BUTTON27, 투쟁갑옷무력화);
	DDX_Control(pDX, IDC_BUTTON31, 투쟁저항무력화);
	DDX_Control(pDX, IDC_BUTTON32, 지배갑옷무력화);
	DDX_Control(pDX, IDC_BUTTON33, 지배저항무력화);
	DDX_Control(pDX, IDC_BUTTON34, 마법갑옷무력화);
	DDX_Control(pDX, IDC_BUTTON35, 마법저항무력화);
	DDX_Control(pDX, IDC_BUTTON36, 신비의방패);
	DDX_Control(pDX, IDC_BUTTON37, 저항의방패);
	DDX_Control(pDX, IDC_BUTTON38, 경험치사기꾼);
	DDX_Control(pDX, IDC_BUTTON39, 골드도둑);
	DDX_Control(pDX, IDC_BUTTON40, 투쟁타격용분);
	DDX_Control(pDX, IDC_BUTTON41, 투쟁마법용분);
	DDX_Control(pDX, IDC_BUTTON42, 지배물리용분);
	DDX_Control(pDX, IDC_BUTTON43, 지배마법용분);
	DDX_Control(pDX, IDC_BUTTON44, 마법물리용분);
	DDX_Control(pDX, IDC_BUTTON45, 마법마법용분);
	DDX_Control(pDX, IDC_BUTTON46, 긍지최후의방어);
	DDX_Control(pDX, IDC_BUTTON47, 축복최후의방어);
	DDX_Control(pDX, IDC_BUTTON48, 집중사격);
	DDX_Control(pDX, IDC_BUTTON49, 무자비한연사);
	DDX_Control(pDX, IDC_BUTTON50, 환상적인공격);
	DDX_Control(pDX, IDC_BUTTON51, 제우스의분노);
	DDX_Control(pDX, IDC_BUTTON52, 오디세우스의성검);
	DDX_Control(pDX, IDC_BUTTON53, 대마법신비로운메테오);
	DDX_Control(pDX, IDC_BUTTON54, 마법펀치);
	DDX_Control(pDX, IDC_BUTTON55, 곰발바닥);
	DDX_Control(pDX, IDC_BUTTON56, 토르의분노);
	DDX_Control(pDX, IDC_BUTTON57, 마법의점멸);
	DDX_Control(pDX, IDC_BUTTON58, 신의가호);
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
	ON_BN_CLICKED(IDC_BUTTON33, &ABI_TREE::OnBnClickedButton33)
	ON_BN_CLICKED(IDC_BUTTON34, &ABI_TREE::OnBnClickedButton34)
	ON_BN_CLICKED(IDC_BUTTON35, &ABI_TREE::OnBnClickedButton35)
	ON_BN_CLICKED(IDC_BUTTON36, &ABI_TREE::OnBnClickedButton36)
	ON_BN_CLICKED(IDC_BUTTON37, &ABI_TREE::OnBnClickedButton37)
	ON_BN_CLICKED(IDC_BUTTON38, &ABI_TREE::OnBnClickedButton38)
	ON_BN_CLICKED(IDC_BUTTON39, &ABI_TREE::OnBnClickedButton39)
	ON_BN_CLICKED(IDC_BUTTON40, &ABI_TREE::OnBnClickedButton40)
	ON_BN_CLICKED(IDC_BUTTON41, &ABI_TREE::OnBnClickedButton41)
	ON_BN_CLICKED(IDC_BUTTON42, &ABI_TREE::OnBnClickedButton42)
	ON_BN_CLICKED(IDC_BUTTON43, &ABI_TREE::OnBnClickedButton43)
	ON_BN_CLICKED(IDC_BUTTON44, &ABI_TREE::OnBnClickedButton44)
	ON_BN_CLICKED(IDC_BUTTON45, &ABI_TREE::OnBnClickedButton45)
	ON_BN_CLICKED(IDC_BUTTON46, &ABI_TREE::OnBnClickedButton46)
	ON_BN_CLICKED(IDC_BUTTON47, &ABI_TREE::OnBnClickedButton47)
	ON_BN_CLICKED(IDC_BUTTON48, &ABI_TREE::OnBnClickedButton48)
	ON_BN_CLICKED(IDC_BUTTON49, &ABI_TREE::OnBnClickedButton49)
	ON_BN_CLICKED(IDC_BUTTON50, &ABI_TREE::OnBnClickedButton50)
	ON_BN_CLICKED(IDC_BUTTON51, &ABI_TREE::OnBnClickedButton51)
	ON_BN_CLICKED(IDC_BUTTON52, &ABI_TREE::OnBnClickedButton52)
	ON_BN_CLICKED(IDC_BUTTON53, &ABI_TREE::OnBnClickedButton53)
	ON_BN_CLICKED(IDC_BUTTON54, &ABI_TREE::OnBnClickedButton54)
	ON_BN_CLICKED(IDC_BUTTON55, &ABI_TREE::OnBnClickedButton55)
	ON_BN_CLICKED(IDC_BUTTON56, &ABI_TREE::OnBnClickedButton56)
	ON_BN_CLICKED(IDC_BUTTON57, &ABI_TREE::OnBnClickedButton57)
	ON_BN_CLICKED(IDC_BUTTON58, &ABI_TREE::OnBnClickedButton58)
	ON_BN_CLICKED(IDC_RESET, &ABI_TREE::OnBnClickedReset)
END_MESSAGE_MAP()


// ABI_TREE 메시지 처리기


void ABI_TREE::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	TRACE("ok버튼 눌림\n");
	int i = 0;
	if (a_1_1 == TRUE) { TRAN_abi[i] = 1; TRACE("%d 눌림\n", i);}i++;

	if (a_1_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_2_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_2_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_3_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_4_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_4_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_5_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_5_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_6_1 == TRUE){ TRAN_abi[i] = 1;TRACE("%d 눌림\n", i); }i++;

	if (a_6_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//무자비한연사

	if (a_6_3 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//환상적인공격

	if (b_1_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//밤의사냥꾼

	if (b_1_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//비겁한고블린

	if (b_2_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//깨물기

	if (b_2_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//이동의즐거움

	if (b_3_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배전투의기본

	if (b_3_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배푸른영기

	if (b_4_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배갑옷무력화

	if (b_4_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배저항무력화

	if (b_5_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배물리용분++; }

	if (b_5_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//지배마법용분++; }

	if (b_6_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//제우스의분노++; }

	if (b_6_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//오디세우스의성검++; }

	if (c_1_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//깨달음++; }

	if (c_1_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//흑마법++; }

	if (c_2_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//판다렌의화염작렬++; }

	if (c_2_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법부스터++; }

	if (c_3_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법전투의기본++; }

	if (c_3_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법푸른영기++; }

	if (c_4_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법갑옷무력화++; }

	if (c_4_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법저항무력화++; }

	if (c_5_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법물리용분++; }

	if (c_5_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법마법용분++; }

	if (c_6_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//대마법신비로운메테오++; }

	if (c_6_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법펀치++; }

	if (d_1_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//음과양의조화++; }

	if (d_1_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//아레스의투구++; }

	if (d_2_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//단단한벽++; }

	if (d_2_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법의망토++; }

	if (d_3_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//강인한체력++; }

	if (d_4_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//신비의방패++; }

	if (d_4_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//저항의방패++; }

	if (d_5_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//긍지최후의방어++; }

	if (d_6_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//곰발바닥++; }

	if (d_6_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//토르의분노++; }

	if (e_1_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//라식++; }

	if (e_1_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//축복의장화++; }

	if (e_2_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//고대신비의마법서++; }

	if (e_2_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//산뜻한기분++; }

	if (e_3_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//활력증진++; }

	if (e_3_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//저돌적인공격방식++; }

	if (e_3_3 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//신비한공격방식++; }

	if (e_4_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//경험치사기꾼++; }

	if (e_4_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//골드도둑++; }

	if (e_5_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//축복최후의방어++; }

	if (e_6_1 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//마법의점멸++; }

	if (e_6_2 == TRUE) { TRAN_abi[i] = 1;TRACE("%d 눌림\n", i);}i++;//신의가호++; }
	TRACE("검사 완료\n");
	int j = 0;
	while (1)
	{
		if (j == 52)
		{
			break;
		}
		if (TRAN_abi[j] == 1)
		{
			TRACE("%d\n", j);
		}
		j++;
	}
	
	CDialog::OnOK();
}


void ABI_TREE::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	reset();
	buttonreset();
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
			if (TRE_a == 0)
			{
				TRE_count++;
			}
			TRE_a++;
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
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE);	}
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE);}
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_a == 0)
			{
				TRE_count++;
			}
			TRE_a++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_1 == FALSE)
			{
				a_1 = TRUE;
			}
			백조의부름.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_b == 0)
			{
				TRE_count++;
			}
			TRE_b++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_1 == FALSE)
			{
				b_1 = TRUE;
			}
			비겁한고블린.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_b == 0)
			{
				TRE_count++;
			}
			TRE_b++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_1 == FALSE)
			{
				b_1 = TRUE;
			}
			밤의사냥꾼.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_c == 0)
			{
				TRE_count++;
			}
			TRE_c++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_1 == FALSE)
			{
				c_1 = TRUE;
			}
			흑마법.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_c == 0)
			{
				TRE_count++;
			}
			TRE_c++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_1 == FALSE)
			{
				c_1 = TRUE;
			}
			깨달음.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_d == 0)
			{
				TRE_count++;
			}
			TRE_d++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_1 == FALSE)
			{
				d_1 = TRUE;
			}
			아레스의투구.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_d == 0)
			{
				TRE_count++;
			}
			TRE_d++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_1 == FALSE)
			{
				d_1 = TRUE;
			}
			음과양의조화.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_e == 0)
			{
				TRE_count++;
			}
			TRE_e++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_1 == FALSE)
			{
				e_1 = TRUE;
			}
			축복의장화.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
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
			if (TRE_e == 0)
			{
				TRE_count++;
			}
			TRE_e++;
			
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_1 == FALSE)
			{
				e_1 = TRUE;
			}
			라식.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton11()//신비로운 반지
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_2_1 != TRUE)
		{
			a_2_1 = TRUE;
			if (TRE_a == 0)
			{
				TRE_count++;
			}
			TRE_a++;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_2 == FALSE)
			{
				a_2 = TRUE;
			}
			치명적인탄환.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton12()//치명적인탄환
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_2_2 != TRUE)
		{
			a_2_2 = TRUE;
			point--;
			if (TRE_a == 0)
			{
				TRE_count++;
			}
			TRE_a++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_2 == FALSE)
			{
				a_2 = TRUE;
			}
			신비로운반지.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton13()//깨물기
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_2_1 != TRUE)
		{
			b_2_1 = TRUE;
			point--;
			if (TRE_b == 0)
			{
				TRE_count++;
			}
			TRE_b++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_2 == FALSE)
			{
				b_2 = TRUE;
			}
			이동의즐거움.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton14()//이동의즐거움
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_2_2 != TRUE)
		{
			b_2_2 = TRUE;
			point--;
			if (TRE_b == 0)
			{
				TRE_count++;
			}
			TRE_b++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_2 == FALSE)
			{
				b_2 = TRUE;
			}
			깨물기.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton15()//화작
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_2_1 != TRUE)
		{
			c_2_1 = TRUE;
			point--;
			if (TRE_c == 0)
			{
				TRE_count++;
			}
			TRE_c++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_2 == FALSE)
			{
				c_2 = TRUE;
			}
			마법부스터.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton16()//마부
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_2_2 != TRUE)
		{
			c_2_2 = TRUE;
			point--;
			if (TRE_c == 0)
			{
				TRE_count++;
			}
			TRE_c++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_2 == FALSE)
			{
				c_2 = TRUE;
			}
			판다렌의화염작렬.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}
void ABI_TREE::OnBnClickedButton17()//단단한벽
{
	if (point > 0)
	{
		if (d_2_1 != TRUE)
		{
			d_2_1 = TRUE;
			point--;
			if (TRE_d == 0)
			{
				TRE_count++;
			}
			TRE_d++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_2 == FALSE)
			{
				d_2 = TRUE;
			}
			마법의망토 .EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}
void ABI_TREE::OnBnClickedButton18()//망토
{
	if (point > 0)
	{
		if (d_2_2 != TRUE)
		{
			d_2_2 = TRUE;
			point--;
			if (TRE_d == 0)
			{
				TRE_count++;
			}
			TRE_d++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_2 == FALSE)
			{
				d_2 = TRUE;
			}
			단단한벽.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}

void ABI_TREE::OnBnClickedButton19()//마법서
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_2_1 != TRUE)
		{
			e_2_1 = TRUE;
			point--;
			if (TRE_e == 0)
			{
				TRE_count++;
			}
			TRE_e++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_2 == FALSE)
			{
				e_2 = TRUE;
			}
			산뜻한기분.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton20()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_2_2 != TRUE)
		{
			e_2_2 = TRUE;
			point--;
			if (TRE_e == 0)
			{
				TRE_count++;
			}
			TRE_e++;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_2 == FALSE)
			{
				e_2 = TRUE;
			}
			고대신비의마법서.EnableWindow(FALSE);
			if(point>0){enabling();}
			if (point == 0)
			{
				if (a_1_1 == FALSE) { 백조의부름.EnableWindow(FALSE); }
				if (a_1_2 == FALSE) { 회복의삼지창.EnableWindow(FALSE); }
				if (b_1_1 == FALSE) { 밤의사냥꾼.EnableWindow(FALSE); }
				if (b_1_2 == FALSE) { 비겁한고블린.EnableWindow(FALSE); }
				if (c_1_1 == FALSE) { 깨달음.EnableWindow(FALSE); }
				if (c_1_2 == FALSE) { 흑마법.EnableWindow(FALSE); }
				if (d_1_1 == FALSE) { 음과양의조화.EnableWindow(FALSE); }
				if (d_1_2 == FALSE) { 아레스의투구.EnableWindow(FALSE); }
				if (e_1_1 == FALSE) { 라식.EnableWindow(FALSE); }
				if (e_1_2 == FALSE) { 축복의장화.EnableWindow(FALSE); }
				if (a_2_1 == FALSE) { 신비로운반지.EnableWindow(FALSE); }
				if (a_2_2 == FALSE) { 치명적인탄환.EnableWindow(FALSE); }
				if (b_2_1 == FALSE) { 깨물기.EnableWindow(FALSE); }
				if (b_2_2 == FALSE) { 이동의즐거움.EnableWindow(FALSE); }
				if (c_2_1 == FALSE) { 판다렌의화염작렬.EnableWindow(FALSE); }
				if (c_2_2 == FALSE) { 마법부스터.EnableWindow(FALSE); }
				if (d_2_1 == FALSE) { 단단한벽.EnableWindow(FALSE); }
				if (d_2_2 == FALSE) { 마법의망토.EnableWindow(FALSE); }
				if (e_2_1 == FALSE) { 고대신비의마법서.EnableWindow(FALSE); }
				if (e_2_2 == FALSE) { 산뜻한기분.EnableWindow(FALSE); }
			}
		}
	}
}


void ABI_TREE::OnBnClickedButton21()//갈망의검
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_3_1 != TRUE)
		{
			a_3_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_3 == FALSE)
			{
				a_3 = TRUE;
				a_2 = FALSE;
			}
			//단독라인으로 비활성화할 개체없음
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton22()//지배 전투의기본
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_3_1 != TRUE)
		{
			b_3_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_3 == FALSE)
			{
				b_3 = TRUE;
				b_2 = FALSE;
			}
			지배푸른영기.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton23()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_3_2 != TRUE)
		{
			b_3_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_3 == FALSE)
			{
				b_3 = TRUE;
				b_2 = FALSE;
			}
			지배전투의기본.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton24()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_3_1 != TRUE)
		{
			c_3_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_3 == FALSE)
			{
				c_3 = TRUE;
				c_2 = FALSE;
			}
			마법푸른영기.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton25()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_3_2 != TRUE)
		{
			c_3_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_3 == FALSE)
			{
				c_3 = TRUE;
				c_2 = FALSE;
			}
			마법전투의기본.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton26()//강인한체력
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_3_1 != TRUE)
		{
			d_3_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_3 == FALSE)
			{
				d_3 = TRUE;
				d_2 = FALSE;
			}
			//단독라인
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton28()//활력증진
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_3_1 != TRUE)
		{
			e_3_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_3 == FALSE)
			{
				e_3 = TRUE;
				e_2 = FALSE;
			}
			신비한공격방식.EnableWindow(FALSE);
			저돌적인공격방식.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton29()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_3_2 != TRUE)
		{
			e_3_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_3 == FALSE)
			{
				e_3 = TRUE;
				e_2 = FALSE;
			}
			신비한공격방식.EnableWindow(FALSE);
			활력증진.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton30()//신비한공격
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_3_3 != TRUE)
		{
			e_3_3 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_3 == FALSE)
			{
				e_3 = TRUE;
				e_2 = FALSE;
			}
			활력증진.EnableWindow(FALSE);
			저돌적인공격방식.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton27()//투쟁갑옷무력화
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_4_1 != TRUE)
		{
			a_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_4 == FALSE)
			{
				a_4 = TRUE;
				a_3 = FALSE;
			}
			투쟁저항무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton31()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_4_2 != TRUE)
		{
			a_4_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_4 == FALSE)
			{
				a_4 = TRUE;
				a_3 = FALSE;
			}
			투쟁갑옷무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}

/*
void ABI_TREE::OnBnClickedButton27()//투쟁 갑무
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void ABI_TREE::OnBnClickedButton31()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

}
*/
void ABI_TREE::OnBnClickedButton32()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_4_1 != TRUE)
		{
			b_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_4 == FALSE)
			{
				b_4 = TRUE;
				b_3 = FALSE;
			}
			지배저항무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}



void ABI_TREE::OnBnClickedButton33()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_4_2 != TRUE)
		{
			b_4_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_4 == FALSE)
			{
				b_4 = TRUE;
				b_3 = FALSE;
			}
			지배갑옷무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton34()//마법갑무
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_4_1 != TRUE)
		{
			c_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_4 == FALSE)
			{
				c_4 = TRUE;
				c_3 = FALSE;
			}
			마법저항무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton35()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_4_2 != TRUE)
		{
			c_4_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_4 == FALSE)
			{
				c_4 = TRUE;
				c_3 = FALSE;
			}
			마법갑옷무력화.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton36()//신비의방패
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_4_1 != TRUE)
		{
			d_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_4 == FALSE)
			{
				d_4 = TRUE;
				d_3 = FALSE;
			}
			저항의방패.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton37()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_4_2 != TRUE)
		{
			d_4_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_4 == FALSE)
			{
				d_4 = TRUE;
				d_3 = FALSE;
			}
			신비의방패.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton38()//경사
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_4_1 != TRUE)
		{
			e_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_4 == FALSE)
			{
				e_4 = TRUE;
				e_3 = FALSE;
			}
			골드도둑.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton39()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_4_1 != TRUE)
		{
			e_4_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_4 == FALSE)
			{
				e_4 = TRUE;
				e_3 = FALSE;
			}
			경험치사기꾼.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton40()//타격용분
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_5_1 != TRUE)
		{
			a_5_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_5 == FALSE)
			{
				a_5 = TRUE;
				a_4 = FALSE;
			}
			투쟁마법용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton41()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_5_2 != TRUE)
		{
			a_5_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_5 == FALSE)
			{
				a_5 = TRUE;
				a_4 = FALSE;
			}
			투쟁타격용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton42()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_5_1 != TRUE)
		{
			b_5_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_5 == FALSE)
			{
				b_5 = TRUE;
				b_4 = FALSE;
			}
			지배마법용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}



void ABI_TREE::OnBnClickedButton43()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_5_2 != TRUE)
		{
			b_5_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_5 == FALSE)
			{
				b_5 = TRUE;
				b_4 = FALSE;
			}
			지배물리용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton44()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_5_1 != TRUE)
		{
			c_5_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_5 == FALSE)
			{
				c_5 = TRUE;
				c_4 = FALSE;
			}
			마법마법용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton45()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_5_2 != TRUE)
		{
			c_5_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_5 == FALSE)
			{
				c_5 = TRUE;
				c_4 = FALSE;
			}
			마법물리용분.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton46()//긍지최후의방어
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_5_1 != TRUE)
		{
			d_5_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_5 == FALSE)
			{
				d_5 = TRUE;
				d_4 = FALSE;
			}
			//단일라인
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton47()//축복최후의방어
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_5_1 != TRUE)
		{
			e_5_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_5 == FALSE)
			{
				e_5 = TRUE;
				e_4 = FALSE;
			}
			//단일라인
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton48()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_6_1 != TRUE)
		{
			a_6_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_5 == TRUE)
			{
				a_5 = FALSE;
			}
			무자비한연사.EnableWindow(FALSE);
			환상적인공격.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton49()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_6_2 != TRUE)
		{
			a_6_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_5 == TRUE)
			{
				a_5 = FALSE;
			}
			집중사격.EnableWindow(FALSE);
			환상적인공격.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton50()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (a_6_3 != TRUE)
		{
			a_6_3 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (a_5 == TRUE)
			{
				a_5 = FALSE;
			}
			무자비한연사.EnableWindow(FALSE);
			집중사격.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton51()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_6_1 != TRUE)
		{
			b_6_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_5 == TRUE)
			{
				b_5 = FALSE;
			}
			오디세우스의성검.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton52()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (b_6_2 != TRUE)
		{
			b_6_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (b_5 == TRUE)
			{
				b_5 = FALSE;
			}
			제우스의분노.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton53()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_6_1 != TRUE)
		{
			c_6_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_5 == TRUE)
			{
				c_5 = FALSE;
			}
			마법펀치.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton54()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (c_6_2 != TRUE)
		{
			c_6_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (c_5 == TRUE)
			{
				c_5 = FALSE;
			}
			대마법신비로운메테오.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton55()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_6_1 != TRUE)
		{
			d_6_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_5 == TRUE)
			{
				d_5 = FALSE;
			}
			토르의분노.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton56()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (d_6_2 != TRUE)
		{
			d_6_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (d_5 == TRUE)
			{
				d_5 = FALSE;
			}
			곰발바닥.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton57()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_6_1 != TRUE)
		{
			e_6_1 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_5 == TRUE)
			{
				e_5 = FALSE;
			}
			신의가호.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedButton58()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	if (point > 0)
	{
		if (e_6_2 != TRUE)
		{
			e_6_2 = TRUE;
			point--;
			point_buf.Format(_T("%d"), point);
			dis_point.SetWindowTextW(point_buf);
			if (e_5 == TRUE)
			{
				e_5 = FALSE;
			}
			마법의점멸.EnableWindow(FALSE);
			if(point>0){enabling();}
		}
	}
}


void ABI_TREE::OnBnClickedReset()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	reset();
	buttonreset();
}
