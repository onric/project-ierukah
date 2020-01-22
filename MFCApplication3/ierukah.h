
#pragma once
#define 정수형 unsigned int
#define 문자형 char 
#define 실수형 double
#define 현재버젼 1.0
#define 캐릭개수 60
//dmdrldlt

static FILE *savefile;
//

struct dataSTR
{
	int test = 3;
	double vernum = 0 ;
	int 게임횟수 = 0 ;//
	int 승수 = 0 ;//
	int 패수 = 0 ;//
	실수형 승률 = 0 ;//

	int 킬 = 0 ;//
	int 데스 = 0 ;//
	int 어시스트 = 0 ;//

	int 주포지션 = 0 ;//0=미정,1=딜,2=탱,3=힐
	int 탱커 = 0 ;//
	int 딜러 = 0 ;//
	int 힐러 = 0 ;//


	정수형 피해타입 = 0 ;//
	정수형 마법 = 0 ;//
	정수형 물리 = 0 ;//
	정수형 마법계수물리뎀 = 0 ;//
	정수형 복합 = 0;

	정수형 탱커점수 = 0 ;//
	정수형 딜러점수 = 0 ;//
	정수형 힐러점수 = 0 ;//


	정수형 요우무_r1 = 0 ;//
	정수형 요우무_r2 = 0 ;//
	정수형 요우무_하이브리드 = 0 ;//
	정수형 레이무 = 0 ;//
	정수형 치르노 = 0 ;//
	정수형 사쿠야_딜러 = 0 ;
	정수형 사쿠야_탱커 = 0 ;
	정수형 이쿠 = 0 ;//
	정수형 무라사_물리 = 0 ;//
	정수형 무라사_마법 = 0 ;//
	정수형 무라사_하이브리드 = 0 ;//
	정수형 레이센_탱커 = 0 ;//
	정수형 레이센_딜러 = 0 ;//
	정수형 레이센_하이브리드 = 0 ;//
	정수형 앨리스_물리 = 0 ;//
	정수형 앨리스_마법 = 0 ;//
	정수형 앨리스_하이브리드 = 0 ;//
	정수형 레밀리아 = 0 ;//
	정수형 플랑도르 = 0 ;//
	정수형 흑화치르노 = 0 ;//
	정수형 어드밴스드요우무_r1 = 0 ;//
	정수형 어드밴스드요우무_r2 = 0 ;//
	정수형 어드밴스드요우무_r3 = 0 ;//
	정수형 마리사_딜러 = 0 ;//
	정수형 마리사_힐러 = 0 ;//
	정수형 마리사_하이브리드 = 0 ;//
	정수형 유카리 = 0 ;//
	정수형 모코우 = 0 ;//
	정수형 어드밴트모미지 = 0 ;//
	정수형 파츄리 = 0 ;//
	정수형 우츠호 = 0 ;//
	정수형 스와코 = 0 ;//
	정수형 텐시_딜러 = 0 ;
	정수형 텐시_탱커 = 0 ;
	정수형 어드밴트치르노 = 0 ;//
	정수형 코마치 = 0 ;//
	정수형 아야 = 0 ;//
	정수형 어드밴스드메이린 = 0 ;//
	정수형 사나에 = 0 ;//
	정수형 레티 = 0 ;//
	정수형 유유코 = 0 ;//
	정수형 에이린 = 0 ;
	정수형 사토리 = 0 ;
	정수형 바쿠렌 = 0 ;
	정수형 카구야 = 0 ;
	정수형 미코 = 0 ;
	정수형 누에 = 0 ;
	정수형 스이카 = 0 ;

	정수형 시키 = 0 ;
	정수형 유카 = 0 ;
	정수형 흑화요우무 = 0 ;
	정수형 어드밴트플랑 = 0 ;
	정수형 헤이메이린 = 0 ;
	정수형 홍메이린 = 0 ;
	정수형 흑화카구야 = 0 ;
	정수형 모미지 = 0 ;
	정수형 흑화무라사 = 0 ;
	정수형 조온 = 0 ;
	정수형 악마레이무 = 0 ;
	정수형 흑화텐시 = 0 ;
	//-----------------
	정수형 요우무_r1승수 = 0 ;//
	정수형 요우무_r2승수 = 0 ;//
	정수형 요우무_하이브리드승수 = 0 ;//
	정수형 레이무승수 = 0 ;//
	정수형 치르노승수 = 0 ;//
	정수형 사쿠야_딜러승수 = 0 ;
	정수형 사쿠야_탱커승수 = 0 ;
	정수형 이쿠승수 = 0 ;//
	정수형 무라사_물리승수 = 0 ;//
	정수형 무라사_마법승수 = 0 ;//
	정수형 무라사_하이브리드승수 = 0 ;//
	정수형 레이센_탱커승수 = 0 ;//
	정수형 레이센_딜러승수 = 0 ;//
	정수형 레이센_하이브리드승수 = 0 ;//
	정수형 앨리스_물리승수 = 0 ;//
	정수형 앨리스_마법승수 = 0 ;//
	정수형 앨리스_하이브리드승수 = 0 ;//
	정수형 레밀리아승수 = 0 ;//
	정수형 플랑도르승수 = 0 ;//
	정수형 흑화치르노승수 = 0 ;//
	정수형 어드밴스드요우무_r1승수 = 0 ;//
	정수형 어드밴스드요우무_r2승수 = 0 ;//
	정수형 어드밴스드요우무_r3승수 = 0 ;//
	정수형 마리사_딜러승수 = 0 ;//
	정수형 마리사_힐러승수 = 0 ;//
	정수형 마리사_하이브리드승수 = 0 ;//
	정수형 유카리승수 = 0 ;//
	정수형 모코우승수 = 0 ;//
	정수형 어드밴트모미지승수 = 0 ;//
	정수형 파츄리승수 = 0 ;//
	정수형 우츠호승수 = 0 ;//
	정수형 스와코승수 = 0 ;//
	정수형 텐시_딜러승수 = 0 ;//
	정수형 텐시_탱커승수 = 0 ;
	정수형 어드밴트치르노승수 = 0 ;//
	정수형 코마치승수 = 0 ;//
	정수형 아야승수 = 0 ;//
	정수형 어드밴스드메이린승수 = 0 ;//
	정수형 사나에승수 = 0 ;//
	정수형 레티승수 = 0 ;//
	정수형 유유코승수 = 0 ;
	정수형 에이린승수 = 0 ;
	정수형 사토리승수 = 0 ;
	정수형 바쿠렌승수 = 0 ;
	정수형 카구야승수 = 0 ;
	정수형 미코승수 = 0 ;
	정수형 누에승수 = 0 ;
	정수형 스이카승수 = 0 ;

