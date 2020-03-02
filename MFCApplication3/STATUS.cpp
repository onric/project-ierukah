// STATUS.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "STATUS.h"
#include "afxdialogex.h"
#include "ierukah.h"
#include "readdata.h"
// STATUS 대화 상자
BOOL triger = FALSE;
IMPLEMENT_DYNAMIC(STATUS, CDialog)

STATUS::STATUS(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_STATUS, pParent)
{

}

STATUS::~STATUS()
{
	
}

void STATUS::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, listMENU);
	DDX_Control(pDX, IDC_STATUS, DISPLAY);
}


BEGIN_MESSAGE_MAP(STATUS, CDialog)
//	ON_WM_CREATE()
	ON_CBN_SELCHANGE(IDC_COMBO1, &STATUS::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON1, &STATUS::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &STATUS::OnBnClickedCancel)
END_MESSAGE_MAP()


// STATUS 메시지 처리기



void STATUS::OnCbnSelchangeCombo1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString DISBUF = (_T("이게 뜬다면 버그임 ㅇㅋ?\n\n"));
	
	if (triger == FALSE)
	{
		IO.readsave(M_name);
		triger = TRUE;
	}
	
	double kda = 0;
	UpdateData(TRUE);
	int chara = listMENU.GetCurSel();
	int dummy = 0;
	if (chara == dummy)//0,총합 표시입니다.
	{
		TRACE("테스트용 게임횟수 출력 : %d\n", 총합.게임횟수);
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		kda = 총합.getKDA();
		TRACE("주포지션:%d\n", N_dataSTR.주포지션);
		if (N_dataSTR.주포지션 == 1)
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n주 포지션 : 딜러\n딜러 플레이 횟수 : %d\n힐러 플레이 횟수 : %d\n탱커 플레이 횟수 : %d\nKDA : %d/%d/%d\n"), 총합.게임횟수, 총합.승률, 총합.승수, 총합.패수, N_dataSTR.딜러, N_dataSTR.힐러, N_dataSTR.탱커, 총합.킬, 총합.데스, 총합.어시스트);

		}
		else if (N_dataSTR.주포지션 == 2)
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n주 포지션 : 탱커\n딜러 플레이 횟수 : %d\n힐러 플레이 횟수 : %d\n탱커 플레이 횟수 : %d\nKDA : %d/%d/%d\n"), 총합.게임횟수, 총합.승률, 총합.승수, 총합.패수, N_dataSTR.딜러, N_dataSTR.힐러, N_dataSTR.탱커, 총합.킬, 총합.데스, 총합.어시스트);

		}
		else if (N_dataSTR.주포지션 == 3)
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n주 포지션 : 힐러\n딜러 플레이 횟수 : %d\n힐러 플레이 횟수 : %d\n탱커 플레이 횟수 : %d\nKDA : %d/%d/%d\n"), 총합.게임횟수, 총합.승률, 총합.승수, 총합.패수, N_dataSTR.딜러, N_dataSTR.힐러, N_dataSTR.탱커, 총합.킬, 총합.데스, 총합.어시스트);

		}
		else if (N_dataSTR.주포지션 == 0)
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n주 포지션 : 아직 정해지지 않음\n딜러 플레이 횟수 : %d\n힐러 플레이 횟수 : %d\n탱커 플레이 횟수 : %d\nKDA : %d/%d/%d\n"), 총합.게임횟수, 총합.승률, 총합.승수, 총합.패수, N_dataSTR.딜러, N_dataSTR.힐러, N_dataSTR.탱커, 총합.킬, 총합.데스, 총합.어시스트);

		}
		
		TRACE("%d/%d/%d\n", 총합.킬, 총합.데스, 총합.어시스트);
	}
	TRACE("더미 증가\n");
	dummy++;
	if (chara == dummy)//1,콘파쿠 요우무_물리
	{
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		kda = 요우무_r1.getKDA();
		DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 요우무_r1.게임횟수, 요우무_r1.승률, 요우무_r1.승수, 요우무_r1.패수,요우무_r1.킬,요우무_r1.데스,요우무_r1.어시스트,kda,요우무_r1.레이팅);
	}
	dummy++;
	if (chara == dummy)//2,콘파쿠 요우무_마법
	{
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		kda = 요우무_r2.getKDA();
		DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 요우무_r2.게임횟수, 요우무_r2.승률, 요우무_r2.승수, 요우무_r2.패수, 요우무_r2.킬, 요우무_r2.데스, 요우무_r2.어시스트, kda, 요우무_r2.레이팅);
	}
	dummy++;
		if (chara == dummy)//3,콘파쿠 요우무_하이브리드
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 요우무_하이브리드.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 요우무_하이브리드.게임횟수, 요우무_하이브리드.승률, 요우무_하이브리드.승수, 요우무_하이브리드.패수, 요우무_하이브리드.킬, 요우무_하이브리드.데스, 요우무_하이브리드.어시스트, kda, 요우무_하이브리드.레이팅);

		}
		dummy++;
		if (chara == dummy)//4 레이무
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 레이무.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레이무.게임횟수, 레이무.승률, 레이무.승수, 레이무.패수, 레이무.킬, 레이무.데스, 레이무.어시스트, kda, 레이무.레이팅);

		}
		dummy++;
		if (chara == dummy)//5.치르노
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 치르노.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 치르노.게임횟수, 치르노.승률, 치르노.승수, 치르노.패수, 치르노.킬, 치르노.데스, 치르노.어시스트, kda, 치르노.레이팅);

		}
		dummy++;
		if (chara == dummy)//6
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 사쿠야_딜러.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 사쿠야_딜러.게임횟수, 사쿠야_딜러.승률, 사쿠야_딜러.승수, 사쿠야_딜러.패수, 사쿠야_딜러.킬, 사쿠야_딜러.데스, 사쿠야_딜러.어시스트, kda, 사쿠야_딜러.레이팅);

		
		}
		dummy++;
		if (chara == dummy)//7
		{
			kda = 사쿠야_탱커.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 사쿠야_탱커.게임횟수, 사쿠야_탱커.승률, 사쿠야_탱커.승수, 사쿠야_탱커.패수, 사쿠야_탱커.킬, 사쿠야_탱커.데스, 사쿠야_탱커.어시스트, kda, 사쿠야_탱커.레이팅);

		}
		dummy++;
		if (chara == dummy)//8
		{
			kda = 이쿠.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 이쿠.게임횟수, 이쿠.승률, 이쿠.승수, 이쿠.패수, 이쿠.킬, 이쿠.데스, 이쿠.어시스트, kda, 이쿠.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 무라사_물리.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 무라사_물리.게임횟수, 무라사_물리.승률, 무라사_물리.승수, 무라사_물리.패수, 무라사_물리.킬, 무라사_물리.데스, 무라사_물리.어시스트, kda, 무라사_물리.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 무라사_마법.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 무라사_마법.게임횟수, 무라사_마법.승률, 무라사_마법.승수, 무라사_마법.패수, 무라사_마법.킬, 무라사_마법.데스, 무라사_마법.어시스트, kda, 무라사_마법.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 무라사_하이브리드.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 무라사_하이브리드.게임횟수, 무라사_하이브리드.승률, 무라사_하이브리드.승수, 무라사_하이브리드.패수, 무라사_하이브리드.킬, 무라사_하이브리드.데스, 무라사_하이브리드.어시스트, kda, 무라사_하이브리드.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 레이센_탱커.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레이센_탱커.게임횟수, 레이센_탱커.승률, 레이센_탱커.승수, 레이센_탱커.패수, 레이센_탱커.킬, 레이센_탱커.데스, 레이센_탱커.어시스트, kda, 레이센_탱커.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 레이센_딜러.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레이센_딜러.게임횟수, 레이센_딜러.승률, 레이센_딜러.승수, 레이센_딜러.패수, 레이센_딜러.킬, 레이센_딜러.데스, 레이센_딜러.어시스트, kda, 레이센_딜러.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 레이센_하이브리드.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레이센_하이브리드.게임횟수, 레이센_하이브리드.승률, 레이센_하이브리드.승수, 레이센_하이브리드.패수, 레이센_하이브리드.킬, 레이센_하이브리드.데스, 레이센_하이브리드.어시스트, kda, 레이센_하이브리드.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 앨리스_물리.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 앨리스_물리.게임횟수, 앨리스_물리.승률, 앨리스_물리.승수, 앨리스_물리.패수, 앨리스_물리.킬, 앨리스_물리.데스, 앨리스_물리.어시스트, kda, 앨리스_물리.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 앨리스_마법.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 앨리스_마법.게임횟수, 앨리스_마법.승률, 앨리스_마법.승수, 앨리스_마법.패수, 앨리스_마법.킬, 앨리스_마법.데스, 앨리스_마법.어시스트, kda, 앨리스_마법.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 앨리스_하이브리드.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 앨리스_하이브리드.게임횟수, 앨리스_하이브리드.승률, 앨리스_하이브리드.승수, 앨리스_하이브리드.패수, 앨리스_하이브리드.킬, 앨리스_하이브리드.데스, 앨리스_하이브리드.어시스트, kda, 앨리스_하이브리드.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 레밀리아.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레밀리아.게임횟수, 레밀리아.승률, 레밀리아.승수, 레밀리아.패수, 레밀리아.킬, 레밀리아.데스, 레밀리아.어시스트, kda, 레밀리아.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			kda = 플랑도르.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 플랑도르.게임횟수, 플랑도르.승률, 플랑도르.승수, 플랑도르.패수, 플랑도르.킬, 플랑도르.데스, 플랑도르.어시스트, kda, 플랑도르.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 흑화치르노.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 흑화치르노.게임횟수, 흑화치르노.승률, 흑화치르노.승수, 흑화치르노.패수, 흑화치르노.킬, 흑화치르노.데스, 흑화치르노.어시스트, kda, 흑화치르노.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴스드요우무_r1.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴스드요우무_r1.게임횟수, 어드밴스드요우무_r1.승률, 어드밴스드요우무_r1.승수, 어드밴스드요우무_r1.패수, 어드밴스드요우무_r1.킬, 어드밴스드요우무_r1.데스, 어드밴스드요우무_r1.어시스트, kda, 어드밴스드요우무_r1.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴스드요우무_r2.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴스드요우무_r2.게임횟수, 어드밴스드요우무_r2.승률, 어드밴스드요우무_r2.승수, 어드밴스드요우무_r2.패수, 어드밴스드요우무_r2.킬, 어드밴스드요우무_r2.데스, 어드밴스드요우무_r2.어시스트, kda, 어드밴스드요우무_r2.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴스드요우무_r3.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴스드요우무_r3.게임횟수, 어드밴스드요우무_r3.승률, 어드밴스드요우무_r3.승수, 어드밴스드요우무_r3.패수, 어드밴스드요우무_r3.킬, 어드밴스드요우무_r3.데스, 어드밴스드요우무_r3.어시스트, kda, 어드밴스드요우무_r3.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 마리사_딜러.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 마리사_딜러.게임횟수, 마리사_딜러.승률, 마리사_딜러.승수, 마리사_딜러.패수, 마리사_딜러.킬, 마리사_딜러.데스, 마리사_딜러.어시스트, kda, 마리사_딜러.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 마리사_힐러.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 마리사_힐러.게임횟수, 마리사_힐러.승률, 마리사_힐러.승수, 마리사_힐러.패수, 마리사_힐러.킬, 마리사_힐러.데스, 마리사_힐러.어시스트, kda, 마리사_힐러.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 마리사_하이브리드.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 마리사_하이브리드.게임횟수, 마리사_하이브리드.승률, 마리사_하이브리드.승수, 마리사_하이브리드.패수, 마리사_하이브리드.킬, 마리사_하이브리드.데스, 마리사_하이브리드.어시스트, kda, 마리사_하이브리드.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 유카리.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 유카리.게임횟수, 유카리.승률, 유카리.승수, 유카리.패수, 유카리.킬, 유카리.데스, 유카리.어시스트, kda, 유카리.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 모코우.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 모코우.게임횟수, 모코우.승률, 모코우.승수, 모코우.패수, 모코우.킬, 모코우.데스, 모코우.어시스트, kda, 모코우.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴트모미지.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴트모미지.게임횟수, 어드밴트모미지.승률, 어드밴트모미지.승수, 어드밴트모미지.패수, 어드밴트모미지.킬, 어드밴트모미지.데스, 어드밴트모미지.어시스트, kda, 어드밴트모미지.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 파츄리.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 파츄리.게임횟수, 파츄리.승률, 파츄리.승수, 파츄리.패수, 파츄리.킬, 파츄리.데스, 파츄리.어시스트, kda, 파츄리.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 우츠호.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 우츠호.게임횟수, 우츠호.승률, 우츠호.승수, 우츠호.패수, 우츠호.킬, 우츠호.데스, 우츠호.어시스트, kda, 우츠호.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 스와코.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 스와코.게임횟수, 스와코.승률, 스와코.승수, 스와코.패수, 스와코.킬, 스와코.데스, 스와코.어시스트, kda, 스와코.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 텐시_딜러.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 텐시_딜러.게임횟수, 텐시_딜러.승률, 텐시_딜러.승수, 텐시_딜러.패수, 텐시_딜러.킬, 텐시_딜러.데스, 텐시_딜러.어시스트, kda, 텐시_딜러.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 텐시_탱커.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 텐시_탱커.게임횟수, 텐시_탱커.승률, 텐시_탱커.승수, 텐시_탱커.패수, 텐시_탱커.킬, 텐시_탱커.데스, 텐시_탱커.어시스트, kda, 텐시_탱커.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴트치르노.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴트치르노.게임횟수, 어드밴트치르노.승률, 어드밴트치르노.승수, 어드밴트치르노.패수, 어드밴트치르노.킬, 어드밴트치르노.데스, 어드밴트치르노.어시스트, kda, 어드밴트치르노.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 코마치.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 코마치.게임횟수, 코마치.승률, 코마치.승수, 코마치.패수, 코마치.킬, 코마치.데스, 코마치.어시스트, kda, 코마치.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 아야.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 아야.게임횟수, 아야.승률, 아야.승수, 아야.패수, 아야.킬, 아야.데스, 아야.어시스트, kda, 아야.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴스드메이린.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴스드메이린.게임횟수, 어드밴스드메이린.승률, 어드밴스드메이린.승수, 어드밴스드메이린.패수, 어드밴스드메이린.킬, 어드밴스드메이린.데스, 어드밴스드메이린.어시스트, kda, 어드밴스드메이린.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 사나에.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 사나에.게임횟수, 사나에.승률, 사나에.승수, 사나에.패수, 사나에.킬, 사나에.데스, 사나에.어시스트, kda, 사나에.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 레티.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 레티.게임횟수, 레티.승률, 레티.승수, 레티.패수, 레티.킬, 레티.데스, 레티.어시스트, kda, 레티.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 유유코.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 유유코.게임횟수, 유유코.승률, 유유코.승수, 유유코.패수, 유유코.킬, 유유코.데스, 유유코.어시스트, kda, 유유코.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 에이린.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 에이린.게임횟수, 에이린.승률, 에이린.승수, 에이린.패수, 에이린.킬, 에이린.데스, 에이린.어시스트, kda, 에이린.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 사토리.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 사토리.게임횟수, 사토리.승률, 사토리.승수, 사토리.패수, 사토리.킬, 사토리.데스, 사토리.어시스트, kda, 사토리.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 바쿠렌.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 바쿠렌.게임횟수, 바쿠렌.승률, 바쿠렌.승수, 바쿠렌.패수, 바쿠렌.킬, 바쿠렌.데스, 바쿠렌.어시스트, kda, 바쿠렌.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 카구야.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 카구야.게임횟수, 카구야.승률, 카구야.승수, 카구야.패수, 카구야.킬, 카구야.데스, 카구야.어시스트, kda, 카구야.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 미코.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 미코.게임횟수, 미코.승률, 미코.승수, 미코.패수, 미코.킬, 미코.데스, 미코.어시스트, kda, 미코.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 누에.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 누에.게임횟수, 누에.승률, 누에.승수, 누에.패수, 누에.킬, 누에.데스, 누에.어시스트, kda, 누에.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 스이카.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 스이카.게임횟수, 스이카.승률, 스이카.승수, 스이카.패수, 스이카.킬, 스이카.데스, 스이카.어시스트, kda, 스이카.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 시키.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 시키.게임횟수, 시키.승률, 시키.승수, 시키.패수, 시키.킬, 시키.데스, 시키.어시스트, kda, 시키.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 유카.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 유카.게임횟수, 유카.승률, 유카.승수, 유카.패수, 유카.킬, 유카.데스, 유카.어시스트, kda, 유카.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 흑화요우무.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 흑화요우무.게임횟수, 흑화요우무.승률, 흑화요우무.승수, 흑화요우무.패수, 흑화요우무.킬, 흑화요우무.데스, 흑화요우무.어시스트, kda, 흑화요우무.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 어드밴트플랑.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 어드밴트플랑.게임횟수, 어드밴트플랑.승률, 어드밴트플랑.승수, 어드밴트플랑.패수, 어드밴트플랑.킬, 어드밴트플랑.데스, 어드밴트플랑.어시스트, kda, 어드밴트플랑.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 헤이메이린.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 헤이메이린.게임횟수, 헤이메이린.승률, 헤이메이린.승수, 헤이메이린.패수, 헤이메이린.킬, 헤이메이린.데스, 헤이메이린.어시스트, kda, 헤이메이린.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 홍메이린.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 홍메이린.게임횟수, 홍메이린.승률, 홍메이린.승수, 홍메이린.패수, 홍메이린.킬, 홍메이린.데스, 홍메이린.어시스트, kda, 홍메이린.레이팅);

		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 흑화카구야.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 흑화카구야.게임횟수, 흑화카구야.승률, 흑화카구야.승수, 흑화카구야.패수, 흑화카구야.킬, 흑화카구야.데스, 흑화카구야.어시스트, kda, 흑화카구야.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 모미지.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 모미지.게임횟수, 모미지.승률, 모미지.승수, 모미지.패수, 모미지.킬, 모미지.데스, 모미지.어시스트, kda, 모미지.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 흑화무라사.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 흑화무라사.게임횟수, 흑화무라사.승률, 흑화무라사.승수, 흑화무라사.패수, 흑화무라사.킬, 흑화무라사.데스, 흑화무라사.어시스트, kda, 흑화무라사.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 조온.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 조온.게임횟수, 조온.승률, 조온.승수, 조온.패수, 조온.킬, 조온.데스, 조온.어시스트, kda, 조온.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 악마레이무.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 악마레이무.게임횟수, 악마레이무.승률, 악마레이무.승수, 악마레이무.패수, 악마레이무.킬, 악마레이무.데스, 악마레이무.어시스트, kda, 악마레이무.레이팅);
		}
		dummy++;
		if (chara == dummy)//
		{
			kda = 흑화텐시.getKDA();
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\nKDA : %2lf\n레이팅 : %d\n"), 흑화텐시.게임횟수, 흑화텐시.승률, 흑화텐시.승수, 흑화텐시.패수, 흑화텐시.킬, 흑화텐시.데스, 흑화텐시.어시스트, kda, 흑화텐시.레이팅);
		}
		dummy++;
		//선택 확인 완료, 출력.
		DISPLAY.SetWindowTextW(DISBUF);
	
}


void STATUS::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void STATUS::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}
