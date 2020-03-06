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
	//TRACE("test2 : %d\n", M_chara.게임횟수);
	//SetDlgItemInt(IDC_EDIT1, M_chara.백조의부름);
}

READTREE::~READTREE()
{
}

void READTREE::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, 백조의부름);
	DDX_Control(pDX, IDC_EDIT2, 회복의삼지창);
	DDX_Control(pDX, IDC_EDIT3, 밤의사냥꾼);
	DDX_Control(pDX, IDC_EDIT4, 비겁한고블린);
	DDX_Control(pDX, IDC_EDIT5, 깨달음);
	DDX_Control(pDX, IDC_EDIT6, 흑마법);
	DDX_Control(pDX, IDC_EDIT7, 음과양의조화);
	DDX_Control(pDX, IDC_EDIT9, 라식);
	DDX_Control(pDX, IDC_EDIT10, 축복의장화);
	DDX_Control(pDX, IDC_EDIT8, 아레스의투구);
	DDX_Control(pDX, IDC_EDIT11, 신비로운반지);
	DDX_Control(pDX, IDC_EDIT12, 치명적인탄환);
	DDX_Control(pDX, IDC_EDIT13, 깨물기);
	DDX_Control(pDX, IDC_EDIT14, 이동의즐거움);
	DDX_Control(pDX, IDC_EDIT15, 판다렌의화염작렬);
	DDX_Control(pDX, IDC_EDIT16, 마법부스터);
	DDX_Control(pDX, IDC_EDIT17, 단단한벽);
	DDX_Control(pDX, IDC_EDIT18, 마법의망토);
	DDX_Control(pDX, IDC_EDIT19, 고대신비의마법서);
	DDX_Control(pDX, IDC_EDIT20, 산뜻한기분);
	DDX_Control(pDX, IDC_EDIT21, 갈망의검);
	DDX_Control(pDX, IDC_EDIT22, 지배전투의기본);
	DDX_Control(pDX, IDC_EDIT23, 지배푸른영기);
	DDX_Control(pDX, IDC_EDIT24, 마법전투의기본);
	DDX_Control(pDX, IDC_EDIT25, 마법푸른영기);
	DDX_Control(pDX, IDC_EDIT26, 강인한체력);
	DDX_Control(pDX, IDC_EDIT27, 활력증진);
	DDX_Control(pDX, IDC_EDIT28, 저돌적인공격방식);
	DDX_Control(pDX, IDC_EDIT29, 신비한공격방식);
	DDX_Control(pDX, IDC_EDIT30, 투쟁갑옷무력화);
	DDX_Control(pDX, IDC_EDIT31, 투쟁저항무력화);
	DDX_Control(pDX, IDC_EDIT32, 지배갑옷무력화);
	DDX_Control(pDX, IDC_EDIT33, 지배저항무력화);
	DDX_Control(pDX, IDC_EDIT34, 마법갑옷무력화);
	DDX_Control(pDX, IDC_EDIT35, 마법저항무력화);
	DDX_Control(pDX, IDC_EDIT36, 신비의방패);
	DDX_Control(pDX, IDC_EDIT37, 저항의방패);
	DDX_Control(pDX, IDC_EDIT38, 경험치사기꾼);
	DDX_Control(pDX, IDC_EDIT39, 골드도둑);
	DDX_Control(pDX, IDC_EDIT40, 투쟁타격용분);
	DDX_Control(pDX, IDC_EDIT41, 투쟁마법용분);
	DDX_Control(pDX, IDC_EDIT42, 지배물리용분);
	DDX_Control(pDX, IDC_EDIT43, 지배마법용분);
	DDX_Control(pDX, IDC_EDIT44, 마법물리용분);
	DDX_Control(pDX, IDC_EDIT45, 마법마법용분);
	DDX_Control(pDX, IDC_EDIT46, 긍지최후의방어);
	DDX_Control(pDX, IDC_EDIT48, 축복최후의방어);
	DDX_Control(pDX, IDC_EDIT47, 집중사격);
	DDX_Control(pDX, IDC_EDIT49, 무자비한연사);
	DDX_Control(pDX, IDC_EDIT50, 환상적인공격);
	DDX_Control(pDX, IDC_EDIT51, 제우스의분노);
	DDX_Control(pDX, IDC_EDIT52, 오디세우스의성검);
	DDX_Control(pDX, IDC_EDIT53, 대마법신비로운메테오);
	DDX_Control(pDX, IDC_EDIT54, 마법펀치);
	DDX_Control(pDX, IDC_EDIT55, 곰발바닥);
	DDX_Control(pDX, IDC_EDIT56, 토르의분노);
	DDX_Control(pDX, IDC_EDIT57, 마법의점멸);
	DDX_Control(pDX, IDC_EDIT58, 신의가호);
}


