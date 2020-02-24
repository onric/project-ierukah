// STATUS.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "STATUS.h"
#include "afxdialogex.h"


// STATUS 대화 상자

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
END_MESSAGE_MAP()


// STATUS 메시지 처리기



void STATUS::OnCbnSelchangeCombo1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString DISBUF = (_T("this is test\n테스트라고\n12343244\n만약 이게 뜬다면 버그임 ㅋ\n\n"));


	UpdateData(TRUE);
	int chara = listMENU.GetCurSel();
	int dummy = 0;
	if (chara == dummy)//0,총합 표시입니다.
	{
		char position = NULL;
		char* type = NULL;
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		
		/*if (N_dataSTR.주포지션 == 1)\
		{
			strcpy(&position, "딜러");
		}
		else if (N_dataSTR.주포지션 == 2)
		{
			strcpy(&position, "탱커");
		}
		else if (N_dataSTR.주포지션 == 3)
		{
			strcpy(&position, "힐러");
		}
		else if (N_dataSTR.주포지션 == 0)
		{
			strcpy(&position, "아직정해지지않음");
		}
		*/
		DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n주 포지션 : aa\n딜러 플레이 횟수 : %d\n힐러 플레이 횟수 : %d\n탱커 플레이 횟수 : %d\nKDA : %d/%d/%d\n"), 총합.게임횟수, 총합.승률, 총합.승수, 총합.패수, N_dataSTR.딜러, N_dataSTR.힐러, N_dataSTR.탱커, 총합.킬, 총합.데스, 총합.어시스트);

	}
	TRACE("더미 증가\n");
	dummy++;
	if (chara == dummy)//1,콘파쿠 요우무_물리
	{
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n처치 : %d\n죽음 : %d\n도움 : %d\n"), 요우무_r1.게임횟수, 요우무_r1.승률, 요우무_r1.승수, 요우무_r1.패수,요우무_r1.킬,요우무_r1.데스,요우무_r1.어시스트);
	}
	dummy++;
	if (chara == dummy)//2,콘파쿠 요우무_마법
	{
		TRACE("TIME:COMBO, dummy:%d\n", dummy);
		DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 요우무_r2.게임횟수, 요우무_r2.승률, 요우무_r2.승수, 요우무_r2.패수);
		dummy++;
	}
		if (chara == dummy)//3,콘파쿠 요우무_하이브리드
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 요우무_하이브리드.게임횟수, 요우무_하이브리드.승률, 요우무_하이브리드.승수, 요우무_하이브리드.패수);
		}
		dummy++;
		if (chara == dummy)//4 레이무
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 레이무.게임횟수, 레이무.승률, 레이무.승수, 레이무.패수);
		}
		dummy++;
		if (chara == dummy)//5.치르노
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 치르노.게임횟수, 치르노.승률, 치르노.승수, 치르노.패수);
		}
		dummy++;
		if (chara == dummy)//6
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 사쿠야_딜러.게임횟수, 사쿠야_딜러.승률, 사쿠야_딜러.승수, 사쿠야_딜러.패수);
		}
		dummy++;
		if (chara == dummy)//7
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), 사쿠야_딜러.게임횟수, 사쿠야_딜러.승률, 사쿠야_딜러.승수, 사쿠야_딜러.패수);
		}
		dummy++;
		if (chara == dummy)//8
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.이쿠, aaa.이쿠승률, aaa.이쿠승수, aaa.이쿠패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.무라사_물리, aaa.무라사_물리승률, aaa.무라사_물리승수, aaa.무라사_물리패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.무라사_마법, aaa.무라사_마법승률, aaa.무라사_마법승수, aaa.무라사_마법패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.무라사_하이브리드, aaa.무라사_하이브리드승률, aaa.무라사_하이브리드승수, aaa.무라사_하이브리드패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.레이센_탱커, aaa.레이센_탱커승률, aaa.레이센_탱커승수, aaa.레이센_탱커패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.레이센_딜러, aaa.레이센_딜러승률, aaa.레이센_딜러승수, aaa.레이센_딜러패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.레이센_하이브리드, aaa.레이센_하이브리드승률, aaa.레이센_하이브리드승수, aaa.레이센_하이브리드패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.앨리스_물리, aaa.앨리스_물리승률, aaa.앨리스_물리승수, aaa.앨리스_물리패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.앨리스_하이브리드, aaa.앨리스_하이브리드승률, aaa.앨리스_하이브리드승수, aaa.앨리스_하이브리드패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.앨리스_마법, aaa.앨리스_마법승률, aaa.앨리스_마법승수, aaa.앨리스_마법패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.레밀리아, aaa.레밀리아승률, aaa.레밀리아승수, aaa.레밀리아패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			TRACE("TIME:COMBO, dummy:%d\n", dummy);
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.플랑도르, aaa.플랑도르승률, aaa.플랑도르승수, aaa.플랑도르패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.흑화치르노, aaa.흑화치르노승률, aaa.흑화치르노승수, aaa.흑화치르노패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴스드요우무_r1, aaa.어드밴스드요우무_r1승률, aaa.어드밴스드요우무_r1승수, aaa.어드밴스드요우무_r1패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴스드요우무_r2, aaa.어드밴스드요우무_r2승률, aaa.어드밴스드요우무_r2승수, aaa.어드밴스드요우무_r2패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴스드요우무_r3, aaa.어드밴스드요우무_r3승률, aaa.어드밴스드요우무_r3승수, aaa.어드밴스드요우무_r3패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.마리사_딜러, aaa.마리사_딜러승률, aaa.마리사_딜러승수, aaa.마리사_딜러패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.마리사_힐러, aaa.마리사_힐러승률, aaa.마리사_힐러승수, aaa.마리사_힐러패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.마리사_하이브리드, aaa.마리사_하이브리드승률, aaa.마리사_하이브리드승수, aaa.마리사_하이브리드패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.유카리, aaa.유카리승률, aaa.유카리승수, aaa.유카리패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.모코우, aaa.모코우승률, aaa.모코우승수, aaa.모코우패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴트모미지, aaa.어드밴트모미지승률, aaa.어드밴트모미지승수, aaa.어드밴트모미지패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.파츄리, aaa.파츄리승률, aaa.파츄리승수, aaa.파츄리패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.우츠호, aaa.우츠호승률, aaa.우츠호승수, aaa.우츠호패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.스와코, aaa.스와코승률, aaa.스와코승수, aaa.스와코패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.텐시_딜러, aaa.텐시_딜러승률, aaa.텐시_딜러승수, aaa.텐시_딜러패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.텐시_탱커, aaa.텐시_탱커승률, aaa.텐시_탱커승수, aaa.텐시_탱커패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴트치르노, aaa.어드밴트치르노승률, aaa.어드밴트치르노승수, aaa.어드밴트치르노패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.코마치, aaa.코마치승률, aaa.코마치승수, aaa.코마치패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.아야, aaa.아야승률, aaa.아야승수, aaa.아야패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴스드메이린, aaa.어드밴스드메이린승률, aaa.어드밴스드메이린승수, aaa.어드밴스드메이린패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.사나에, aaa.사나에승률, aaa.사나에승수, aaa.사나에패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.레티, aaa.레티승률, aaa.레티승수, aaa.레티패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.유유코, aaa.유유코승률, aaa.유유코승수, aaa.유유코패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.에이린, aaa.에이린승률, aaa.에이린승수, aaa.에이린패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.사토리, aaa.사토리승률, aaa.사토리승수, aaa.사토리패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.바쿠렌, aaa.바쿠렌승률, aaa.바쿠렌승수, aaa.바쿠렌패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.카구야, aaa.카구야승률, aaa.카구야승수, aaa.카구야패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.미코, aaa.미코승률, aaa.미코승수, aaa.미코패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.누에, aaa.누에승률, aaa.누에승수, aaa.누에패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.스이카, aaa.스이카승률, aaa.스이카승수, aaa.스이카패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.시키, aaa.시키_승률, aaa.시키_승수, aaa.시키_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.유카, aaa.유카_승률, aaa.유카_승수, aaa.유카_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.흑화요우무, aaa.흑화요우무_승률, aaa.흑화요우무_승수, aaa.흑화요우무_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.어드밴트플랑, aaa.어드밴트플랑_승률, aaa.어드밴트플랑_승수, aaa.어드밴트플랑_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.헤이메이린, aaa.헤이메이린_승률, aaa.헤이메이린_승수, aaa.헤이메이린_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.홍메이린, aaa.홍메이린_승률, aaa.홍메이린_승수, aaa.홍메이린_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.흑화카구야, aaa.흑화카구야_승률, aaa.흑화카구야_승수, aaa.흑화카구야_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.모미지, aaa.모미지_승률, aaa.모미지_승수, aaa.모미지_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.흑화무라사, aaa.흑화무라사_승률, aaa.흑화무라사_승수, aaa.흑화무라사_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.조온, aaa.조온_승률, aaa.조온_승수, aaa.조온_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.악마레이무, aaa.악마레이무_승률, aaa.악마레이무_승수, aaa.악마레이무_패수);
		}
		dummy++;
		if (chara == dummy)//
		{
			DISBUF.Format(_T("플레이 횟수 : %d\n승률 : %lf\n승리 : %d\n패배 : %d\n"), aaa.흑화텐시, aaa.흑화텐시_승률, aaa.흑화텐시_승수, aaa.흑화텐시_패수);
		}
		dummy++;
		//선택 확인 완료, 출력.
		DISPLAY.SetWindowTextW(DISBUF);
	
}


void STATUS::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
