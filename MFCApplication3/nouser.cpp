// nouser.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "nouser.h"
#include "afxdialogex.h"




// nouser 대화 상자

IMPLEMENT_DYNAMIC(nouser, CDialog)

nouser::nouser(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent)
{

}

nouser::~nouser()
{
}

void nouser::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(nouser, CDialog)
	ON_BN_CLICKED(IDOK, &nouser::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &nouser::OnBnClickedCancel)
END_MESSAGE_MAP()


// nouser 메시지 처리기


void nouser::OnBnClickedOk()
{
	OKNO = TRUE;
	
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
	
	
	//
	CDialog::OnOK();
}


void nouser::OnBnClickedCancel()
{
	OKNO = FALSE;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}
