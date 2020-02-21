// WRITEMODE.cpp: 구현 파일
//

/*
CString을 char로 바꾸는 기적
int len;
	buf = 유저네임.GetBuffer(유저네임.GetLength());
	len = WideCharToMultiByte(CP_ACP, 0, buf, -1, NULL, 0, NULL, NULL);
	name = new char[len];
	WideCharToMultiByte(CP_ACP, 0, buf, -1, name, len, 0, 0);
*/
#include "stdafx.h"
#include "MFCApplication3.h"
#include "WRITEMODE.h"
#include "afxdialogex.h"
#include "nouser.h"
#include "ABI_TREE.h"
#include <stdlib.h>

FILE* WRITEsave;
CString input;
class CHARA 
{                 //       = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,6
public:           //       = {1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,0
	int position[캐릭개수] = {1,1,1,1,1,1,2,1,4,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,4,1,1,1,1,1,2,1,4,1,1,1,1,3,1,2,1,1,1,1,2,1,1,4,1,1,2,1,1,2,2,1,1};//1=deal,2=tank,3=heal,4=deal&tank half
	int type[캐릭개수] =     {1,2,4,2,2,1,1,2,1,3,3,1,1,1,1,2,4,2,4,1,1,1,1,2,2,2,2,4,3,2,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,1,2,1,2,1,2,2,1,1,1,1,2,2,4};//1=ad,2=ap,3=ap(+%ad),4=ad+ap or true
	struct WLRate
	{
		double Rate;
		int win;
		int lose;
	};
};

// WRITEMODE 대화 상자

IMPLEMENT_DYNAMIC(WRITEMODE, CDialog)
static inline void finddata1()//
{
	bool doen = false;
	for (; doen == false;)
	{
		char buf11 = fgetc(WRITEsave);
		if (buf11 == '=')
		{
			doen = true;
		}
	}
}//
static inline void LINEFEED1(int line)//
{
	fseek(WRITEsave, 0, SEEK_SET);
	for (int i = 0; i < line; i++)
	{
		for (char buffer = NULL; buffer != '\n';)
		{
			buffer = fgetc(WRITEsave);
		}
		fseek(WRITEsave, +1, SEEK_CUR);
	}
}//

WRITEMODE::WRITEMODE(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
	, kill(0)
	, 유저네임(_T(""))
	, death(0)
	, assist(0)
{

}

WRITEMODE::~WRITEMODE()
{
}

void WRITEMODE::DoDataExchange(CDataExchange* pDX)
{
	TRACE("TIME:원본, pdx=%d \n", pDX);
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, kill);
	DDV_MinMaxInt(pDX, kill, 0, 9999999);
	DDX_Text(pDX, IDC_EDIT1, 유저네임);
	wchar_t *buf;
	char* aaa;
	int len;
	buf = 유저네임.GetBuffer(유저네임.GetLength());
	len = WideCharToMultiByte(CP_ACP, 0, buf, -1, NULL, 0, NULL, NULL);
	aaa = new char[len];
	WideCharToMultiByte(CP_ACP, 0, buf, -1, aaa, len, 0, 0);

	TRACE("TIME:원본, 유저네임=%s \n", aaa);
	delete aaa;
	DDX_Control(pDX, IDC_COMBO1, Dropbox);
	DDX_Text(pDX, IDC_EDIT3, death);
	DDV_MinMaxInt(pDX, death, 0, 9999999);
	DDX_Text(pDX, IDC_EDIT4, assist);
	DDV_MinMaxInt(pDX, assist, 0, 999999);
	DDX_Control(pDX, IDC_ISBROOM, ISBROOM);
	DDX_Control(pDX, IDC_CHECK1, WIN);
	DDX_Control(pDX, IDC_CHECK2, LOSE);
}


BEGIN_MESSAGE_MAP(WRITEMODE, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &WRITEMODE::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &WRITEMODE::OnEnChangeEdit1)
	ON_CBN_SELCHANGE(IDC_COMBO1, &WRITEMODE::OnCbnSelchangeCombo1)
//	ON_WM_CREATE()
ON_EN_CHANGE(IDC_EDIT2, &WRITEMODE::OnEnChangeEdit2)
ON_BN_CLICKED(IDCANCEL, &WRITEMODE::OnBnClickedCancel)
ON_BN_CLICKED(IDC_CHECK2, &WRITEMODE::OnBnClickedCheck2)
END_MESSAGE_MAP()


// WRITEMODE 메시지 처리기