	정수형 시키_승수 = 0 ;
	정수형 유카_승수 = 0 ;
	정수형 흑화요우무_승수 = 0 ;
	정수형 어드밴트플랑_승수 = 0 ;
	정수형 헤이메이린_승수 = 0 ;
	정수형 홍메이린_승수 = 0 ;
	정수형 흑화카구야_승수 = 0 ;
	정수형 모미지_승수 = 0 ;
	정수형 흑화무라사_승수 = 0 ;
	정수형 조온_승수 = 0 ;
	정수형 악마레이무_승수 = 0 ;
	정수형 흑화텐시_승수 = 0 ;
	//--------------
	정수형 요우무_r1패수 = 0 ;//
	정수형 요우무_r2패수 = 0 ;//
	정수형 요우무_하이브리드패수 = 0 ;//
	정수형 레이무패수 = 0 ;//
	정수형 치르노패수 = 0 ;//
	정수형 사쿠야_딜러패수 = 0 ;
	정수형 사쿠야_탱커패수 = 0 ;
	정수형 이쿠패수 = 0 ;//
	정수형 무라사_물리패수 = 0 ;//
	정수형 무라사_마법패수 = 0 ;//
	정수형 무라사_하이브리드패수 = 0 ;//
	정수형 레이센_탱커패수 = 0 ;//
	정수형 레이센_딜러패수 = 0 ;//
	정수형 레이센_하이브리드패수 = 0 ;//
	정수형 앨리스_물리패수 = 0 ;//
	정수형 앨리스_마법패수 = 0 ;//
	정수형 앨리스_하이브리드패수 = 0 ;//
	정수형 레밀리아패수 = 0 ;//
	정수형 플랑도르패수 = 0 ;//
	정수형 흑화치르노패수 = 0 ;//
	정수형 어드밴스드요우무_r1패수 = 0 ;//
	정수형 어드밴스드요우무_r2패수 = 0 ;//
	정수형 어드밴스드요우무_r3패수 = 0 ;//
	정수형 마리사_딜러패수 = 0 ;//
	정수형 마리사_힐러패수 = 0 ;//
	정수형 마리사_하이브리드패수 = 0 ;//
	정수형 유카리패수 = 0 ;//
	정수형 모코우패수 = 0 ;//
	정수형 어드밴트모미지패수 = 0 ;//
	정수형 파츄리패수 = 0 ;//
	정수형 우츠호패수 = 0 ;//
	정수형 스와코패수 = 0 ;//
	정수형 텐시_딜러패수 = 0 ;//
	정수형 텐시_탱커패수 = 0 ;
	정수형 어드밴트치르노패수 = 0 ;//
	정수형 코마치패수 = 0 ;//
	정수형 아야패수 = 0 ;//
	정수형 어드밴스드메이린패수 = 0 ;//
	정수형 사나에패수 = 0 ;//
	정수형 레티패수 = 0 ;//
	정수형 유유코패수 = 0 ;//
	정수형 에이린패수 = 0 ;
	정수형 사토리패수 = 0 ;
	정수형 바쿠렌패수 = 0 ;
	정수형 카구야패수 = 0 ;
	정수형 미코패수 = 0 ;
	정수형 누에패수 = 0 ;
	정수형 스이카패수 = 0 ;

