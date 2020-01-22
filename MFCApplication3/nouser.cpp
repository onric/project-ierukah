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
	//이하 연산코-드
	bool 딜러 = false;
	bool 탱커 = false;
	bool 힐러 = false;
	bool 하프 = false;
	int dummy = 0;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	dataSTR data;
	data.vernum = 현재버젼;
	data.게임횟수++;
	data.킬 += kill;
	data.데스 += death;
	data.어시스트 += assist;
	data.승수 += win;
	data.패수 += lose;
	if (data.패수 != 0)
	{
		data.승률 = data.승수 / data.패수;
	}
	else
	{
		data.승률 = 1;
	}
	//todo:피해타입따라 추가 코드 써야합니다, 시발;
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
	if (win == 1)
	{
		TRACE("win=%d\n", win);
		if (chara == dummy)
		{
			data.요우무_r1++;
			data.요우무_r1승수++;
			if (data.요우무_r1패수 != 0)
			{
				data.요우무_r1승률 = data.요우무_r1승수 / data.요우무_r1패수;
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
				data.요우무_r2승률 = data.요우무_r2승수 / data.요우무_r2패수;
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
				data.요우무_하이브리드승률 = data.요우무_하이브리드승수 / data.요우무_하이브리드패수;
			}
			dummy++; 
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
				data.레이무승률 = data.레이무승수 / data.레이무패수;
			}
			dummy++; 
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
				data.치르노승률 = data.치르노승수 / data.치르노패수;
			}
			dummy++; 
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
				data.사쿠야_딜러승률 = data.사쿠야_딜러승수 / data.사쿠야_딜러패수;
			}
			dummy++; 
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
				data.사쿠야_탱커승률 = data.사쿠야_탱커승수 / data.사쿠야_탱커패수;
			}
			dummy++; 
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
				data.이쿠승률 = data.이쿠승수 / data.이쿠패수;
			}
			dummy++; 
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
				data.무라사_물리승률 = data.무라사_물리승수 / data.무라사_물리패수;
			}
			dummy++; 
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
				data.무라사_마법승률 = data.무라사_마법승수 / data.무라사_마법패수;
			}
			dummy++; 
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
				data.무라사_하이브리드승률 = data.무라사_하이브리드승수 / data.무라사_하이브리드패수;
			}
			dummy++; 
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
				data.레이센_탱커승률 = data.레이센_탱커승수 / data.레이센_탱커패수;
			}
			dummy++; 
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
				data.레이센_딜러승률 = data.레이센_딜러승수 / data.레이센_딜러패수;
			}
			dummy++; 
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
				data.레이센_하이브리드승률 = data.레이센_하이브리드승수 / data.레이센_하이브리드패수;
			}
			dummy++; 
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
				data.앨리스_물리승률 = data.앨리스_물리승수 / data.앨리스_물리패수;
			}
			dummy++; 
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
				data.앨리스_마법승률 = data.앨리스_마법승수 / data.앨리스_마법패수;
			}
			dummy++; 
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
				data.앨리스_하이브리드승률 = data.앨리스_하이브리드승수 / data.앨리스_하이브리드패수;
			}
			dummy++; 
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
				data.레밀리아승률 = data.레밀리아승수 / data.레밀리아패수;
			}
			dummy++; 
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
				data.플랑도르승률 = data.플랑도르승수 / data.플랑도르패수;
			}
			dummy++; 
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
				data.흑화치르노승률 = data.흑화치르노승수 / data.흑화치르노패수;
			}
			dummy++; 
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
				data.어드밴스드요우무_r1승률 = data.어드밴스드요우무_r1승수 / data.어드밴스드요우무_r1패수;
			}
			dummy++; 
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
				data.어드밴스드요우무_r2승률 = data.어드밴스드요우무_r2승수 / data.어드밴스드요우무_r2패수;
			}
			dummy++; 
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
				data.어드밴스드요우무_r3승률 = data.어드밴스드요우무_r3승수 / data.어드밴스드요우무_r3패수;
			}
			dummy++; 
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
				data.마리사_딜러승률 = data.마리사_딜러승수 / data.마리사_딜러패수;
			}
			dummy++; 
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
				data.마리사_힐러승률 = data.마리사_힐러승수 / data.마리사_힐러패수;
			}
			dummy++; 
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
				data.마리사_하이브리드승률 = data.마리사_하이브리드승수 / data.마리사_하이브리드패수;
			}
			dummy++; 
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
				data.유카리승률 = data.유카리승수 / data.유카리패수;
			}
			dummy++; 
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
				data.모코우승률 = data.모코우승수 / data.모코우패수;
			}
			dummy++; 
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
				data.어드밴트모미지승률 = data.어드밴트모미지승수 / data.어드밴트모미지패수;
			}
			dummy++; 
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
				data.파츄리승률 = data.파츄리승수 / data.파츄리패수;
			}
			dummy++; 
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
				data.우츠호승률 = data.우츠호승수 / data.우츠호패수;
			}
			dummy++; 
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
				data.스와코승률 = data.스와코승수 / data.스와코패수;
			}
			dummy++; 
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
				data.텐시_딜러승률 = data.텐시_딜러승수 / data.텐시_딜러패수;
			}
			dummy++; 
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
				data.텐시_탱커승률 = data.텐시_탱커승수 / data.텐시_탱커패수;
			}
			dummy++; 
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
				data.어드밴트치르노승률 = data.어드밴트치르노승수 / data.어드밴트치르노패수;
			}
			dummy++; 
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
				data.코마치승률 = data.코마치승수 / data.코마치패수;
			}
			dummy++; 
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
				data.아야승률 = data.아야승수 / data.아야패수;
			}
			dummy++; 
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
				data.어드밴스드메이린승률 = data.어드밴스드메이린승수 / data.어드밴스드메이린패수;
			}
			dummy++; 
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
				data.사나에승률 = data.사나에승수 / data.사나에패수;
			}
			dummy++; 
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
				data.레티승률 = data.레티승수 / data.레티패수;
			}
			dummy++; 
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
				data.유유코승률 = data.유유코승수 / data.유유코패수;
			}
			dummy++; 
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
				data.에이린승률 = data.에이린승수 / data.에이린패수;
			}
			dummy++; 
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
				data.사토리승률 = data.사토리승수 / data.사토리패수;
			}
			dummy++; 
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
				data.바쿠렌승률 = data.바쿠렌승수 / data.바쿠렌패수;
			}
			dummy++; 
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
				data.카구야승률 = data.카구야승수 / data.카구야패수;
			}
			dummy++; 
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
				data.미코승률 = data.미코승수 / data.미코패수;
			}
			dummy++; 
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
				data.누에승률 = data.누에승수 / data.누에패수;
			}
			dummy++; 
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
				data.스이카승률 = data.스이카승수 / data.스이카패수;
			}
			dummy++; 
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
				data.시키_승률 = data.시키_승수 / data.시키_패수;
			}
			dummy++; 
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
				data.유카_승률 = data.유카_승수 / data.유카_패수;
			}
			dummy++; 
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
				data.흑화요우무_승률 = data.흑화요우무_승수 / data.흑화요우무_패수;
			}
			dummy++; 
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
				data.어드밴트플랑_승률 = data.어드밴트플랑_승수 / data.어드밴트플랑_패수;
			}
			dummy++; 
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
				data.헤이메이린_승률 = data.헤이메이린_승수 / data.헤이메이린_패수;
			}
			dummy++; 
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
				data.홍메이린_승률 = data.홍메이린_승수 / data.홍메이린_패수;
			}
			dummy++; 
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
				data.흑화카구야_승률 = data.흑화카구야_승수 / data.흑화카구야_패수;
			}
			dummy++; 
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
				data.모미지_승률 = data.모미지_승수 / data.모미지_패수;
			}
			dummy++; 
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
				data.흑화무라사_승률 = data.흑화무라사_승수 / data.흑화무라사_패수;
			}
			dummy++; 
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
				data.조온_승률 = data.조온_승수 / data.조온_패수;
			}
			dummy++; 
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
				data.악마레이무_승률 = data.악마레이무_승수 / data.악마레이무_패수;
			}
			dummy++; 
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
				data.흑화텐시_승률 = data.흑화텐시_승수 / data.흑화텐시_패수;
			}
			dummy++; 
			{
				data.흑화텐시_승률 = 1;
			}
			딜러 = true;
			data.마법계수물리뎀++;
		}
		else
		{
			TRACE("error:nochara - %d", chara);
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
	if (lose == 1)
	{
		TRACE("lose=%d\n", lose);
		if (chara == dummy)
		{
			data.요우무_r1++;
			data.요우무_r1패수++;
			if (data.요우무_r1패수 != 0)
			{
				data.요우무_r1승률 = data.요우무_r1승수 / data.요우무_r1패수;
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
			data.요우무_r2패수++;
			if (data.요우무_r2패수 != 0)
			{
				data.요우무_r2승률 = data.요우무_r2승수 / data.요우무_r2패수;
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
			data.요우무_하이브리드패수++;
			if (data.요우무_하이브리드패수 != 0)
			{
				data.요우무_하이브리드승률 = data.요우무_하이브리드승수 / data.요우무_하이브리드패수;
			}
			dummy++;
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
			data.레이무패수++;
			if (data.레이무패수 != 0)
			{
				data.레이무승률 = data.레이무승수 / data.레이무패수;
			}
			dummy++;
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
			data.치르노패수++;
			if (data.치르노패수 != 0)
			{
				data.치르노승률 = data.치르노승수 / data.치르노패수;
			}
			dummy++;
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
			data.사쿠야_딜러패수++;
			if (data.사쿠야_딜러패수 != 0)
			{
				data.사쿠야_딜러승률 = data.사쿠야_딜러승수 / data.사쿠야_딜러패수;
			}
			dummy++;
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
			data.사쿠야_탱커패수++;
			if (data.사쿠야_탱커패수 != 0)
			{
				data.사쿠야_탱커승률 = data.사쿠야_탱커승수 / data.사쿠야_탱커패수;
			}
			dummy++;
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
			data.이쿠패수++;
			if (data.이쿠패수 != 0)
			{
				data.이쿠승률 = data.이쿠승수 / data.이쿠패수;
			}
			dummy++;
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
			data.무라사_물리패수++;
			if (data.무라사_물리패수 != 0)
			{
				data.무라사_물리승률 = data.무라사_물리승수 / data.무라사_물리패수;
			}
			dummy++;
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
			data.무라사_마법패수++;
			if (data.무라사_마법패수 != 0)
			{
				data.무라사_마법승률 = data.무라사_마법승수 / data.무라사_마법패수;
			}
			dummy++;
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
			data.무라사_하이브리드패수++;
			if (data.무라사_하이브리드패수 != 0)
			{
				data.무라사_하이브리드승률 = data.무라사_하이브리드승수 / data.무라사_하이브리드패수;
			}
			dummy++;
			{
				data.무라사_하이브리드승률 = 1;
			}
			data.마법계수물리뎀++;
		}
		dummy++;
		if (chara == dummy)
		{
			data.레이센_탱커++;
			data.레이센_탱커패수++;
			if (data.레이센_탱커패수 != 0)
			{
				data.레이센_탱커승률 = data.레이센_탱커승수 / data.레이센_탱커패수;
			}
			dummy++;
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
			data.레이센_딜러패수++;
			if (data.레이센_딜러패수 != 0)
			{
				data.레이센_딜러승률 = data.레이센_딜러승수 / data.레이센_딜러패수;
			}
			dummy++;
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
			data.레이센_하이브리드패수++;
			if (data.레이센_하이브리드패수 != 0)
			{
				data.레이센_하이브리드승률 = data.레이센_하이브리드승수 / data.레이센_하이브리드패수;
			}
			dummy++;
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
			data.앨리스_물리패수++;
			if (data.앨리스_물리패수 != 0)
			{
				data.앨리스_물리승률 = data.앨리스_물리승수 / data.앨리스_물리패수;
			}
			dummy++;
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
			data.앨리스_마법패수++;
			if (data.앨리스_마법패수 != 0)
			{
				data.앨리스_마법승률 = data.앨리스_마법승수 / data.앨리스_마법패수;
			}
			dummy++;
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
			data.앨리스_하이브리드패수++;
			if (data.앨리스_하이브리드패수 != 0)
			{
				data.앨리스_하이브리드승률 = data.앨리스_하이브리드승수 / data.앨리스_하이브리드패수;
			}
			dummy++;
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
			data.레밀리아패수++;
			if (data.레밀리아패수 != 0)
			{
				data.레밀리아승률 = data.레밀리아승수 / data.레밀리아패수;
			}
			dummy++;
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
			data.플랑도르패수++;
			if (data.플랑도르패수 != 0)
			{
				data.플랑도르승률 = data.플랑도르승수 / data.플랑도르패수;
			}
			dummy++;
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
			data.흑화치르노패수++;
			if (data.흑화치르노패수 != 0)
			{
				data.흑화치르노승률 = data.흑화치르노승수 / data.흑화치르노패수;
			}
			dummy++;
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
			data.어드밴스드요우무_r1패수++;
			if (data.어드밴스드요우무_r1패수 != 0)
			{
				data.어드밴스드요우무_r1승률 = data.어드밴스드요우무_r1승수 / data.어드밴스드요우무_r1패수;
			}
			dummy++;
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
			data.어드밴스드요우무_r2패수++;
			if (data.어드밴스드요우무_r2패수 != 0)
			{
				data.어드밴스드요우무_r2승률 = data.어드밴스드요우무_r2승수 / data.어드밴스드요우무_r2패수;
			}
			dummy++;
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
			data.어드밴스드요우무_r3패수++;
			if (data.어드밴스드요우무_r3패수 != 0)
			{
				data.어드밴스드요우무_r3승률 = data.어드밴스드요우무_r3승수 / data.어드밴스드요우무_r3패수;
			}
			dummy++;
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
			data.마리사_딜러패수++;
			if (data.마리사_딜러패수 != 0)
			{
				data.마리사_딜러승률 = data.마리사_딜러승수 / data.마리사_딜러패수;
			}
			dummy++;
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
			data.마리사_힐러패수++;
			if (data.마리사_힐러패수 != 0)
			{
				data.마리사_힐러승률 = data.마리사_힐러승수 / data.마리사_힐러패수;
			}
			dummy++;
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
			data.마리사_하이브리드패수++;
			if (data.마리사_하이브리드패수 != 0)
			{
				data.마리사_하이브리드승률 = data.마리사_하이브리드승수 / data.마리사_하이브리드패수;
			}
			dummy++;
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
			data.유카리패수++;
			if (data.유카리패수 != 0)
			{
				data.유카리승률 = data.유카리승수 / data.유카리패수;
			}
			dummy++;
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
			data.모코우패수++;
			if (data.모코우패수 != 0)
			{
				data.모코우승률 = data.모코우승수 / data.모코우패수;
			}
			dummy++;
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
			data.어드밴트모미지패수++;
			if (data.어드밴트모미지패수 != 0)
			{
				data.어드밴트모미지승률 = data.어드밴트모미지승수 / data.어드밴트모미지패수;
			}
			dummy++;
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
			data.파츄리패수++;
			if (data.파츄리패수 != 0)
			{
				data.파츄리승률 = data.파츄리승수 / data.파츄리패수;
			}
			dummy++;
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
			data.우츠호패수++;
			if (data.우츠호패수 != 0)
			{
				data.우츠호승률 = data.우츠호승수 / data.우츠호패수;
			}
			dummy++;
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
			data.스와코패수++;
			if (data.스와코패수 != 0)
			{
				data.스와코승률 = data.스와코승수 / data.스와코패수;
			}
			dummy++;
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
			data.텐시_딜러패수++;
			if (data.텐시_딜러패수 != 0)
			{
				data.텐시_딜러승률 = data.텐시_딜러승수 / data.텐시_딜러패수;
			}
			dummy++;
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
			data.텐시_탱커패수++;
			if (data.텐시_탱커패수 != 0)
			{
				data.텐시_탱커승률 = data.텐시_탱커승수 / data.텐시_탱커패수;
			}
			dummy++;
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
			data.어드밴트치르노패수++;
			if (data.어드밴트치르노패수 != 0)
			{
				data.어드밴트치르노승률 = data.어드밴트치르노승수 / data.어드밴트치르노패수;
			}
			dummy++;
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
			data.코마치패수++;
			if (data.코마치패수 != 0)
			{
				data.코마치승률 = data.코마치승수 / data.코마치패수;
			}
			dummy++;
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
			data.아야패수++;
			if (data.아야패수 != 0)
			{
				data.아야승률 = data.아야승수 / data.아야패수;
			}
			dummy++;
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
			data.어드밴스드메이린패수++;
			if (data.어드밴스드메이린패수 != 0)
			{
				data.어드밴스드메이린승률 = data.어드밴스드메이린승수 / data.어드밴스드메이린패수;
			}
			dummy++;
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
			data.사나에패수++;
			if (data.사나에패수 != 0)
			{
				data.사나에승률 = data.사나에승수 / data.사나에패수;
			}
			dummy++;
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
			data.레티패수++;
			if (data.레티패수 != 0)
			{
				data.레티승률 = data.레티승수 / data.레티패수;
			}
			dummy++;
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
			data.유유코패수++;
			if (data.유유코패수 != 0)
			{
				data.유유코승률 = data.유유코승수 / data.유유코패수;
			}
			dummy++;
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
			data.에이린패수++;
			if (data.에이린패수 != 0)
			{
				data.에이린승률 = data.에이린승수 / data.에이린패수;
			}
			dummy++;
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
			data.사토리패수++;
			if (data.사토리패수 != 0)
			{
				data.사토리승률 = data.사토리승수 / data.사토리패수;
			}
			dummy++;
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
			data.바쿠렌패수++;
			if (data.바쿠렌패수 != 0)
			{
				data.바쿠렌승률 = data.바쿠렌승수 / data.바쿠렌패수;
			}
			dummy++;
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
			data.카구야패수++;
			if (data.카구야패수 != 0)
			{
				data.카구야승률 = data.카구야승수 / data.카구야패수;
			}
			dummy++;
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
			data.미코패수++;
			if (data.미코패수 != 0)
			{
				data.미코승률 = data.미코승수 / data.미코패수;
			}
			dummy++;
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
			data.누에패수++;
			if (data.누에패수 != 0)
			{
				data.누에승률 = data.누에승수 / data.누에패수;
			}
			dummy++;
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
			data.스이카패수++;
			if (data.스이카패수 != 0)
			{
				data.스이카승률 = data.스이카승수 / data.스이카패수;
			}
			dummy++;
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
			data.시키_패수++;
			if (data.시키_패수 != 0)
			{
				data.시키_승률 = data.시키_승수 / data.시키_패수;
			}
			dummy++;
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
			data.유카_패수++;
			if (data.유카_패수 != 0)
			{
				data.유카_승률 = data.유카_승수 / data.유카_패수;
			}
			dummy++;
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
			data.흑화요우무_패수++;
			if (data.흑화요우무_패수 != 0)
			{
				data.흑화요우무_승률 = data.흑화요우무_승수 / data.흑화요우무_패수;
			}
			dummy++;
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
			data.어드밴트플랑_패수++;
			if (data.어드밴트플랑_패수 != 0)
			{
				data.어드밴트플랑_승률 = data.어드밴트플랑_승수 / data.어드밴트플랑_패수;
			}
			dummy++;
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
			data.헤이메이린_패수++;
			if (data.헤이메이린_패수 != 0)
			{
				data.헤이메이린_승률 = data.헤이메이린_승수 / data.헤이메이린_패수;
			}
			dummy++;
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
			data.홍메이린_패수++;
			if (data.홍메이린_패수 != 0)
			{
				data.홍메이린_승률 = data.홍메이린_승수 / data.홍메이린_패수;
			}
			dummy++;
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
			data.흑화카구야_패수++;
			if (data.흑화카구야_패수 != 0)
			{
				data.흑화카구야_승률 = data.흑화카구야_승수 / data.흑화카구야_패수;
			}
			dummy++;
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
			data.모미지_패수++;
			if (data.모미지_패수 != 0)
			{
				data.모미지_승률 = data.모미지_승수 / data.모미지_패수;
			}
			dummy++;
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
			data.흑화무라사_패수++;
			if (data.흑화무라사_패수 != 0)
			{
				data.흑화무라사_승률 = data.흑화무라사_승수 / data.흑화무라사_패수;
			}
			dummy++;
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
			data.조온_패수++;
			if (data.조온_패수 != 0)
			{
				data.조온_승률 = data.조온_승수 / data.조온_패수;
			}
			dummy++;
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
			data.악마레이무_패수++;
			if (data.악마레이무_패수 != 0)
			{
				data.악마레이무_승률 = data.악마레이무_승수 / data.악마레이무_패수;
			}
			dummy++;
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
			data.흑화텐시_패수++;
			if (data.흑화텐시_패수 != 0)
			{
				data.흑화텐시_승률 = data.흑화텐시_승수 / data.흑화텐시_패수;
			}
			dummy++;
			{
				data.흑화텐시_승률 = 1;
			}
			딜러 = true;
			data.마법계수물리뎀++;
		}
		else
		{
			TRACE("error:nochara - %d", chara);
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
	TRACE("딜러=%d", data.딜러);
	put(name, TRUE, data);
	
	//
	CDialog::OnOK();
}


void nouser::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialog::OnCancel();
}