void WRITEMODE::OnBnClickedButton1()
{
	CHARA::WLRate cal[63];
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	//값을 읽습니다.
	int nindex = 0;
	CString ch;
	nindex = Dropbox.GetCurSel();
	Dropbox.GetLBText(nindex,ch);

	//디버그용
	/*getCursel로 바꿉니다 ㅅㄱ, 근데 요건 냅겨둠, 왜냐? 디버그 출력용...*/
	int len1;
	wchar_t *buf1;
	buf1 = ch.GetBuffer(ch.GetLength());
	len1 = WideCharToMultiByte(CP_ACP, 0, buf1, -1, NULL, 0, NULL, NULL);
	char* cha = new char[len1];
	WideCharToMultiByte(CP_ACP, 0, buf1, -1, cha, len1, 0, 0);
	TRACE("캐릭터:%s\n", cha);
	//
	//
	kill = GetDlgItemInt(IDC_EDIT2);
	death= GetDlgItemInt(IDC_EDIT3);
	assist= GetDlgItemInt(IDC_EDIT4);
	TRACE("킬:%d\n데스:%d\n 어시스트:%d\n", kill,death,assist);
	//
	BOOL wol = TRUE;//TRUE==WIN,FALSE==LOSE
	if (WIN.GetCheck())
	{
		wol = TRUE;
		LOSE.SetCheck(0);
	}
	else if(LOSE.GetCheck())
	{
		wol = FALSE;
		WIN.SetCheck(0);
	}
	//
	int check;
	check = ISBROOM.GetCheck();
	TRACE("비방?:%d\n", check); //1= 체크됨 0=안됨


	//최종단계, 입력받은 값을 전달합니다.
	char* name;
	
	TRACE("TIME:버튼누른시점, username=%s \n", input);
	UpdateData(TRUE);
	GetDlgItemText(IDC_EDIT1, input);

	wchar_t *buf;
	
	int len;
	buf = 유저네임.GetBuffer(유저네임.GetLength());
	len = WideCharToMultiByte(CP_ACP, 0, buf, -1, NULL, 0, NULL, NULL);
	name = new char[len];
	WideCharToMultiByte(CP_ACP, 0, buf, -1, name, len, 0, 0);


	TRACE("TIME:카피전, username=%s \n", name);
	strcpy(name, name);
	//저장소를 엽니다
	WRITEsave = fopen(name, "r+");
	TRACE("TIME:저장소오픈\n");
	if (WRITEsave == NULL)
	{

		TRACE("TIME:저장소오픈, 저장소없음\n");
		nouser open;
		TRACE("TIME:새다이얼로그오픈, name=%s \n", name);
		open.DoModal();
		if (open.OKNO == TRUE)
		{
			WRITEsave = fopen(name, "w");
			putsave(name);
			if (WRITEsave == NULL)
			{
				AfxMessageBox(_T("저장소생성 실패!"));
			}
		}
	}
		TRACE("TIME:저장소오픈,저장소있음\n");
		//저장소로부터 값을 읽어들입니다.
		TRACE("읽기함수 호출\n");
		readsave(name);
		TRACE("읽기함수 탈출\n");


		//특성을 검사합니다.
		ABI_TREE tree;
		tree.DoModal();

		//

		bool 딜러 = false;
		bool 탱커 = false;
		bool 힐러 = false;
		bool 하프 = false;
		int dummy = 0;
		int chara = nindex;
		
		총합.게임횟수++;
		총합.킬 += kill;
		총합.데스 += death;
		총합.어시스트 += assist;
		if (wol == TRUE)	
		{
			총합.승수++; 
		}
		else if (wol == FALSE)    
		{
			총합.패수++; 
		}

		if (총합.패수 != 0)
		{
			총합.승률 = 총합.승수 / 총합.패수;
		}
		else
		{
			총합.승률 = 1;
		}
		dummy = 0;
		if (true)
		{
			if (chara == dummy)
			{
				요우무_r1.input(kill, death, assist);
				요우무_r1.WOL(wol);
				요우무_r1.ABILITY();
				딜러 = true;
			요우무_r1.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				요우무_r2.input(kill, death, assist);
				요우무_r2.WOL(wol);
				딜러 = true;
			요우무_r2.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				요우무_하이브리드.input(kill, death, assist);
				요우무_하이브리드.WOL(wol);
				딜러 = true;
			요우무_하이브리드.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레이무.input(kill, death, assist);
				레이무.WOL(wol);
				딜러 = true;
			레이무.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				치르노.input(kill, death, assist);
				치르노.WOL(wol);
				딜러 = true;
			치르노.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				사쿠야_딜러.input(kill, death, assist);
				사쿠야_딜러.WOL(wol);
				딜러 = true;
			사쿠야_딜러.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				사쿠야_탱커.input(kill, death, assist);
				사쿠야_탱커.WOL(wol);
				탱커 = true;
			사쿠야_탱커.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				이쿠.input(kill, death, assist);
				이쿠.WOL(wol);
				딜러 = true;
			이쿠.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				무라사_물리.input(kill, death, assist);
				무라사_물리.WOL(wol);
				하프 = true;
			무라사_물리.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				무라사_마법.input(kill, death, assist);
				무라사_마법.WOL(wol);
				딜러 = true;
			무라사_마법.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				무라사_하이브리드.input(kill, death, assist);
				무라사_하이브리드.WOL(wol);
				딜러 = true;
			무라사_하이브리드.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레이센_탱커.input(kill, death, assist);
				레이센_탱커.WOL(wol);
				탱커 = true;
			레이센_탱커.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레이센_딜러.input(kill, death, assist);
				레이센_딜러.WOL(wol);
				딜러 = true;
			레이센_딜러.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레이센_하이브리드.input(kill, death, assist);
				레이센_하이브리드.WOL(wol);
				딜러 = true;
			레이센_하이브리드.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				앨리스_물리.input(kill, death, assist);
				앨리스_물리.WOL(wol);
				딜러 = true;
			앨리스_물리.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				앨리스_마법.input(kill, death, assist);
				앨리스_마법.WOL(wol);
				딜러 = true;
			앨리스_마법.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				앨리스_하이브리드.input(kill, death, assist);
				앨리스_하이브리드.WOL(wol);
				딜러 = true;
			앨리스_하이브리드.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레밀리아.input(kill, death, assist);
				레밀리아.WOL(wol);
				딜러 = true;
			레밀리아.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				플랑도르.input(kill, death, assist);
				플랑도르.WOL(wol);
				딜러 = true;
			플랑도르.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				흑화치르노.input(kill, death, assist);
				흑화치르노.WOL(wol);
				딜러 = true;
			흑화치르노.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴스드요우무_r1.input(kill, death, assist);
				어드밴스드요우무_r1.WOL(wol);
				딜러 = true;
			어드밴스드요우무_r1.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴스드요우무_r2.input(kill, death, assist);
				어드밴스드요우무_r2.WOL(wol);
				딜러 = true;
			어드밴스드요우무_r2.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴스드요우무_r3.input(kill, death, assist);
				어드밴스드요우무_r3.WOL(wol);
				딜러 = true;
			어드밴스드요우무_r3.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				마리사_딜러.input(kill, death, assist);
				마리사_딜러.WOL(wol);
				딜러 = true;
			마리사_딜러.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				마리사_힐러.input(kill, death, assist);
				마리사_힐러.WOL(wol);
				힐러 = true;
			마리사_힐러.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				마리사_하이브리드.input(kill, death, assist);
				마리사_하이브리드.WOL(wol);
				하프 = true;
			마리사_하이브리드.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				유카리.input(kill, death, assist);
				유카리.WOL(wol);
				딜러 = true;
			유카리.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				모코우.input(kill, death, assist);
				모코우.WOL(wol);
				탱커 = true;
			모코우.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴트모미지.input(kill, death, assist);
				어드밴트모미지.WOL(wol);
				딜러 = true;
				어드밴트모미지.ABILITY();
			}
			dummy++;
			if (chara == dummy)
			{
				파츄리.input(kill, death, assist);
				파츄리.WOL(wol);
				딜러 = true;
			파츄리.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				우츠호.input(kill, death, assist);
				우츠호.WOL(wol);
				딜러 = true;
			우츠호.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				스와코.input(kill, death, assist);
				스와코.WOL(wol);
				딜러 = true;
			스와코.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				텐시_딜러.input(kill, death, assist);
				텐시_딜러.WOL(wol);
				딜러 = true;
			텐시_딜러.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				텐시_탱커.input(kill, death, assist);
				텐시_탱커.WOL(wol);
				탱커 = true;
			텐시_탱커.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴트치르노.input(kill, death, assist);
				어드밴트치르노.WOL(wol);
				딜러 = true;
			어드밴트치르노.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				코마치.input(kill, death, assist);
				코마치.WOL(wol);
				하프 = true;
			코마치.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				아야.input(kill, death, assist);
				아야.WOL(wol);
				딜러 = true;
			아야.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴스드메이린.input(kill, death, assist);
				어드밴스드메이린.WOL(wol);
				딜러 = true;
			어드밴스드메이린.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				사나에.input(kill, death, assist);
				사나에.WOL(wol);
				딜러 = true;
			사나에.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				레티.input(kill, death, assist);
				레티.WOL(wol);
				하프 = true;
			레티.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				유유코.input(kill, death, assist);
				유유코.WOL(wol);
				힐러 = true;
			유유코.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				에이린.input(kill, death, assist);
				에이린.WOL(wol);
				딜러 = true;
			에이린.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				사토리.input(kill, death, assist);
				사토리.WOL(wol);
				탱커 = true;
			사토리.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				바쿠렌.input(kill, death, assist);
				바쿠렌.WOL(wol);
				딜러 = true;
			바쿠렌.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				카구야.input(kill, death, assist);
				카구야.WOL(wol);
				딜러 = true;
			카구야.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				미코.input(kill, death, assist);
				미코.WOL(wol);
				하프 = true;
			미코.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				누에.input(kill, death, assist);
				누에.WOL(wol);
				딜러 = true;
			누에.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				스이카.input(kill, death, assist);
				스이카.WOL(wol);
				탱커 = true;
			스이카.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				시키.input(kill, death, assist);
				시키.WOL(wol);
				딜러 = true;
			시키.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				유카.input(kill, death, assist);
				유카.WOL(wol);
				딜러 = true;
			유카.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				흑화요우무.input(kill, death, assist);
				흑화요우무.WOL(wol);
				하프 = true;
			흑화요우무.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				어드밴트플랑.input(kill, death, assist);
				어드밴트플랑.WOL(wol);
				딜러 = true;
			어드밴트플랑.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				헤이메이린.input(kill, death, assist);
				헤이메이린.WOL(wol);
				딜러 = true;
			헤이메이린.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				홍메이린.input(kill, death, assist);
				홍메이린.WOL(wol);
				탱커 = true;
			홍메이린.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				흑화카구야.input(kill, death, assist);
				흑화카구야.WOL(wol);
				딜러 = true;
			흑화카구야.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				모미지.input(kill, death, assist);
				모미지.WOL(wol);
				딜러 = true;
			모미지.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				흑화무라사.input(kill, death, assist);
				흑화무라사.WOL(wol);
				탱커 = true;
			흑화무라사.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				조온.input(kill, death, assist);
				조온.WOL(wol);
				탱커 = true;
			조온.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				악마레이무.input(kill, death, assist);
				악마레이무.WOL(wol);
				딜러 = true;
			악마레이무.ABILITY();}
			dummy++;
			if (chara == dummy)
			{
				흑화텐시.input(kill, death, assist);
				흑화텐시.WOL(wol);
				딜러 = true;
			흑화텐시.ABILITY();
			dummy++;
		}
			tree.reset();
		if (딜러 == true) { N_dataSTR.딜러++; }
		if (힐러 == true) { N_dataSTR.힐러++; }
		if (탱커 == true) { N_dataSTR.탱커++; }
		if (하프 == true) { N_dataSTR.하프++; }
		if ((N_dataSTR.딜러 > N_dataSTR.탱커)&(N_dataSTR.딜러 > N_dataSTR.힐러))
		{
			N_dataSTR.주포지션 = 1;
		}
		else if ((N_dataSTR.탱커 > N_dataSTR.힐러)&(N_dataSTR.탱커 > N_dataSTR.딜러))
		{
			N_dataSTR.주포지션 = 2;
		}
		else if ((N_dataSTR.힐러 > N_dataSTR.탱커)&(N_dataSTR.힐러 > N_dataSTR.딜러))
		{
			N_dataSTR.주포지션 = 3;
		}
		else
		{
			N_dataSTR.주포지션 = 0;
		}
		
		딜러, 탱커, 힐러, 하프 = false;
		
	
	//저장합니다
	TRACE("저장\n");
	putsave(name);
	REF_chara();
	//작동종료
	
	if (WRITEsave != NULL) { fclose(WRITEsave); }
	TRACE("종료\n");
	delete name;
	delete cha;
	EndDialog(TRUE);
}


void WRITEMODE::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialog::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
	
	
}


void WRITEMODE::OnCbnSelchangeCombo1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}





void WRITEMODE::OnEnChangeEdit2()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialog::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void WRITEMODE::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}




void WRITEMODE::OnBnClickedCheck2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