	정수형 시키_패수 = 0 ;
	정수형 유카_패수 = 0 ;
	정수형 흑화요우무_패수 = 0 ;
	정수형 어드밴트플랑_패수 = 0 ;
	정수형 헤이메이린_패수 = 0 ;
	정수형 홍메이린_패수 = 0 ;
	정수형 흑화카구야_패수 = 0 ;
	정수형 모미지_패수 = 0 ;
	정수형 흑화무라사_패수 = 0 ;
	정수형 조온_패수 = 0 ;
	정수형 악마레이무_패수 = 0 ;
	정수형 흑화텐시_패수 = 0 ;
	//------
	실수형 요우무_r1승률 = 0 ;//
	실수형 요우무_r2승률 = 0 ;//
	실수형 요우무_하이브리드승률 = 0 ;//
	실수형 레이무승률 = 0 ;//
	실수형 치르노승률 = 0 ;//
	실수형 사쿠야_딜러승률 = 0 ;
	실수형 사쿠야_탱커승률 = 0 ;
	실수형 이쿠승률 = 0 ;//
	실수형 무라사_물리승률 = 0 ;//
	실수형 무라사_마법승률 = 0 ;//
	실수형 무라사_하이브리드승률 = 0 ;//
	실수형 레이센_탱커승률 = 0 ;//
	실수형 레이센_딜러승률 = 0 ;//
	실수형 레이센_하이브리드승률 = 0 ;//
	실수형 앨리스_물리승률 = 0 ;//
	실수형 앨리스_마법승률 = 0 ;//
	실수형 앨리스_하이브리드승률 = 0 ;//
	실수형 레밀리아승률 = 0 ;//
	실수형 플랑도르승률 = 0 ;//
	실수형 흑화치르노승률 = 0 ;//
	실수형 어드밴스드요우무_r1승률 = 0 ;//
	실수형 어드밴스드요우무_r2승률 = 0 ;//
	실수형 어드밴스드요우무_r3승률 = 0 ;//
	실수형 마리사_딜러승률 = 0 ;//
	실수형 마리사_힐러승률 = 0 ;//
	실수형 마리사_하이브리드승률 = 0 ;//
	실수형 유카리승률 = 0 ;//
	실수형 모코우승률 = 0 ;//
	실수형 어드밴트모미지승률 = 0 ;//
	실수형 파츄리승률 = 0 ;//
	실수형 우츠호승률 = 0 ;//
	실수형 스와코승률 = 0 ;//
	실수형 텐시_딜러승률 = 0 ;//
	실수형 텐시_탱커승률 = 0 ;
	실수형 어드밴트치르노승률 = 0 ;//
	실수형 코마치승률 = 0 ;//
	실수형 아야승률 = 0 ;//
	실수형 어드밴스드메이린승률 = 0 ;//
	실수형 사나에승률 = 0 ;//
	실수형 레티승률 = 0 ;//
	실수형 유유코승률 = 0 ;//
	실수형 에이린승률 = 0 ;//
	실수형 사토리승률 = 0 ;
	실수형 바쿠렌승률 = 0 ;
	실수형 카구야승률 = 0 ;
	실수형 미코승률 = 0 ;
	실수형 누에승률 = 0 ;
	실수형 스이카승률 = 0 ;

	실수형 시키_승률 = 0 ;
	실수형 유카_승률 = 0 ;
	실수형 흑화요우무_승률 = 0 ;
	실수형 어드밴트플랑_승률 = 0 ;
	실수형 헤이메이린_승률 = 0 ;
	실수형 홍메이린_승률 = 0 ;
	실수형 흑화카구야_승률 = 0 ;
	실수형 모미지_승률 = 0 ;
	실수형 흑화무라사_승률 = 0 ;
	실수형 조온_승률 = 0 ;
	실수형 악마레이무_승률 = 0 ;
	실수형 흑화텐시_승률 = 0 ;
	//-------------
	정수형 mmr = 0 ;
	정수형 연승횟수 = 0 ;
	정수형 연패횟수 = 0 ;
};

//


