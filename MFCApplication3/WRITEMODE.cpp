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
		open.GetName(name);
		open.GetStat(kill, death, assist,wol);
		open.rcvcha(nindex);
		open.DoModal();
	}
	else
	{
		TRACE("TIME:저장소오픈,저장소있음\n");
		dataSTR data;
		//저장소로부터 값을 읽어들입니다.
		//너무긴데 줄일법을 몰라서 조건문에 쑤셔넣음
		if(true)
		{
			int FEEDDATA = 0;
			WRITEsave = fopen(name, "r");
			if (WRITEsave == NULL)
			{
				AfxMessageBox(_T("오류! 저장소 읽기에 실패했습니다."));
				return;
			}
			fseek(WRITEsave, 0, SEEK_SET);
			finddata1();
			//로딩중..\n");

			fscanf(WRITEsave, "%lf", &data.vernum);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//버젼을 로딩하엿습니다\n");//
			if (data.vernum != 현재버젼)
			{
				readLegcy();
			}

			fscanf(WRITEsave, "%d", &data.게임횟수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.mmr);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.킬);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.데스);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어시스트);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.주포지션);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.힐러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.피해타입);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마법계수물리뎀);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.복합);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.탱커점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.딜러점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.힐러점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.요우무_r1);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.요우무_r2);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.요우무_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.이쿠);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레밀리아);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.플랑도르);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r1);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r2);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r3);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_힐러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트모미지);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.파츄리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스와코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.코마치);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모코우);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사나에);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레티);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유유코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.에이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사토리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.바쿠렌);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.카구야);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.미코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.누에);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스이카);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			fscanf(WRITEsave, "%d", &data.시키);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화요우무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트플랑);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.헤이메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.홍메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화카구야);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모미지);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화무라사);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.조온);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.악마레이무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화텐시);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			//-----------
			fscanf(WRITEsave, "%lf", &data.요우무_r1승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.요우무_r2승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.요우무_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레이무승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.사쿠야_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.사쿠야_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.이쿠승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.무라사_물리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.무라사_마법승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.무라사_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레이센_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레이센_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레이센_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레밀리아승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.플랑도르승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.흑화치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴스드요우무_r1승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴스드요우무_r2승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴스드요우무_r3승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.마리사_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.마리사_힐러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.마리사_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.유카리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴트모미지승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.파츄리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.스와코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.텐시_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.텐시_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴트치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.코마치승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.모코우승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴스드메이린승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.사나에승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.레티승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.유유코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.앨리스_물리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.앨리스_마법승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.앨리스_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.에이린승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.사토리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.바쿠렌승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.카구야승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.미코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.누에승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.스이카승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.시키_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.유카_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.흑화요우무_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.어드밴트플랑_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.헤이메이린_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.홍메이린_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.흑화카구야_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%lf", &data.모미지_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//모미지승률을 로딩하엿습니다\n");//

			fscanf(WRITEsave, "%lf", &data.흑화무라사_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//흑화무라사승률을 로딩하엿습니다\n");//

			fscanf(WRITEsave, "%lf", &data.조온_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//조온승률을 로딩하엿습니다\n");//

			fscanf(WRITEsave, "%lf", &data.악마레이무_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//악마레이무승률을 로딩하엿습니다\n");//

			fscanf(WRITEsave, "%lf", &data.흑화텐시_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//흑화텐시승률을 로딩하엿습니다\n");//

			//-----------
			fscanf(WRITEsave, "%d", &data.요우무_r1승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//요우무_r1승수를 로딩하엿습니다\n");//

			fscanf(WRITEsave, "%d", &data.요우무_r2승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.요우무_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이무승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.이쿠승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_물리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_마법승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레밀리아승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.플랑도르승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r1승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r2승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r3승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_힐러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트모미지승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.파츄리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스와코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.코마치승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모코우승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드메이린승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사나에승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레티승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유유코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_물리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_마법승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.에이린승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사토리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.바쿠렌승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.카구야승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.미코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.누에승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스이카승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.시키_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화요우무_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트플랑_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.헤이메이린_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.홍메이린_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화카구야_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모미지_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화무라사_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.조온_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.악마레이무_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화텐시_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			//----------------
			fscanf(WRITEsave, "%d", &data.요우무_r1패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.요우무_r2패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			fscanf(WRITEsave, "%d", &data.요우무_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이무패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사쿠야_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.이쿠패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_물리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_마법패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.무라사_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레이센_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레밀리아패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.플랑도르패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r1패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r2패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드요우무_r3패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_힐러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.마리사_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트모미지패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.파츄리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스와코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.텐시_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.코마치패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모코우패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴스드메이린패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사나에패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.레티패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유유코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_물리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_마법패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.앨리스_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.에이린패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.사토리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.바쿠렌패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.카구야패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.미코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.누에패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.스이카패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.시키_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.유카_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화요우무_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.어드밴트플랑_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.헤이메이린_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.홍메이린_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화카구야_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.모미지_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화무라사_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.조온_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.악마레이무_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.흑화텐시_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//------------------------
			fscanf(WRITEsave, "%d", &data.연승횟수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(WRITEsave, "%d", &data.연패횟수);
			//FEEDDATA++;
			//LINEFEED1(FEEDDATA);
			//finddata1();
			TRACE("line=%d\n", FEEDDATA);
		}
		//연산합니다
		bool 딜러 = false;
		bool 탱커 = false;
		bool 힐러 = false;
		bool 하프 = false;
		int dummy = 0;
		int chara = nindex;
		
		data.vernum = 현재버젼;
		data.게임횟수++;
		data.킬 += kill;
		data.데스 += death;
		data.어시스트 += assist;
		if (wol == TRUE)	
		{
			data.승수++; 
		}
		else if (wol == FALSE)    
		{
			data.패수++; 
		}

		if (data.패수 != 0)
		{
			data.승률 = data.승수 / data.패수;
		}
		else
		{
			data.승률 = 1;
		}
		/*물리 요우무;
			마법 요우무;
			하이브리드 요우무;
			레이무;
			치르노;
			딜러 사쿠야;
			탱커 사쿠야;
			이쿠;
			물리 무라사;
			마법 무라사;
			하이브리드 무라사;
			탱커 레이센;
			딜러 레이센;
			하이브리드 레이센;
			물리 앨리스;
			마법 앨리스;
			하이브리드 앨리스;
			레밀리아;
			플랑드르;
			흑화 치르노;
			검기발산 어드밴스 요우무;
			공중 검기발산 어드밴스 요우무;
			암살기본 어드밴스 요우무;
			딜러 마리사;
			힐러 마리사;
			하이브리드 마리사;
			유카리;
			모코우;
			어드밴스 모미지;
			파츄리;
			우츠호;
			스와코
			딜러 텐시;
			탱커 텐시;
			어드밴스 치르노;코마치;아야;어드밴스 메이린;사나에;레티;유유코;에이린;사토리;바쿠렌;카구야;미코;누에;스이카;시키;유카;흑화요우무;
			어드밴스 플랑;헤이 메이린;홍 메이린;
			흑화 카구야;모미지;흑화 무라사;
			죠온;악마 레이무;흑화 텐시;
			*/
		dummy = 0;
		if (wol == TRUE)
		{
			if (chara == dummy)
			{
				data.요우무_r1++;
				data.요우무_r1승수++;
				if (data.요우무_r1패수 != 0)
				{
					data.요우무_r1승률 = data.요우무_r1승수 / data.요우무_r1;
				}
				else
				{
					data.요우무_r1승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.요우무_r2++;
				data.요우무_r2승수++;
				if (data.요우무_r2패수 != 0)
				{
					data.요우무_r2승률 = data.요우무_r2승수 / data.요우무_r2;
				}
				else
				{
					data.요우무_r2승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.요우무_하이브리드++;
				data.요우무_하이브리드승수++;
				if (data.요우무_하이브리드패수 != 0)
				{
					data.요우무_하이브리드승률 = data.요우무_하이브리드승수 / data.요우무_하이브리드;
				}
				else
				{
					data.요우무_하이브리드승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이무++;
				data.레이무승수++;
				if (data.레이무패수 != 0)
				{
					data.레이무승률 = data.레이무승수 / data.레이무;
				}
				else
				{
					data.레이무승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.치르노++;
				data.치르노승수++;
				if (data.치르노패수 != 0)
				{
					data.치르노승률 = data.치르노승수 / data.치르노;
				}
				else
				{
					data.치르노승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사쿠야_딜러++;
				data.사쿠야_딜러승수++;
				if (data.사쿠야_딜러패수 != 0)
				{
					data.사쿠야_딜러승률 = data.사쿠야_딜러승수 / data.사쿠야_딜러;
				}
				else
				{
					data.사쿠야_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사쿠야_탱커++;
				data.사쿠야_탱커승수++;
				if (data.사쿠야_탱커패수 != 0)
				{
					data.사쿠야_탱커승률 = data.사쿠야_탱커승수 / data.사쿠야_탱커;
				}
				else
				{
					data.사쿠야_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.이쿠++;
				data.이쿠승수++;
				if (data.이쿠패수 != 0)
				{
					data.이쿠승률 = data.이쿠승수 / data.이쿠;
				}
				else
				{
					data.이쿠승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_물리++;
				data.무라사_물리승수++;
				if (data.무라사_물리패수 != 0)
				{
					data.무라사_물리승률 = data.무라사_물리승수 / data.무라사_물리;
				}
				else
				{
					data.무라사_물리승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_마법++;
				data.무라사_마법승수++;
				if (data.무라사_마법패수 != 0)
				{
					data.무라사_마법승률 = data.무라사_마법승수 / data.무라사_마법;
				}
				else
				{
					data.무라사_마법승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_하이브리드++;
				data.무라사_하이브리드승수++;
				if (data.무라사_하이브리드패수 != 0)
				{
					data.무라사_하이브리드승률 = data.무라사_하이브리드승수 / data.무라사_하이브리드;
				}
				else
				{
					data.무라사_하이브리드승률 = 1;
				}
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_탱커++;
				data.레이센_탱커승수++;
				if (data.레이센_탱커패수 != 0)
				{
					data.레이센_탱커승률 = data.레이센_탱커승수 / data.레이센_탱커;
				}
				else
				{
					data.레이센_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_딜러++;
				data.레이센_딜러승수++;
				if (data.레이센_딜러패수 != 0)
				{
					data.레이센_딜러승률 = data.레이센_딜러승수 / data.레이센_딜러;
				}
				else
				{
					data.레이센_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_하이브리드++;
				data.레이센_하이브리드승수++;
				if (data.레이센_하이브리드패수 != 0)
				{
					data.레이센_하이브리드승률 = data.레이센_하이브리드승수 / data.레이센_하이브리드;
				}
				else
				{
					data.레이센_하이브리드승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_물리++;
				data.앨리스_물리승수++;
				if (data.앨리스_물리패수 != 0)
				{
					data.앨리스_물리승률 = data.앨리스_물리승수 / data.앨리스_물리;
				}
				else
				{
					data.앨리스_물리승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_마법++;
				data.앨리스_마법승수++;
				if (data.앨리스_마법패수 != 0)
				{
					data.앨리스_마법승률 = data.앨리스_마법승수 / data.앨리스_마법;
				}
				else
				{
					data.앨리스_마법승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_하이브리드++;
				data.앨리스_하이브리드승수++;
				if (data.앨리스_하이브리드패수 != 0)
				{
					data.앨리스_하이브리드승률 = data.앨리스_하이브리드승수 / data.앨리스_하이브리드;
				}
				else
				{
					data.앨리스_하이브리드승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레밀리아++;
				data.레밀리아승수++;
				if (data.레밀리아패수 != 0)
				{
					data.레밀리아승률 = data.레밀리아승수 / data.레밀리아;
				}
				else
				{
					data.레밀리아승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.플랑도르++;
				data.플랑도르승수++;
				if (data.플랑도르패수 != 0)
				{
					data.플랑도르승률 = data.플랑도르승수 / data.플랑도르;
				}
				else
				{
					data.플랑도르승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화치르노++;
				data.흑화치르노승수++;
				if (data.흑화치르노패수 != 0)
				{
					data.흑화치르노승률 = data.흑화치르노승수 / data.흑화치르노;
				}
				else
				{
					data.흑화치르노승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r1++;
				data.어드밴스드요우무_r1승수++;
				if (data.어드밴스드요우무_r1패수 != 0)
				{
					data.어드밴스드요우무_r1승률 = data.어드밴스드요우무_r1승수 / data.어드밴스드요우무_r1;
				}
				else
				{
					data.어드밴스드요우무_r1승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r2++;
				data.어드밴스드요우무_r2승수++;
				if (data.어드밴스드요우무_r2패수 != 0)
				{
					data.어드밴스드요우무_r2승률 = data.어드밴스드요우무_r2승수 / data.어드밴스드요우무_r2;
				}
				else
				{
					data.어드밴스드요우무_r2승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r3++;
				data.어드밴스드요우무_r3승수++;
				if (data.어드밴스드요우무_r3패수 != 0)
				{
					data.어드밴스드요우무_r3승률 = data.어드밴스드요우무_r3승수 / data.어드밴스드요우무_r3;
				}
				else
				{
					data.어드밴스드요우무_r3승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_딜러++;
				data.마리사_딜러승수++;
				if (data.마리사_딜러패수 != 0)
				{
					data.마리사_딜러승률 = data.마리사_딜러승수 / data.마리사_딜러;
				}
				else
				{
					data.마리사_딜러승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_힐러++;
				data.마리사_힐러승수++;
				if (data.마리사_힐러패수 != 0)
				{
					data.마리사_힐러승률 = data.마리사_힐러승수 / data.마리사_힐러;
				}
				else
				{
					data.마리사_힐러승률 = 1;
				}
				힐러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_하이브리드++;
				data.마리사_하이브리드승수++;
				if (data.마리사_하이브리드패수 != 0)
				{
					data.마리사_하이브리드승률 = data.마리사_하이브리드승수 / data.마리사_하이브리드;
				}
				else
				{
					data.마리사_하이브리드승률 = 1;
				}
				딜러 = true;
				힐러 = true;
				하프 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.유카리++;
				data.유카리승수++;
				if (data.유카리패수 != 0)
				{
					data.유카리승률 = data.유카리승수 / data.유카리;
				}
				else
				{
					data.유카리승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.모코우++;
				data.모코우승수++;
				if (data.모코우패수 != 0)
				{
					data.모코우승률 = data.모코우승수 / data.모코우;
				}
				else
				{
					data.모코우승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트모미지++;
				data.어드밴트모미지승수++;
				if (data.어드밴트모미지패수 != 0)
				{
					data.어드밴트모미지승률 = data.어드밴트모미지승수 / data.어드밴트모미지;
				}
				else
				{
					data.어드밴트모미지승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.파츄리++;
				data.파츄리승수++;
				if (data.파츄리패수 != 0)
				{
					data.파츄리승률 = data.파츄리승수 / data.파츄리;
				}
				else
				{
					data.파츄리승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.우츠호++;
				data.우츠호승수++;
				if (data.우츠호패수 != 0)
				{
					data.우츠호승률 = data.우츠호승수 / data.우츠호;
				}
				else
				{
					data.우츠호승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.스와코++;
				data.스와코승수++;
				if (data.스와코패수 != 0)
				{
					data.스와코승률 = data.스와코승수 / data.스와코;
				}
				else
				{
					data.스와코승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.텐시_딜러++;
				data.텐시_딜러승수++;
				if (data.텐시_딜러패수 != 0)
				{
					data.텐시_딜러승률 = data.텐시_딜러승수 / data.텐시_딜러;
				}
				else
				{
					data.텐시_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.텐시_탱커++;
				data.텐시_탱커승수++;
				if (data.텐시_탱커패수 != 0)
				{
					data.텐시_탱커승률 = data.텐시_탱커승수 / data.텐시_탱커;
				}
				else
				{
					data.텐시_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트치르노++;
				data.어드밴트치르노승수++;
				if (data.어드밴트치르노패수 != 0)
				{
					data.어드밴트치르노승률 = data.어드밴트치르노승수 / data.어드밴트치르노;
				}
				else
				{
					data.어드밴트치르노승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.코마치++;
				data.코마치승수++;
				if (data.코마치패수 != 0)
				{
					data.코마치승률 = data.코마치승수 / data.코마치;
				}
				else
				{
					data.코마치승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.아야++;
				data.아야승수++;
				if (data.아야패수 != 0)
				{
					data.아야승률 = data.아야승수 / data.아야;
				}
				else
				{
					data.요우무_r1승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드메이린++;
				data.어드밴스드메이린승수++;
				if (data.어드밴스드메이린패수 != 0)
				{
					data.어드밴스드메이린승률 = data.어드밴스드메이린승수 / data.어드밴스드메이린;
				}
				else
				{
					data.어드밴스드메이린승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사나에++;
				data.사나에승수++;
				if (data.사나에패수 != 0)
				{
					data.사나에승률 = data.사나에승수 / data.사나에;
				}
				else
				{
					data.사나에승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레티++;
				data.레티승수++;
				if (data.레티패수 != 0)
				{
					data.레티승률 = data.레티승수 / data.레티;
				}
				else
				{
					data.레티승률 = 1;
				}
				탱커 = true;
				data.물리++;

			}
			dummy++;
			if (chara == dummy)
			{
				data.유유코++;
				data.유유코승수++;
				if (data.유유코패수 != 0)
				{
					data.유유코승률 = data.유유코승수 / data.유유코;
				}
				else
				{
					data.유유코승률 = 1;
				}
				힐러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.에이린++;
				data.에이린승수++;
				if (data.에이린패수 != 0)
				{
					data.에이린승률 = data.에이린승수 / data.에이린;
				}
				else
				{
					data.에이린승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사토리++;
				data.사토리승수++;
				if (data.사토리패수 != 0)
				{
					data.사토리승률 = data.사토리승수 / data.사토리;
				}
				else
				{
					data.사토리승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.바쿠렌++;
				data.바쿠렌승수++;
				if (data.바쿠렌패수 != 0)
				{
					data.바쿠렌승률 = data.바쿠렌승수 / data.바쿠렌;
				}
				else
				{
					data.바쿠렌승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.카구야++;
				data.카구야승수++;
				if (data.카구야패수 != 0)
				{
					data.카구야승률 = data.카구야승수 / data.카구야;
				}
				else
				{
					data.카구야승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.미코++;
				data.미코승수++;
				if (data.미코패수 != 0)
				{
					data.미코승률 = data.미코승수 / data.미코;
				}
				else
				{
					data.미코승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.누에++;
				data.누에승수++;
				if (data.누에패수 != 0)
				{
					data.누에승률 = data.누에승수 / data.누에;
				}
				else
				{
					data.누에승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.스이카++;
				data.스이카승수++;
				if (data.스이카패수 != 0)
				{
					data.스이카승률 = data.스이카승수 / data.스이카;
				}
				else
				{
					data.스이카승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.시키++;
				data.시키_승수++;
				if (data.시키_패수 != 0)
				{
					data.시키_승률 = data.시키_승수 / data.시키;
				}
				else
				{
					data.시키_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.유카++;
				data.유카_승수++;
				if (data.유카_패수 != 0)
				{
					data.유카_승률 = data.유카_승수 / data.유카;
				}
				else
				{
					data.유카_승률 = 1;
				}
				딜러 = true;
				data.마법++;

			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화요우무++;
				data.흑화요우무_승수++;
				if (data.흑화요우무_패수 != 0)
				{
					data.흑화요우무_승률 = data.흑화요우무_승수 / data.흑화요우무;
				}
				else
				{
					data.흑화요우무_승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트플랑++;
				data.어드밴트플랑_승수++;
				if (data.어드밴트플랑_패수 != 0)
				{
					data.어드밴트플랑_승률 = data.어드밴트플랑_승수 / data.어드밴트플랑;
				}
				else
				{
					data.어드밴트플랑_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.헤이메이린++;
				data.헤이메이린_승수++;
				if (data.헤이메이린_패수 != 0)
				{
					data.헤이메이린_승률 = data.헤이메이린_승수 / data.헤이메이린;
				}
				else
				{
					data.헤이메이린_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.홍메이린++;
				data.홍메이린_승수++;
				if (data.홍메이린_패수 != 0)
				{
					data.홍메이린_승률 = data.홍메이린_승수 / data.홍메이린;
				}
				else
				{
					data.홍메이린_승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화카구야++;
				data.흑화카구야_승수++;
				if (data.흑화카구야_패수 != 0)
				{
					data.흑화카구야_승률 = data.흑화카구야_승수 / data.흑화카구야;
				}
				else
				{
					data.흑화카구야_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.모미지++;
				data.모미지_승수++;
				if (data.모미지_패수 != 0)
				{
					data.모미지_승률 = data.모미지_승수 / data.모미지;
				}
				else
				{
					data.모미지_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화무라사++;
				data.흑화무라사_승수++;
				if (data.흑화무라사_패수 != 0)
				{
					data.흑화무라사_승률 = data.흑화무라사_승수 / data.흑화무라사;
				}
				else
				{
					data.흑화무라사_승률 = 1;
				}
				탱커 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.조온++;
				data.조온_승수++;
				if (data.조온_패수 != 0)
				{
					data.조온_승률 = data.조온_승수 / data.조온;
				}
				else
				{
					data.조온_승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.악마레이무++;
				data.악마레이무_승수++;
				if (data.악마레이무_패수 != 0)
				{
					data.악마레이무_승률 = data.악마레이무_승수 / data.악마레이무;
				}
				else
				{
					data.악마레이무_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화텐시++;
				data.흑화텐시_승수++;
				if (data.흑화텐시_패수 != 0)
				{
					data.흑화텐시_승률 = data.흑화텐시_승수 / data.흑화텐시;
				}
				else
				{
					data.흑화텐시_승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			else
			{
				TRACE("error:nochara - %d\n", chara);
			}
			if (딜러 == true)
			{
				data.딜러++;
				data.딜러점수 += 10;
				if (하프 == true)
				{
					data.딜러점수 -= 5;
				}
			}
			if (탱커 == true)
			{
				data.탱커++;
				data.탱커점수 += 10;
				if (하프 == true)
				{
					data.탱커점수 -= 5;
				}
			}
			if (힐러 == true)
			{
				data.힐러++;
				data.힐러점수 += 10;
				if (하프 == true)
				{
					data.힐러점수 -= 5;
				}
			}
		}
		if (wol == FALSE)
		{
			if (chara == dummy)
			{
				data.요우무_r1++;
				data.요우무_r1패수++;;
				if (data.요우무_r1패수 != 0)
				{
					data.요우무_r1승률 = data.요우무_r1승수 / data.요우무_r1;
				}
				else
				{
					data.요우무_r1승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.요우무_r2++;
				data.요우무_r2패수++;;
				if (data.요우무_r2패수 != 0)
				{
					data.요우무_r2승률 = data.요우무_r2승수 / data.요우무_r2;
				}
				else
				{
					data.요우무_r2승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.요우무_하이브리드++;
				data.요우무_하이브리드패수++;;
				if (data.요우무_하이브리드패수 != 0)
				{
					data.요우무_하이브리드승률 = data.요우무_하이브리드승수 / data.요우무_하이브리드;
				}
				else
				{
					data.요우무_하이브리드승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이무++;
				data.레이무패수++;;
				if (data.레이무패수 != 0)
				{
					data.레이무승률 = data.레이무승수 / data.레이무;
				}
				else
				{
					data.레이무승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.치르노++;
				data.치르노패수++;;
				if (data.치르노패수 != 0)
				{
					data.치르노승률 = data.치르노승수 / data.치르노;
				}
				else
				{
					data.치르노승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사쿠야_딜러++;
				data.사쿠야_딜러패수++;;
				if (data.사쿠야_딜러패수 != 0)
				{
					data.사쿠야_딜러승률 = data.사쿠야_딜러승수 / data.사쿠야_딜러;
				}
				else
				{
					data.사쿠야_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사쿠야_탱커++;
				data.사쿠야_탱커패수++;;
				if (data.사쿠야_탱커패수 != 0)
				{
					data.사쿠야_탱커승률 = data.사쿠야_탱커승수 / data.사쿠야_탱커;
				}
				else
				{
					data.사쿠야_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.이쿠++;
				data.이쿠패수++;;
				if (data.이쿠패수 != 0)
				{
					data.이쿠승률 = data.이쿠승수 / data.이쿠;
				}
				else
				{
					data.이쿠승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_물리++;
				data.무라사_물리패수++;;
				if (data.무라사_물리패수 != 0)
				{
					data.무라사_물리승률 = data.무라사_물리승수 / data.무라사_물리;
				}
				else
				{
					data.무라사_물리승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_마법++;
				data.무라사_마법패수++;;
				if (data.무라사_마법패수 != 0)
				{
					data.무라사_마법승률 = data.무라사_마법승수 / data.무라사_마법;
				}
				else
				{
					data.무라사_마법승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.무라사_하이브리드++;
				data.무라사_하이브리드패수++;;
				if (data.무라사_하이브리드패수 != 0)
				{
					data.무라사_하이브리드승률 = data.무라사_하이브리드승수 / data.무라사_하이브리드;
				}
				else
				{
					data.무라사_하이브리드승률 = 1;
				}
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_탱커++;
				data.레이센_탱커패수++;;
				if (data.레이센_탱커패수 != 0)
				{
					data.레이센_탱커승률 = data.레이센_탱커승수 / data.레이센_탱커;
				}
				else
				{
					data.레이센_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_딜러++;
				data.레이센_딜러패수++;;
				if (data.레이센_딜러패수 != 0)
				{
					data.레이센_딜러승률 = data.레이센_딜러승수 / data.레이센_딜러;
				}
				else
				{
					data.레이센_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레이센_하이브리드++;
				data.레이센_하이브리드패수++;;
				if (data.레이센_하이브리드패수 != 0)
				{
					data.레이센_하이브리드승률 = data.레이센_하이브리드승수 / data.레이센_하이브리드;
				}
				else
				{
					data.레이센_하이브리드승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_물리++;
				data.앨리스_물리패수++;;
				if (data.앨리스_물리패수 != 0)
				{
					data.앨리스_물리승률 = data.앨리스_물리승수 / data.앨리스_물리;
				}
				else
				{
					data.앨리스_물리승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_마법++;
				data.앨리스_마법패수++;;
				if (data.앨리스_마법패수 != 0)
				{
					data.앨리스_마법승률 = data.앨리스_마법승수 / data.앨리스_마법;
				}
				else
				{
					data.앨리스_마법승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.앨리스_하이브리드++;
				data.앨리스_하이브리드패수++;;
				if (data.앨리스_하이브리드패수 != 0)
				{
					data.앨리스_하이브리드승률 = data.앨리스_하이브리드승수 / data.앨리스_하이브리드;
				}
				else
				{
					data.앨리스_하이브리드승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레밀리아++;
				data.레밀리아패수++;;
				if (data.레밀리아패수 != 0)
				{
					data.레밀리아승률 = data.레밀리아승수 / data.레밀리아;
				}
				else
				{
					data.레밀리아승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.플랑도르++;
				data.플랑도르패수++;;
				if (data.플랑도르패수 != 0)
				{
					data.플랑도르승률 = data.플랑도르승수 / data.플랑도르;
				}
				else
				{
					data.플랑도르승률 = 1;
				}
				딜러 = true;
				data.복합++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화치르노++;
				data.흑화치르노패수++;;
				if (data.흑화치르노패수 != 0)
				{
					data.흑화치르노승률 = data.흑화치르노승수 / data.흑화치르노;
				}
				else
				{
					data.흑화치르노승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r1++;
				data.어드밴스드요우무_r1패수++;;
				if (data.어드밴스드요우무_r1패수 != 0)
				{
					data.어드밴스드요우무_r1승률 = data.어드밴스드요우무_r1승수 / data.어드밴스드요우무_r1;
				}
				else
				{
					data.어드밴스드요우무_r1승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r2++;
				data.어드밴스드요우무_r2패수++;;
				if (data.어드밴스드요우무_r2패수 != 0)
				{
					data.어드밴스드요우무_r2승률 = data.어드밴스드요우무_r2승수 / data.어드밴스드요우무_r2;
				}
				else
				{
					data.어드밴스드요우무_r2승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드요우무_r3++;
				data.어드밴스드요우무_r3패수++;;
				if (data.어드밴스드요우무_r3패수 != 0)
				{
					data.어드밴스드요우무_r3승률 = data.어드밴스드요우무_r3승수 / data.어드밴스드요우무_r3;
				}
				else
				{
					data.어드밴스드요우무_r3승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_딜러++;
				data.마리사_딜러패수++;;
				if (data.마리사_딜러패수 != 0)
				{
					data.마리사_딜러승률 = data.마리사_딜러승수 / data.마리사_딜러;
				}
				else
				{
					data.마리사_딜러승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_힐러++;
				data.마리사_힐러패수++;;
				if (data.마리사_힐러패수 != 0)
				{
					data.마리사_힐러승률 = data.마리사_힐러승수 / data.마리사_힐러;
				}
				else
				{
					data.마리사_힐러승률 = 1;
				}
				힐러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.마리사_하이브리드++;
				data.마리사_하이브리드패수++;;
				if (data.마리사_하이브리드패수 != 0)
				{
					data.마리사_하이브리드승률 = data.마리사_하이브리드승수 / data.마리사_하이브리드;
				}
				else
				{
					data.마리사_하이브리드승률 = 1;
				}
				딜러 = true;
				힐러 = true;
				하프 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.유카리++;
				data.유카리패수++;;
				if (data.유카리패수 != 0)
				{
					data.유카리승률 = data.유카리승수 / data.유카리;
				}
				else
				{
					data.유카리승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.모코우++;
				data.모코우패수++;;
				if (data.모코우패수 != 0)
				{
					data.모코우승률 = data.모코우승수 / data.모코우;
				}
				else
				{
					data.모코우승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트모미지++;
				data.어드밴트모미지패수++;;
				if (data.어드밴트모미지패수 != 0)
				{
					data.어드밴트모미지승률 = data.어드밴트모미지승수 / data.어드밴트모미지;
				}
				else
				{
					data.어드밴트모미지승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.파츄리++;
				data.파츄리패수++;;
				if (data.파츄리패수 != 0)
				{
					data.파츄리승률 = data.파츄리승수 / data.파츄리;
				}
				else
				{
					data.파츄리승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.우츠호++;
				data.우츠호패수++;;
				if (data.우츠호패수 != 0)
				{
					data.우츠호승률 = data.우츠호승수 / data.우츠호;
				}
				else
				{
					data.우츠호승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.스와코++;
				data.스와코패수++;;
				if (data.스와코패수 != 0)
				{
					data.스와코승률 = data.스와코승수 / data.스와코;
				}
				else
				{
					data.스와코승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.텐시_딜러++;
				data.텐시_딜러패수++;;
				if (data.텐시_딜러패수 != 0)
				{
					data.텐시_딜러승률 = data.텐시_딜러승수 / data.텐시_딜러;
				}
				else
				{
					data.텐시_딜러승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.텐시_탱커++;
				data.텐시_탱커패수++;;
				if (data.텐시_탱커패수 != 0)
				{
					data.텐시_탱커승률 = data.텐시_탱커승수 / data.텐시_탱커;
				}
				else
				{
					data.텐시_탱커승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트치르노++;
				data.어드밴트치르노패수++;;
				if (data.어드밴트치르노패수 != 0)
				{
					data.어드밴트치르노승률 = data.어드밴트치르노승수 / data.어드밴트치르노;
				}
				else
				{
					data.어드밴트치르노승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.코마치++;
				data.코마치패수++;;
				if (data.코마치패수 != 0)
				{
					data.코마치승률 = data.코마치승수 / data.코마치;
				}
				else
				{
					data.코마치승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.아야++;
				data.아야패수++;;
				if (data.아야패수 != 0)
				{
					data.아야승률 = data.아야승수 / data.아야;
				}
				else
				{
					data.요우무_r1승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴스드메이린++;
				data.어드밴스드메이린패수++;;
				if (data.어드밴스드메이린패수 != 0)
				{
					data.어드밴스드메이린승률 = data.어드밴스드메이린승수 / data.어드밴스드메이린;
				}
				else
				{
					data.어드밴스드메이린승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사나에++;
				data.사나에패수++;;
				if (data.사나에패수 != 0)
				{
					data.사나에승률 = data.사나에승수 / data.사나에;
				}
				else
				{
					data.사나에승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.레티++;
				data.레티패수++;;
				if (data.레티패수 != 0)
				{
					data.레티승률 = data.레티승수 / data.레티;
				}
				else
				{
					data.레티승률 = 1;
				}
				탱커 = true;
				data.물리++;

			}
			dummy++;
			if (chara == dummy)
			{
				data.유유코++;
				data.유유코패수++;;
				if (data.유유코패수 != 0)
				{
					data.유유코승률 = data.유유코승수 / data.유유코;
				}
				else
				{
					data.유유코승률 = 1;
				}
				힐러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.에이린++;
				data.에이린패수++;;
				if (data.에이린패수 != 0)
				{
					data.에이린승률 = data.에이린승수 / data.에이린;
				}
				else
				{
					data.에이린승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.사토리++;
				data.사토리패수++;;
				if (data.사토리패수 != 0)
				{
					data.사토리승률 = data.사토리승수 / data.사토리;
				}
				else
				{
					data.사토리승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.바쿠렌++;
				data.바쿠렌패수++;;
				if (data.바쿠렌패수 != 0)
				{
					data.바쿠렌승률 = data.바쿠렌승수 / data.바쿠렌;
				}
				else
				{
					data.바쿠렌승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.카구야++;
				data.카구야패수++;;
				if (data.카구야패수 != 0)
				{
					data.카구야승률 = data.카구야승수 / data.카구야;
				}
				else
				{
					data.카구야승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.미코++;
				data.미코패수++;;
				if (data.미코패수 != 0)
				{
					data.미코승률 = data.미코승수 / data.미코;
				}
				else
				{
					data.미코승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.누에++;
				data.누에패수++;;
				if (data.누에패수 != 0)
				{
					data.누에승률 = data.누에승수 / data.누에;
				}
				else
				{
					data.누에승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.스이카++;
				data.스이카패수++;;
				if (data.스이카패수 != 0)
				{
					data.스이카승률 = data.스이카승수 / data.스이카;
				}
				else
				{
					data.스이카승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.시키++;
				data.시키_패수++;;
				if (data.시키_패수 != 0)
				{
					data.시키_승률 = data.시키_승수 / data.시키;
				}
				else
				{
					data.시키_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.유카++;
				data.유카_패수++;;
				if (data.유카_패수 != 0)
				{
					data.유카_승률 = data.유카_승수 / data.유카;
				}
				else
				{
					data.유카_승률 = 1;
				}
				딜러 = true;
				data.마법++;

			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화요우무++;
				data.흑화요우무_패수++;;
				if (data.흑화요우무_패수 != 0)
				{
					data.흑화요우무_승률 = data.흑화요우무_승수 / data.흑화요우무;
				}
				else
				{
					data.흑화요우무_승률 = 1;
				}
				딜러 = true;
				탱커 = true;
				하프 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.어드밴트플랑++;
				data.어드밴트플랑_패수++;;
				if (data.어드밴트플랑_패수 != 0)
				{
					data.어드밴트플랑_승률 = data.어드밴트플랑_승수 / data.어드밴트플랑;
				}
				else
				{
					data.어드밴트플랑_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.헤이메이린++;
				data.헤이메이린_패수++;;
				if (data.헤이메이린_패수 != 0)
				{
					data.헤이메이린_승률 = data.헤이메이린_승수 / data.헤이메이린;
				}
				else
				{
					data.헤이메이린_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.홍메이린++;
				data.홍메이린_패수++;;
				if (data.홍메이린_패수 != 0)
				{
					data.홍메이린_승률 = data.홍메이린_승수 / data.홍메이린;
				}
				else
				{
					data.홍메이린_승률 = 1;
				}
				탱커 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화카구야++;
				data.흑화카구야_패수++;;
				if (data.흑화카구야_패수 != 0)
				{
					data.흑화카구야_승률 = data.흑화카구야_승수 / data.흑화카구야;
				}
				else
				{
					data.흑화카구야_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.모미지++;
				data.모미지_패수++;;
				if (data.모미지_패수 != 0)
				{
					data.모미지_승률 = data.모미지_승수 / data.모미지;
				}
				else
				{
					data.모미지_승률 = 1;
				}
				딜러 = true;
				data.물리++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화무라사++;
				data.흑화무라사_패수++;;
				if (data.흑화무라사_패수 != 0)
				{
					data.흑화무라사_승률 = data.흑화무라사_승수 / data.흑화무라사;
				}
				else
				{
					data.흑화무라사_승률 = 1;
				}
				탱커 = true;
				data.마법계수물리뎀++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.조온++;
				data.조온_패수++;;
				if (data.조온_패수 != 0)
				{
					data.조온_승률 = data.조온_승수 / data.조온;
				}
				else
				{
					data.조온_승률 = 1;
				}
				탱커 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.악마레이무++;
				data.악마레이무_패수++;;
				if (data.악마레이무_패수 != 0)
				{
					data.악마레이무_승률 = data.악마레이무_승수 / data.악마레이무;
				}
				else
				{
					data.악마레이무_승률 = 1;
				}
				딜러 = true;
				data.마법++;
			}
			dummy++;
			if (chara == dummy)
			{
				data.흑화텐시++;
				data.흑화텐시_패수++;;
				if (data.흑화텐시_패수 != 0)
				{
					data.흑화텐시_승률 = data.흑화텐시_승수 / data.흑화텐시;
				}
				else
				{
					data.흑화텐시_승률 = 1;
				}
				딜러 = true;
				data.마법계수물리뎀++;
			}
			else
			{
				TRACE("error:nochara - %d\n", chara);
			}
			if (딜러 == true)
			{
				TRACE("딜러\n");
				data.딜러++;
				data.딜러점수 -= 10;
				if (하프 == true)
				{
					data.딜러점수 += 5;
				}
			}
			if (탱커 == true)
			{
				TRACE("탱커\n");
				data.탱커++;
				data.탱커점수 -= 10;
				if (하프 == true)
				{
					data.탱커점수 += 5;
				}
			}
			if (힐러 == true)
			{
				TRACE("힐러\n");
				data.힐러++;
				data.힐러점수 -= 10;
				if (하프 == true)
				{
					data.힐러점수 += 5;
				}
			}
		}
		if ((data.딜러 > data.탱커)&(data.딜러 > data.힐러))
		{
			data.주포지션 = 1;
		}
		else if ((data.탱커 > data.힐러)&(data.탱커 > data.딜러))
		{
			data.주포지션 = 2;
		}
		else if ((data.힐러 > data.탱커)&(data.힐러 > data.딜러))
		{
			data.주포지션 = 3;
		}
		else
		{
			data.주포지션 = 0;
		}
		딜러, 탱커, 힐러, 하프 = false;
		TRACE("딜러=%d\n", data.딜러);
		TRACE("TIME:WRITEMODE,test=%d\n", data.요우무_하이브리드);

		//저장합니다
		put(name, FALSE, data);
		//작동종료
		fclose(WRITEsave);
	}
	delete name;
	delete cha;
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