BEGIN_MESSAGE_MAP(READTREE, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &READTREE::OnEnChangeEdit1)
	ON_WM_CREATE()
	//ON_BN_CLICKED(IDC_check, &READTREE::OnBnClickedcheck)
	ON_BN_CLICKED(IDC_BUTTON2, &READTREE::OnBnClickedButton2)
	ON_EN_CHANGE(IDC_EDIT3, &READTREE::OnEnChangeEdit3)
END_MESSAGE_MAP()


// READTREE 메시지 처리기


void READTREE::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


int READTREE::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CDialogEx::OnCreate(lpCreateStruct) == -1)
		return -1;

	// TODO:  여기에 특수화된 작성 코드를 추가합니다.
	TRACE("oncreat\n");
	
}




void READTREE::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString con1;
	CString con2;
	CString con3;
	CString con4;
	CString con5;
	CString con6;
	CString con7;
	CString con8;
	CString con9;
	CString con10;
	CString con11;
	CString con12;
	CString con13;
	CString con14;
	CString con15;
	CString con16;
	CString con17;
	CString con18;
	CString con19;
	CString con20;
	CString con21;
	CString con22;
	CString con23;
	CString con24;
	CString con25;
	CString con26;
	CString con27;
	CString con28;
	CString con29;
	CString con30;
	CString con31;
	CString con32;
	CString con33;
	CString con34;
	CString con35;
	CString con36;
	CString con37;
	CString con38;
	CString con39;
	CString con40;
	CString con41;
	CString con42;
	CString con43;
	CString con44;
	CString con45;
	CString con46;
	CString con47;
	CString con48;
	CString con49;
	CString con50;
	CString con51;
	CString con52;
	CString con53;
	CString con54;
	CString con55;
	CString con56;
	CString con57;
	CString con58;
	//
	con1.Format(_T("%d"), M_chara.백조의부름);
	con2.Format(_T("%d"),M_chara.회복의삼지창 );
	con3.Format(_T("%d"),M_chara.밤의사냥꾼 );
	con4.Format(_T("%d"),M_chara.비겁한고블린 );
	con5.Format(_T("%d"),M_chara.깨달음 );
	con6.Format(_T("%d"),M_chara.흑마법 );
	con7.Format(_T("%d"),M_chara.음과양의조화 );
	con8.Format(_T("%d"),M_chara.아레스의투구 );
	con9.Format(_T("%d"),M_chara.라식 );
	con10.Format(_T("%d"),M_chara.축복의장화 );
	con11.Format(_T("%d"),M_chara.신비로운반지 );
	con12.Format(_T("%d"),M_chara.치명적인탄환 );
	con13.Format(_T("%d"),M_chara.깨물기 );
	con14.Format(_T("%d"),M_chara.이동의즐거움 );
	con15.Format(_T("%d"),M_chara.판다렌의화염작렬 );
	con16.Format(_T("%d"),M_chara.마법부스터 );
	con17.Format(_T("%d"),M_chara.단단한벽 );
	con18.Format(_T("%d"),M_chara.마법의망토 );
	con19.Format(_T("%d"),M_chara.고대신비의마법서 );
	con20.Format(_T("%d"), M_chara.산뜻한기분);
	con21.Format(_T("%d"),M_chara.갈망의검 );
	con22.Format(_T("%d"),M_chara.지배전투의기본 );
	con23.Format(_T("%d"),M_chara.지배푸른영기 );
	con24.Format(_T("%d"),M_chara.마법전투의기본);
	con25.Format(_T("%d"),M_chara.마법푸른영기 );
	con26.Format(_T("%d"),M_chara.강인한체력 );
	con27.Format(_T("%d"),M_chara.활력증진 );
	con28.Format(_T("%d"),M_chara.저돌적인공격방식);
	con29.Format(_T("%d"),M_chara.신비한공격방식 );
	con30.Format(_T("%d"),M_chara.투쟁갑옷무력화 );
	con31.Format(_T("%d"),M_chara.투쟁저항무력화 );
	con32.Format(_T("%d"),M_chara.지배갑옷무력화 );
	con33.Format(_T("%d"),M_chara.지배저항무력화 );
	con34.Format(_T("%d"),M_chara.마법갑옷무력화 );
	con35.Format(_T("%d"),M_chara.마법저항무력화 );
	con36.Format(_T("%d"),M_chara.신비의방패 );
	con37.Format(_T("%d"),M_chara.저항의방패 );
	con38.Format(_T("%d"),M_chara.경험치사기꾼 );
	con39.Format(_T("%d"),M_chara.골드도둑 );
	con40.Format(_T("%d"),M_chara.투쟁타격용분 );
	con41.Format(_T("%d"),M_chara.투쟁마법용분 );
	con42.Format(_T("%d"),M_chara.지배물리용분 );
	con43.Format(_T("%d"),M_chara.지배마법용분 );
	con44.Format(_T("%d"),M_chara.마법물리용분 );
	con45.Format(_T("%d"),M_chara.마법마법용분 );
	con46.Format(_T("%d"),M_chara.긍지최후의방어 );
	con47.Format(_T("%d"),M_chara.축복최후의방어 );
	con48.Format(_T("%d"),M_chara.집중사격 );
	con49.Format(_T("%d"),M_chara.무자비한연사 );
	con50.Format(_T("%d"),M_chara.환상적인공격 );
	con51.Format(_T("%d"),M_chara.제우스의분노 );
	con52.Format(_T("%d"),M_chara.오디세우스의성검 );
	con53.Format(_T("%d"),M_chara.대마법신비로운메테오 );
	con54.Format(_T("%d"),M_chara.마법펀치 );
	con55.Format(_T("%d"),M_chara.곰발바닥 );
	con56.Format(_T("%d"),M_chara.토르의분노 );
	con57.Format(_T("%d"),M_chara.마법의점멸 );
	con58.Format(_T("%d"),M_chara.신의가호);
	

	//
	백조의부름.SetWindowTextW(con1);
	회복의삼지창.SetWindowTextW(con2);
	밤의사냥꾼.SetWindowTextW(con3);
	비겁한고블린.SetWindowTextW(con4);
	깨달음.SetWindowTextW(con5);
	흑마법.SetWindowTextW(con6);
	음과양의조화.SetWindowTextW(con7);
	아레스의투구.SetWindowTextW(con8);
	라식.SetWindowTextW(con9);
	축복의장화.SetWindowTextW(con10);
	 신비로운반지.SetWindowTextW(con11);//11
	 치명적인탄환.SetWindowTextW(con12);//12
	 깨물기.SetWindowTextW(con13);//13
	 이동의즐거움.SetWindowTextW(con14);//14
	 판다렌의화염작렬.SetWindowTextW(con15);//15
	 마법부스터.SetWindowTextW(con16);//16
	 단단한벽.SetWindowTextW(con17);//17
	 마법의망토.SetWindowTextW(con18);//18
	 고대신비의마법서.SetWindowTextW(con19);//19
	 산뜻한기분.SetWindowTextW(con20);//20
	 갈망의검.SetWindowTextW(con21);//21
	 지배전투의기본.SetWindowTextW(con22);//22
	 지배푸른영기.SetWindowTextW(con23);//23
	 마법전투의기본.SetWindowTextW(con24);//24
	 마법푸른영기.SetWindowTextW(con25);//25
	 강인한체력.SetWindowTextW(con26);//26
	 활력증진.SetWindowTextW(con27);//27
	 저돌적인공격방식.SetWindowTextW(con28);//28
	 신비한공격방식.SetWindowTextW(con29);//29
	 투쟁갑옷무력화.SetWindowTextW(con30);//30
	 투쟁저항무력화.SetWindowTextW(con31);//31
	 지배갑옷무력화.SetWindowTextW(con32);//32
	 지배저항무력화.SetWindowTextW(con33);//33
	 마법갑옷무력화.SetWindowTextW(con34);//34
	 마법저항무력화.SetWindowTextW(con35);//35
	 신비의방패.SetWindowTextW(con36);//36
	 저항의방패.SetWindowTextW(con37);//37
	 경험치사기꾼.SetWindowTextW(con38);//38
	 골드도둑.SetWindowTextW(con39);//39
	 투쟁타격용분.SetWindowTextW(con40);//40
	 투쟁마법용분.SetWindowTextW(con41);//41
	 지배물리용분.SetWindowTextW(con42);//42
	 지배마법용분.SetWindowTextW(con43);//43
	 마법물리용분.SetWindowTextW(con44);//44
	 마법마법용분.SetWindowTextW(con45);//45
	 긍지최후의방어.SetWindowTextW(con46);//46
	 축복최후의방어.SetWindowTextW(con47);//47
	 집중사격.SetWindowTextW(con48);//48
	 무자비한연사.SetWindowTextW(con49);//49
	 환상적인공격.SetWindowTextW(con50);//50
	 제우스의분노.SetWindowTextW(con51);//51
	 오디세우스의성검.SetWindowTextW(con52);//52
	 대마법신비로운메테오.SetWindowTextW(con53);//53
	 마법펀치.SetWindowTextW(con54);//54
	 곰발바닥.SetWindowTextW(con55);//55
	 토르의분노.SetWindowTextW(con56);//56
	 마법의점멸.SetWindowTextW(con57);//57
	 신의가호.SetWindowTextW(con58);//58
}


void READTREE::OnEnChangeEdit3()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