inline void finddata()//
{
	bool doen = false;
	for (; doen == false;)
	{
		char buf11 = fgetc(savefile);
		if (buf11 == '=')
		{
			doen = true;
		}
	}
}//
inline void LINEFEED(int line)//
{
	fseek(savefile, 0, SEEK_SET);
	for (int i = 0; i < line; i++)
	{
		for (char buffer = NULL; buffer != '\n';)
		{
			buffer = fgetc(savefile);
		}
		fseek(savefile, +1, SEEK_CUR);
	}
}//
static void readLegcy()
{
	AfxMessageBox(_T("저장소가 구버젼입니다. 근데 업뎃 구현안됨"));
}
static void put(char* name, bool triger, dataSTR data)
{
	    TRACE("TIME:1,test=%d\n", data.요우무_하이브리드);
		savefile = fopen(name, "w");
		if ((triger == TRUE)&(savefile == NULL))
		{
			TRACE("name=%s", name);
			AfxMessageBox(_T("오류! 저장소 생성에 실패했습니다."));
		}
		fflush(savefile);
		fseek(savefile, 0, SEEK_SET);
		data.vernum = 현재버젼;
		fprintf(savefile, "버젼=%2lf\n", data.vernum);
		fprintf(savefile, "게임횟수=%d\n", data.게임횟수);
		fprintf(savefile, "매치메이킹랭크=%d\n", data.mmr);
		fprintf(savefile, "승수=%d\n", data.승수);
		fprintf(savefile, "패수=%d\n", data.패수);
		fprintf(savefile, "승률=%f\n", data.승률);
		fprintf(savefile, "킬=%d\n", data.킬);
		fprintf(savefile, "데스=%d\n", data.데스);
		fprintf(savefile, "어시스트=%d\n", data.어시스트);
		fprintf(savefile, "주포지션=%d\n", data.주포지션);
		fprintf(savefile, "탱커=%d\n", data.탱커);
		fprintf(savefile, "딜러=%d\n", data.딜러);
		fprintf(savefile, "힐러=%d\n", data.힐러);
		fprintf(savefile, "피해타입=%d\n", data.피해타입);
		fprintf(savefile, "마법=%d\n", data.마법);
		fprintf(savefile, "물리=%d\n", data.물리);
		fprintf(savefile, "마법계수물리뎀=%d\n", data.마법계수물리뎀);
		fprintf(savefile, "복합=%d\n", data.복합);
		fprintf(savefile, "탱커점수=%d\n", data.탱커점수);//15
		fprintf(savefile, "딜러점수=%d\n", data.딜러점수);//16
		fprintf(savefile, "힐러점수=%d\n", data.힐러점수);//17
		//
		fprintf(savefile, "요우무_r1=%d\n", data.요우무_r1);
		fprintf(savefile, "요우무_r2=%d\n", data.요우무_r2);
		fprintf(savefile, "요우무_하이브리드=%d\n", data.요우무_하이브리드);
		fprintf(savefile, "레이무=%d\n", data.레이무);
		fprintf(savefile, "치르노=%d\n", data.치르노);
		fprintf(savefile, "사쿠야_딜러=%d\n", data.사쿠야_딜러);
		fprintf(savefile, "사쿠야_탱커=%d\n", data.사쿠야_탱커);
		fprintf(savefile, "이쿠=%d\n", data.이쿠);
		fprintf(savefile, "무라사_물리=%d\n", data.무라사_물리);
		fprintf(savefile, "무라사_마법=%d\n", data.무라사_마법);
		fprintf(savefile, "무라사_하이브리드=%d\n", data.무라사_하이브리드);
		fprintf(savefile, "레이센_딜러=%d\n", data.레이센_딜러);
		fprintf(savefile, "레이센_탱커=%d\n", data.레이센_탱커);
		fprintf(savefile, "레이센_하이브리드=%d\n", data.레이센_하이브리드);
		fprintf(savefile, "레밀리아=%d\n", data.레밀리아);
		fprintf(savefile, "플랑도르=%d\n", data.플랑도르);
		fprintf(savefile, "흑화치르노=%d\n", data.흑화치르노);
		fprintf(savefile, "어드밴스드요우무_r1=%d\n", data.어드밴스드요우무_r1);
		fprintf(savefile, "어드밴스드요우무-r2=%d\n", data.어드밴스드요우무_r2);
		fprintf(savefile, "어드밴스드요우무_r3=%d\n", data.어드밴스드요우무_r3);
		fprintf(savefile, "마리사_딜러=%d\n", data.마리사_딜러);
		fprintf(savefile, "마리사_힐러=%d\n", data.마리사_힐러);
		fprintf(savefile, "마리사_하이브리드=%d\n", data.마리사_하이브리드);
		fprintf(savefile, "유카리=%d\n", data.유카리);
		fprintf(savefile, "어드밴트모미지=%d\n", data.어드밴트모미지);
		fprintf(savefile, "파츄리=%d\n", data.파츄리);
		fprintf(savefile, "우츠호=%d\n", data.우츠호);
		fprintf(savefile, "스와코=%d\n", data.스와코);
		fprintf(savefile, "텐시_딜러=%d\n", data.텐시_딜러);
		fprintf(savefile, "텐시_탱커=%d\n", data.텐시_탱커);
		fprintf(savefile, "어드밴트치르노=%d\n", data.어드밴트치르노);
		fprintf(savefile, "코마치=%d\n", data.코마치);
		fprintf(savefile, "모코우=%d\n", data.모코우);
		fprintf(savefile, "어드밴스드메이린=%d\n", data.어드밴스드메이린);
		fprintf(savefile, "사나에=%d\n", data.사나에);
		fprintf(savefile, "레티=%d\n", data.레티);
		fprintf(savefile, "유유코=%d\n", data.유유코);
		fprintf(savefile, "앨리스_물리=%d\n", data.앨리스_물리);
		fprintf(savefile, "앨리스_마법=%d\n", data.앨리스_마법);
		fprintf(savefile, "앨리스_하이브리드=%d\n", data.앨리스_하이브리드);
		fprintf(savefile, "에이린=%d\n", data.에이린);
		fprintf(savefile, "사토리=%d\n", data.사토리);
		fprintf(savefile, "바쿠렌=%d\n", data.바쿠렌);
		fprintf(savefile, "카구야=%d\n", data.카구야);
		fprintf(savefile, "미코=%d\n", data.미코);
		fprintf(savefile, "누에=%d\n", data.누에);
		fprintf(savefile, "스이카=%d\n", data.스이카);

		fprintf(savefile, "시키=%d\n", data.시키);
		fprintf(savefile, "유카=%d\n", data.유카);
		fprintf(savefile, "흑화요우무=%d\n", data.흑화요우무);
		fprintf(savefile, "어드밴트플랑=%d\n", data.어드밴트플랑);
		fprintf(savefile, "헤이메이린=%d\n", data.헤이메이린);
		fprintf(savefile, "홍메이린=%d\n", data.홍메이린);
		fprintf(savefile, "흑화카구야=%d\n", data.흑화카구야);
		fprintf(savefile, "모미지=%d\n", data.모미지);
		fprintf(savefile, "흑화무라사=%d\n", data.흑화무라사);
		fprintf(savefile, "조온=%d\n", data.조온);
		fprintf(savefile, "악마레이무=%d\n", data.악마레이무);
		fprintf(savefile, "흑화텐시=%d\n", data.흑화텐시);
		//----------
		fprintf(savefile, "요우무_r1승률=%f\n", data.요우무_r1승률);
		fprintf(savefile, "요우무_r2승률=%f\n", data.요우무_r2승률);
		fprintf(savefile, "요우무_하이브리드승률=%f\n", data.요우무_하이브리드승률);
		fprintf(savefile, "레이무승률=%f\n", data.레이무승률);
		fprintf(savefile, "치르노승률=%f\n", data.치르노승률);
		fprintf(savefile, "사쿠야_딜러승률=%f\n", data.사쿠야_딜러승률);
		fprintf(savefile, "사쿠야_탱커승률=%f\n", data.사쿠야_탱커승률);
		fprintf(savefile, "이쿠승률=%f\n", data.이쿠승률);
		fprintf(savefile, "무라사_물리승률=%f\n", data.무라사_물리승률);
		fprintf(savefile, "무라사_마법승률=%f\n", data.무라사_마법승률);
		fprintf(savefile, "무라사_하이브리드승률=%f\n", data.무라사_하이브리드승률);
		fprintf(savefile, "레이센_딜러승률=%f\n", data.레이센_딜러승률);
		fprintf(savefile, "레이센_탱커승률=%f\n", data.레이센_탱커승률);
		fprintf(savefile, "레이센_하이브리드승률=%f\n", data.레이센_하이브리드승률);
		fprintf(savefile, "레밀리아승률=%f\n", data.레밀리아승률);
		fprintf(savefile, "플랑도르승률=%f\n", data.플랑도르승률);
		fprintf(savefile, "흑화치르노승률=%f\n", data.흑화치르노승률);
		fprintf(savefile, "어드밴스드요우무_r1승률=%f\n", data.어드밴스드요우무_r1승률);
		fprintf(savefile, "어드밴스드요우무-r2승률=%f\n", data.어드밴스드요우무_r2승률);
		fprintf(savefile, "어드밴스드요우무_r3승률=%f\n", data.어드밴스드요우무_r3승률);
		fprintf(savefile, "마리사_딜러승률=%f\n", data.마리사_딜러승률);
		fprintf(savefile, "마리사_힐러승률=%f\n", data.마리사_힐러승률);
		fprintf(savefile, "마리사_하이브리드승률=%f\n", data.마리사_하이브리드승률);
		fprintf(savefile, "유카리승률=%f\n", data.유카리승률);
		fprintf(savefile, "어드밴트모미지승률=%f\n", data.어드밴트모미지승률);
		fprintf(savefile, "파츄리승률=%f\n", data.파츄리승률);
		fprintf(savefile, "우츠호승률=%f\n", data.우츠호승률);
		fprintf(savefile, "스와코승률=%f\n", data.스와코승률);
		fprintf(savefile, "텐시_딜러승률=%f\n", data.텐시_딜러승률);
		fprintf(savefile, "텐시_탱커승률=%f\n", data.텐시_탱커승률);
		fprintf(savefile, "어드밴트치르노승률=%f\n", data.어드밴트치르노승률);
		fprintf(savefile, "코마치승률=%f\n", data.코마치승률);
		fprintf(savefile, "모코우승률=%f\n", data.모코우승률);
		fprintf(savefile, "어드밴스드메이린승률=%f\n", data.어드밴스드메이린승률);
		fprintf(savefile, "사나에승률=%f\n", data.사나에승률);
		fprintf(savefile, "레티승률=%f\n", data.레티승률);
		fprintf(savefile, "유유코승률=%f\n", data.유유코승률);
		fprintf(savefile, "앨리스_물리승률=%f\n", data.앨리스_물리승률);
		fprintf(savefile, "앨리스_마법승률=%f\n", data.앨리스_마법승률);
		fprintf(savefile, "앨리스_하이브리드승률=%f\n", data.앨리스_하이브리드승률);
		fprintf(savefile, "에이린승률=%f\n", data.에이린승률);
		fprintf(savefile, "사토리승률=%f\n", data.사토리승률);
		fprintf(savefile, "바쿠렌승률=%f\n", data.바쿠렌승률);
		fprintf(savefile, "카구야승률=%f\n", data.카구야승률);
		fprintf(savefile, "미코승률=%f\n", data.미코승률);
		fprintf(savefile, "누에승률=%f\n", data.누에승률);
		fprintf(savefile, "스이카승률=%f\n", data.스이카승률);
		fprintf(savefile, "시키_승률=%f\n", data.시키_승률);
		fprintf(savefile, "유카_승률=%f\n", data.유카_승률);
		fprintf(savefile, "흑화요우무_승률=%f\n", data.흑화요우무_승률);
		fprintf(savefile, "어드밴트플랑_승률=%f\n", data.어드밴트플랑_승률);
		fprintf(savefile, "헤이메이린_승률=%f\n", data.헤이메이린_승률);
		fprintf(savefile, "홍메이린_승률=%f\n", data.홍메이린_승률);
		fprintf(savefile, "흑화카구야_승률=%f\n", data.흑화카구야_승률);
		fprintf(savefile, "모미지_승률=%f\n", data.모미지_승률);
		fprintf(savefile, "흑화무라사_승률=%f\n", data.흑화무라사_승률);
		fprintf(savefile, "조온_승률=%f\n", data.조온_승률);
		fprintf(savefile, "악마레이무_승률=%f\n", data.악마레이무_승률);
		fprintf(savefile, "흑화텐시_승률=%f\n", data.흑화텐시_승률);
		//---------
		fprintf(savefile, "요우무_r1승수=%d\n", data.요우무_r1승수);
		fprintf(savefile, "요우무_r2승수=%d\n", data.요우무_r2승수);
		fprintf(savefile, "요우무_하이브리드승수=%d\n", data.요우무_하이브리드승수);
		fprintf(savefile, "레이무승수=%d\n", data.레이무승수);
		fprintf(savefile, "치르노승수=%d\n", data.치르노승수);
		fprintf(savefile, "사쿠야_딜러승수=%d\n", data.사쿠야_딜러승수);
		fprintf(savefile, "사쿠야_탱커승수=%d\n", data.사쿠야_탱커승수);
		fprintf(savefile, "이쿠승수=%d\n", data.이쿠승수);
		fprintf(savefile, "무라사_물리승수=%d\n", data.무라사_물리승수);
		fprintf(savefile, "무라사_마법승수=%d\n", data.무라사_마법승수);
		fprintf(savefile, "무라사_하이브리드승수=%d\n", data.무라사_하이브리드승수);
		fprintf(savefile, "레이센_딜러승수=%d\n", data.레이센_딜러승수);
		fprintf(savefile, "레이센_탱커승수=%d\n", data.레이센_탱커승수);
		fprintf(savefile, "레이센_하이브리드승수=%d\n", data.레이센_하이브리드승수);
		fprintf(savefile, "레밀리아승수=%d\n", data.레밀리아승수);
		fprintf(savefile, "플랑도르승수=%d\n", data.플랑도르승수);
		fprintf(savefile, "흑화치르노승수=%d\n", data.흑화치르노승수);
		fprintf(savefile, "어드밴스드요우무_r1승수=%d\n", data.어드밴스드요우무_r1승수);
		fprintf(savefile, "어드밴스드요우무-r2승수=%d\n", data.어드밴스드요우무_r2승수);
		fprintf(savefile, "어드밴스드요우무_r3승수=%d\n", data.어드밴스드요우무_r3승수);
		fprintf(savefile, "마리사_딜러승수=%d\n", data.마리사_딜러승수);
		fprintf(savefile, "마리사_힐러승수=%d\n", data.마리사_힐러승수);
		fprintf(savefile, "마리사_하이브리드승수=%d\n", data.마리사_하이브리드승수);
		fprintf(savefile, "유카리승수=%d\n", data.유카리승수);
		fprintf(savefile, "어드밴트모미지승수=%d\n", data.어드밴트모미지승수);
		fprintf(savefile, "파츄리승수=%d\n", data.파츄리승수);
		fprintf(savefile, "우츠호승수=%d\n", data.우츠호승수);
		fprintf(savefile, "스와코승수=%d\n", data.스와코승수);
		fprintf(savefile, "텐시_딜러승수=%d\n", data.텐시_딜러승수);
		fprintf(savefile, "텐시_탱커승수=%d\n", data.텐시_탱커승수);
		fprintf(savefile, "어드밴트치르노승수=%d\n", data.어드밴트치르노승수);
		fprintf(savefile, "코마치승수=%d\n", data.코마치승수);
		fprintf(savefile, "모코우승수=%d\n", data.모코우승수);
		fprintf(savefile, "어드밴스드메이린승수=%d\n", data.어드밴스드메이린승수);
		fprintf(savefile, "사나에승수=%d\n", data.사나에승수);
		fprintf(savefile, "레티승수=%d\n", data.레티승수);
		fprintf(savefile, "유유코승수=%d\n", data.유유코승수);
		fprintf(savefile, "앨리스_물리승수=%d\n", data.앨리스_물리승수);
		fprintf(savefile, "앨리스_마법승수=%d\n", data.앨리스_마법승수);
		fprintf(savefile, "앨리스_하이브리드승수=%d\n", data.앨리스_하이브리드승수);
		fprintf(savefile, "에이린승수=%d\n", data.에이린승수);
		fprintf(savefile, "사토리승수=%d\n", data.사토리승수);
		fprintf(savefile, "바쿠렌승수=%d\n", data.바쿠렌승수);
		fprintf(savefile, "카구야승수=%d\n", data.카구야승수);
		fprintf(savefile, "미코승수=%d\n", data.미코승수);
		fprintf(savefile, "누에승수=%d\n", data.누에승수);
		fprintf(savefile, "스이카승수=%d\n", data.스이카승수);
		fprintf(savefile, "시키_승수=%d\n", data.시키_승수);
		fprintf(savefile, "유카_승수=%d\n", data.유카_승수);
		fprintf(savefile, "흑화요우무_승수=%d\n", data.흑화요우무_승수);
		fprintf(savefile, "어드밴트플랑_승수=%d\n", data.어드밴트플랑_승수);
		fprintf(savefile, "헤이메이린_승수=%d\n", data.헤이메이린_승수);
		fprintf(savefile, "홍메이린_승수=%d\n", data.홍메이린_승수);
		fprintf(savefile, "흑화카구야_승수=%d\n", data.흑화카구야_승수);
		fprintf(savefile, "모미지_승수=%d\n", data.모미지_승수);
		fprintf(savefile, "흑화무라사_승수=%d\n", data.흑화무라사_승수);
		fprintf(savefile, "조온_승수=%d\n", data.조온_승수);
		fprintf(savefile, "악마레이무_승수=%d\n", data.악마레이무_승수);
		fprintf(savefile, "흑화텐시_승수=%d\n", data.흑화텐시_승수);
		//--------
		fprintf(savefile, "요우무_r1패수=%d\n", data.요우무_r1패수);
		fprintf(savefile, "요우무_r2패수=%d\n", data.요우무_r2패수);
		fprintf(savefile, "요우무_하이브리드패수=%d\n", data.요우무_하이브리드패수);
		fprintf(savefile, "레이무패수=%d\n", data.레이무패수);
		fprintf(savefile, "치르노패수=%d\n", data.치르노패수);
		fprintf(savefile, "사쿠야_딜러패수=%d\n", data.사쿠야_딜러패수);
		fprintf(savefile, "사쿠야_탱커패수=%d\n", data.사쿠야_탱커패수);
		fprintf(savefile, "이쿠패수=%d\n", data.이쿠패수);
		fprintf(savefile, "무라사_물리패수=%d\n", data.무라사_물리패수);
		fprintf(savefile, "무라사_마법패수=%d\n", data.무라사_마법패수);
		fprintf(savefile, "무라사_하이브리드패수=%d\n", data.무라사_하이브리드패수);
		fprintf(savefile, "레이센_딜러패수=%d\n", data.레이센_딜러패수);
		fprintf(savefile, "레이센_탱커패수=%d\n", data.레이센_탱커패수);
		fprintf(savefile, "레이센_하이브리드패수=%d\n", data.레이센_하이브리드패수);
		fprintf(savefile, "레밀리아패수=%d\n", data.레밀리아패수);
		fprintf(savefile, "플랑도르패수=%d\n", data.플랑도르패수);
		fprintf(savefile, "흑화치르노패수=%d\n", data.흑화치르노패수);
		fprintf(savefile, "어드밴스드요우무_r1패수=%d\n", data.어드밴스드요우무_r1패수);
		fprintf(savefile, "어드밴스드요우무-r2패수=%d\n", data.어드밴스드요우무_r2패수);
		fprintf(savefile, "어드밴스드요우무_r3패수=%d\n", data.어드밴스드요우무_r3패수);
		fprintf(savefile, "마리사_딜러패수=%d\n", data.마리사_딜러패수);
		fprintf(savefile, "마리사_힐러패수=%d\n", data.마리사_힐러패수);
		fprintf(savefile, "마리사_하이브리드패수=%d\n", data.마리사_하이브리드패수);
		fprintf(savefile, "유카리패수=%d\n", data.유카리패수);
		fprintf(savefile, "어드밴트모미지패수=%d\n", data.어드밴트모미지패수);
		fprintf(savefile, "파츄리패수=%d\n", data.파츄리패수);
		fprintf(savefile, "우츠호패수=%d\n", data.우츠호패수);
		fprintf(savefile, "스와코패수=%d\n", data.스와코패수);
		fprintf(savefile, "텐시_딜러패수=%d\n", data.텐시_딜러패수);
		fprintf(savefile, "텐시_탱커패수=%d\n", data.텐시_탱커패수);
		fprintf(savefile, "어드밴트치르노패수=%d\n", data.어드밴트치르노패수);
		fprintf(savefile, "코마치패수=%d\n", data.코마치패수);
		fprintf(savefile, "모코우패수=%d\n", data.모코우패수);
		fprintf(savefile, "어드밴스드메이린패수=%d\n", data.어드밴스드메이린패수);
		fprintf(savefile, "사나에패수=%d\n", data.사나에패수);
		fprintf(savefile, "레티패수=%d\n", data.레티패수);
		fprintf(savefile, "유유코패수=%d\n", data.유유코패수);
		fprintf(savefile, "앨리스_물리패수=%d\n", data.앨리스_물리패수);
		fprintf(savefile, "앨리스_마법패수=%d\n", data.앨리스_마법패수);
		fprintf(savefile, "앨리스_하이브리드패수=%d\n", data.앨리스_하이브리드패수);
		fprintf(savefile, "에이린패수=%d\n", data.에이린패수);
		fprintf(savefile, "사토리패수=%d\n", data.사토리패수);
		fprintf(savefile, "바쿠렌패수=%d\n", data.바쿠렌패수);
		fprintf(savefile, "카구야패수=%d\n", data.카구야패수);
		fprintf(savefile, "미코패수=%d\n", data.미코패수);
		fprintf(savefile, "누에패수=%d\n", data.누에패수);
		fprintf(savefile, "스이카패수=%d\n", data.스이카패수);
		fprintf(savefile, "시키_패수=%d\n", data.시키_패수);
		fprintf(savefile, "유카_패수=%d\n", data.유카_패수);
		fprintf(savefile, "흑화요우무_패수=%d\n", data.흑화요우무_패수);
		fprintf(savefile, "어드밴트플랑_패수=%d\n", data.어드밴트플랑_패수);
		fprintf(savefile, "헤이메이린_패수=%d\n", data.헤이메이린_패수);
		fprintf(savefile, "홍메이린_패수=%d\n", data.홍메이린_패수);
		fprintf(savefile, "흑화카구야_패수=%d\n", data.흑화카구야_패수);
		fprintf(savefile, "모미지_패수=%d\n", data.모미지_패수);
		fprintf(savefile, "흑화무라사_패수=%d\n", data.흑화무라사_패수);
		fprintf(savefile, "조온_패수=%d\n", data.조온_패수);
		fprintf(savefile, "악마레이무_패수=%d\n", data.악마레이무_패수);
		fprintf(savefile, "흑화텐시_패수=%d\n", data.흑화텐시_패수);
		//--------------------------------------------------------
		fprintf(savefile, "연승횟수=%d\n", data.연승횟수);
		fprintf(savefile, "연패횟수=%d\n", data.연패횟수);
	fclose(savefile);
}
static void read(char* name,dataSTR data)
{

	int FEEDDATA = 0;
	savefile = fopen(name, "r");
	if (savefile == NULL)
	{
		AfxMessageBox(_T("오류! 저장소 읽기에 실패했습니다."));
		return;
	}
	fseek(savefile, 0, SEEK_SET);
	finddata();
	//로딩중..\n");

	fscanf(savefile, "%lf", &data.vernum);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//버젼을 로딩하엿습니다\n");//
	if (data.vernum != 현재버젼)
	{
		readLegcy();
	}
	
	fscanf(savefile, "%d", &data.게임횟수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.mmr);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.킬);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.데스);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어시스트);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.주포지션);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.탱커);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.딜러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.힐러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.피해타입);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마법);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.물리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마법계수물리뎀);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.탱커점수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.딜러점수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.힐러점수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.요우무_r1);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.요우무_r2);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.요우무_하이브리드);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이무);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.치르노);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.사쿠야_딜러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.사쿠야_탱커);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.이쿠);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_물리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_마법);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_하이브리드);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_딜러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_탱커);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_하이브리드);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레밀리아);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.플랑도르);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.흑화치르노);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r1);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r2);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r3);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마리사_딜러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마리사_힐러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.마리사_하이브리드);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유카리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트모미지);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.파츄리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.우츠호);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.스와코);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.텐시_딜러);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.텐시_탱커);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트치르노);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.코마치);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.모코우);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴스드메이린);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사나에);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레티);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유유코);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_물리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_마법);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_하이브리드);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.에이린);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사토리);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.바쿠렌);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.카구야);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.미코);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.누에);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.스이카);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	

	fscanf(savefile, "%d", &data.시키);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유카);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화요우무);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트플랑);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.헤이메이린);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.홍메이린);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화카구야);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.모미지);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화무라사);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.조온);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.악마레이무);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화텐시);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	

	//-----------
	fscanf(savefile, "%lf", &data.요우무_r1승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.요우무_r2승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.요우무_하이브리드승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.레이무승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.치르노승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.사쿠야_딜러승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.사쿠야_탱커승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.이쿠승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.무라사_물리승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.무라사_마법승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.무라사_하이브리드승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.레이센_딜러승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.레이센_탱커승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.레이센_하이브리드승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.레밀리아승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.플랑도르승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.흑화치르노승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴스드요우무_r1승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴스드요우무_r2승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴스드요우무_r3승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.마리사_딜러승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.마리사_힐러승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.마리사_하이브리드승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.유카리승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴트모미지승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.파츄리승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.우츠호승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.스와코승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.텐시_딜러승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.텐시_탱커승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴트치르노승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.코마치승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.모코우승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.어드밴스드메이린승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.사나에승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.레티승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.유유코승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.앨리스_물리승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.앨리스_마법승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.앨리스_하이브리드승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.에이린승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.사토리승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.바쿠렌승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.카구야승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.미코승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.누에승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.스이카승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.시키_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.유카_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.흑화요우무_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.어드밴트플랑_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.헤이메이린_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.홍메이린_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.흑화카구야_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.모미지_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//모미지승률을 로딩하엿습니다\n");//

	fscanf(savefile, "%lf", &data.흑화무라사_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//흑화무라사승률을 로딩하엿습니다\n");//

	fscanf(savefile, "%lf", &data.조온_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//조온승률을 로딩하엿습니다\n");//

	fscanf(savefile, "%lf", &data.악마레이무_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//악마레이무승률을 로딩하엿습니다\n");//

	fscanf(savefile, "%lf", &data.흑화텐시_승률);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//흑화텐시승률을 로딩하엿습니다\n");//

	//-----------
	fscanf(savefile, "%d", &data.요우무_r1승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//요우무_r1승수를 로딩하엿습니다\n");//

	fscanf(savefile, "%d", &data.요우무_r2승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.요우무_하이브리드승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이무승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.치르노승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.사쿠야_딜러승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.사쿠야_탱커승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.이쿠승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_물리승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_마법승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_하이브리드승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_딜러승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_탱커승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레이센_하이브리드승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.레밀리아승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.플랑도르승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.흑화치르노승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r1승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r2승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드요우무_r3승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마리사_딜러승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마리사_힐러승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.마리사_하이브리드승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.유카리승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴트모미지승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.파츄리승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.우츠호승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.스와코승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.텐시_딜러승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.텐시_탱커승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴트치르노승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.코마치승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.모코우승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.어드밴스드메이린승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사나에승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레티승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유유코승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_물리승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_마법승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_하이브리드승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.에이린승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사토리승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.바쿠렌승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.카구야승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.미코승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.누에승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.스이카승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.시키_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유카_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화요우무_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트플랑_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.헤이메이린_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.홍메이린_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화카구야_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.모미지_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화무라사_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.조온_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.악마레이무_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화텐시_승수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	//----------------
	fscanf(savefile, "%d", &data.요우무_r1패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.요우무_r2패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	
	fscanf(savefile, "%d", &data.요우무_하이브리드패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레이무패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.치르노패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사쿠야_딜러패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.사쿠야_탱커패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.이쿠패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_물리패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_마법패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.무라사_하이브리드패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레이센_딜러패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레이센_탱커패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레이센_하이브리드패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레밀리아패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.플랑도르패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화치르노패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴스드요우무_r1패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴스드요우무_r2패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴스드요우무_r3패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.마리사_딜러패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.마리사_힐러패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.마리사_하이브리드패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유카리패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트모미지패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.파츄리패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.우츠호패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.스와코패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.텐시_딜러패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.텐시_탱커패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트치르노패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.코마치패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.모코우패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴스드메이린패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사나에패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.레티패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유유코패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_물리패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_마법패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.앨리스_하이브리드패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.에이린패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.사토리패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.바쿠렌패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.카구야패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.미코패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.누에패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.스이카패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.시키_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.유카_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화요우무_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.어드밴트플랑_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.헤이메이린_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.홍메이린_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.흑화카구야_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.모미지_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.흑화무라사_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.조온_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.악마레이무_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.흑화텐시_패수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//------------------------
	fscanf(savefile, "%d", &data.연승횟수);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.연패횟수);
	//FEEDDATA++;
	//LINEFEED(FEEDDATA);
	//finddata();
	
}
