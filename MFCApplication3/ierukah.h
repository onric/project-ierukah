
#pragma once
#define 정수형 unsigned int
#define 음_정수형 int
#define 문자형 char 
#define 실수형 double
#define 현재버젼 1.0
#define 캐릭개수 60
//dmdrldlt

static FILE *savefile;
//
class chara
{
	public:
		//변수를 선언합니다.
		//레이팅정보를 수집합니다.
		정수형 연승 = 0;
		정수형 연패 = 0;
		음_정수형 레이팅 = 0;
		//kda및 승률을 선언합니다
		정수형 킬 = 0;
		정수형 데스 = 0;
		정수형 어시스트 = 0;
		정수형 게임횟수 = 0;
		정수형 승수 = 0;
		정수형 패수 = 0;
		실수형 승률 = 0;
		//특성정보를 선언합니다.
		정수형 백조의부름 = 0;
		정수형 회복의삼지창 = 0;
		정수형 밤의사냥꾼 = 0;
		정수형 비겁한고블린 = 0;
		정수형 깨달음 = 0;
		정수형 흑마법 = 0;
		정수형 음과양의조화 = 0;
		정수형 아레스의투구 = 0;
		정수형 라식 = 0;
		정수형 축복의장화 = 0;
		정수형 신비로운반지 = 0;
		정수형 치명적인탄환 = 0;
		정수형 깨물기 = 0;
		정수형 이동의즐거움 = 0;
		정수형 판다렌의화염작렬 = 0;
		정수형 마법부스터 = 0;
		정수형 단단한벽 = 0;
		정수형 마법의망토 = 0;
		정수형 고대신비의마법서 = 0;
		정수형 산뜻한기분 = 0;
		정수형 갈망의검 = 0;
		정수형 지배전투의기본 = 0;
		정수형 지배푸른영기 = 0;
		정수형 마법전투의기본 = 0;
		정수형 마법푸른영기 = 0;
		정수형 강인한체력 = 0;
		정수형 활력증진 = 0;
		정수형 저돌적인공격방식 = 0;
		정수형 신비한공격방식 = 0;
		정수형 투쟁갑옷무력화 = 0;
		정수형 투쟁저항무력화 = 0;
		정수형 지배갑옷무력화 = 0;
		정수형 지배저항무력화 = 0;
		정수형 마법갑옷무력화 = 0;
		정수형 마법저항무력화 = 0;
		정수형 신비의방패 = 0;
		정수형 저항의방패 = 0;
		정수형 경험치사기꾼 = 0;
		정수형 골드도둑 = 0;
		정수형 투쟁타격용분 = 0;
		정수형 투쟁마법용분 = 0;
		정수형 지배물리용분 = 0;
		정수형 지배마법용분 = 0;
		정수형 마법물리용분 = 0;
		정수형 마법마법용분 = 0;
		정수형 긍지최후의방어 = 0;
		정수형 축복최후의방어 = 0;
		정수형 집중사격 = 0;
		정수형 무자비한연사 = 0;
		정수형 환상적인공격 = 0;
		정수형 제우스의분노 = 0;
		정수형 오디세우스의성검 = 0;
		정수형 대마법신비로운메테오 = 0;
		정수형 마법펀치 = 0;
		정수형 곰발바닥 = 0;
		정수형 토르의분노 = 0;
		정수형 마법의점멸 = 0;
		정수형 신의가호 = 0;
		//함수를 선언합니다.
		void input(int kill, int death, int assist)//kda를 입력받습니다.
		{
			킬 = 킬 + kill;
			데스 = 데스 + death;
			어시스트 = 어시스트 + assist;
		}
		void WOL(BOOL wolcheck)//TRUE = WIN, FALSE = LOSE
		{
			게임횟수++;
			if (wolcheck == TRUE)
			{
				승수++;
				연승++;
				연패 = 0;
				//레이팅을 변경합니다
				int 레이팅상승임시변수 = 연승 * 10;
				if (레이팅상승임시변수 > 50)
				{
					레이팅상승임시변수 = 50;
				}
				레이팅 += 레이팅상승임시변수;
			}
			else if (wolcheck == FALSE)
			{
				패수++;
				연패++;
				연승 = 0;
				//레이팅을 변경합니다
				int 레이팅상승임시변수 = 연패 * 10;
				if (레이팅상승임시변수 > 50)
				{
					레이팅상승임시변수 = 50;
				}
				레이팅 -= 레이팅상승임시변수;
			}
			if (게임횟수 != 0)
			{
				승률 = 승수 / 게임횟수;
			}
		}
		void init()
		{
			 연승 = 0;
			 연패 = 0;
			 레이팅 = 0;
			 킬 = 0;
			 데스 = 0;
			 어시스트 = 0;
			 게임횟수 = 0;
			 승수 = 0;
			 패수 = 0;
			 승률 = 0;
			 백조의부름 = 0;
			 회복의삼지창 = 0;
			 밤의사냥꾼 = 0;
			 비겁한고블린 = 0;
			 깨달음 = 0;
			 흑마법 = 0;
			 음과양의조화 = 0;
			 아레스의투구 = 0;
			 라식 = 0;
			 축복의장화 = 0;
			 신비로운반지 = 0;
			 치명적인탄환 = 0;
			 깨물기 = 0;
			 이동의즐거움 = 0;
			 판다렌의화염작렬 = 0;
			 마법부스터 = 0;
			 단단한벽 = 0;
			 마법의망토 = 0;
			 고대신비의마법서 = 0;
			 산뜻한기분 = 0;
			 갈망의검 = 0;
			 지배전투의기본 = 0;
			 지배푸른영기 = 0;
			 마법전투의기본 = 0;
			 마법푸른영기 = 0;
			 강인한체력 = 0;
			 활력증진 = 0;
			 저돌적인공격방식 = 0;
			 신비한공격방식 = 0;
			 투쟁갑옷무력화 = 0;
			 투쟁저항무력화 = 0;
			 지배갑옷무력화 = 0;
			 지배저항무력화 = 0;
			 마법갑옷무력화 = 0;
			 마법저항무력화 = 0;
			 신비의방패 = 0;
			 저항의방패 = 0;
			 경험치사기꾼 = 0;
			 골드도둑 = 0;
			 투쟁타격용분 = 0;
			 투쟁마법용분 = 0;
			 지배물리용분 = 0;
			 지배마법용분 = 0;
			 마법물리용분 = 0;
			 마법마법용분 = 0;
			 긍지최후의방어 = 0;
			 축복최후의방어 = 0;
			 집중사격 = 0;
			 무자비한연사 = 0;
			 환상적인공격 = 0;
			 제우스의분노 = 0;
			 오디세우스의성검 = 0;
			 대마법신비로운메테오 = 0;
			 마법펀치 = 0;
			 곰발바닥 = 0;
			 토르의분노 = 0;
			 마법의점멸 = 0;
			 신의가호 = 0;
		}
};
struct newdata//일단 총합데이터에 필요한 데이터가 모자라니깐... chara에 넣긴 뭐하고
{
	int 주포지션 = 0;//0=미정,1=딜,2=탱,3=힐
	int 탱커 = 0;//
	int 딜러 = 0;//
	int 힐러 = 0;//
	void init()
	{
			 주포지션 = 0;//0=미정,1=딜,2=탱,3=힐
			 탱커 = 0;//
			 딜러 = 0;//
			 힐러 = 0;//
	}
};
static newdata N_dataSTR;
static chara 총합;//1
static chara 요우무_r1;//2
static chara 요우무_r2;//3
static chara 요우무_하이브리드;//4
static chara 레이무;//5
static chara 치르노;//6
static chara 사쿠야_딜러;//7
static chara 사쿠야_탱커;//8
static chara 이쿠;//9
static chara 무라사_물리;//10
static chara 무라사_마법;//11
static chara 무라사_하이브리드;//12
static chara 레이센_탱커;//13
static chara 레이센_딜러;//14
static chara 레이센_하이브리드;//15
static chara 앨리스_물리;//16
static chara 앨리스_마법;//17
static chara 앨리스_하이브리드;//18
static chara 레밀리아;//19
static chara 플랑도르;//20
static chara 흑화치르노;//21
static chara 어드밴스드요우무_r1;//22
static chara 어드밴스드요우무_r2;//23
static chara 어드밴스드요우무_r3;//24
static chara 마리사_딜러;//25
static chara 마리사_힐러;//26
static chara 마리사_하이브리드;//27
static chara 유카리;//28
static chara 모코우;//29
static chara 어드밴트모미지;//30
static chara 파츄리;//31
static chara 우츠호;//32
static chara 스와코;//33
static chara 텐시_딜러;//34
static chara 텐시_탱커;//35
static chara 어드밴트치르노;//36
static chara 코마치;//37
static chara 아야;//38
static chara 어드밴스드메이린;//39
static chara 사나에;//40
static chara 레티;//41
static chara 유유코;//42
static chara 에이린;//43
static chara 사토리;//44
static chara 바쿠렌;//45
static chara 카구야;//46
static chara 미코;//47
static chara 누에;//48
static chara 스이카;//49
static chara 시키;//50
static chara 유카;//51
static chara 흑화요우무;//52
static chara 어드밴트플랑;//53
static chara 헤이메이린;//54
static chara 홍메이린;//55
static chara 흑화카구야;//56
static chara 모미지;//57
static chara 흑화무라사;//58
static chara 조온;//59
static chara 악마레이무;//60
static chara 흑화텐시;//61
//구조체를 버릴거야 버릴거라구! 이히히히!
//이제 구조체는 통합정보를 볼때만 씁니다. 그렇게 만들거야
struct dataSTR
{
	int test = 3;
	실수형 버젼정보=0;
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

//뉴우 영역

static void REF_chara()//chara를 일괄 초기화합니다
{
	총합.init();
	요우무_r1.init();
	요우무_r2.init();
	요우무_하이브리드.init();
	레이무.init();//
	치르노.init();//
	사쿠야_딜러.init();
	사쿠야_탱커.init();
	이쿠.init();//
	무라사_물리.init();//
	무라사_마법.init();//
	무라사_하이브리드.init();//
	레이센_탱커.init();//
	레이센_딜러.init();//
	레이센_하이브리드.init();//
	앨리스_물리.init();//
	앨리스_마법.init();//
	앨리스_하이브리드.init();//
	레밀리아.init();//
	플랑도르.init();//
	흑화치르노.init();//
	어드밴스드요우무_r1.init();//
	어드밴스드요우무_r2.init();//
	어드밴스드요우무_r3.init();//
	마리사_딜러.init();//
	마리사_힐러.init();//
	마리사_하이브리드.init();//
	유카리.init();//
	모코우.init();//
	어드밴트모미지.init();//
	파츄리.init();//
	우츠호.init();//
	스와코.init();//
	텐시_딜러.init();
	텐시_탱커.init();
	어드밴트치르노.init();//
	코마치.init();//
	아야.init();//
	어드밴스드메이린.init();//
	사나에.init();//
	레티.init();//
	유유코.init();//
	에이린.init();
	사토리.init();
	바쿠렌.init();
	카구야.init();
	미코.init();
	누에.init();
	스이카.init();
	시키.init();
	유카.init();
	흑화요우무.init();
	어드밴트플랑.init();
	헤이메이린.init();
	홍메이린.init();
	흑화카구야.init();
	모미지.init();
	흑화무라사.init();
	조온.init();
	악마레이무.init();
	흑화텐시.init();
}
static void putdata(char* name)
{
	TRACE("신식 입력함수에 진입\n");
	savefile = fopen(name, "w");
	//
	if (savefile == NULL)
	{
		TRACE("name=%s", name);
		AfxMessageBox(_T("오류! 저장소 작성에 실패했습니다."));
	}
	fflush(savefile);
	//시스템정보
	fprintf(savefile, "버젼=%2lf\n", 현재버젼);
	fprintf(savefile, "게임횟수=%d\n", 총합.게임횟수);
	fprintf(savefile, "승리=%d\n", 총합.승수);
	fprintf(savefile, "패배=%d\n", 총합.패수);
	fprintf(savefile, "승률=%2lf\n", 총합.승률);
	fprintf(savefile, "레이팅=%d\n", 총합.레이팅);
	fprintf(savefile, "연승=%d\n", 총합.연승);
	fprintf(savefile, "연패=%d\n", 총합.연패);
	fprintf(savefile, "킬=%d\n", 총합.킬);
	fprintf(savefile, "데스=%d\n", 총합.데스);
	fprintf(savefile, "어시스트=%d\n", 총합.어시스트);
	fprintf(savefile, "주포지션=%d\n",N_dataSTR.주포지션 );
	fprintf(savefile, "탱커=%d\n", N_dataSTR.탱커);
	fprintf(savefile, "딜러=%d\n", N_dataSTR.딜러);
	fprintf(savefile, "힐러=%d\n", N_dataSTR.힐러);
	fprintf(savefile, "총합백조의부름=%d\n", 총합.백조의부름);
	fprintf(savefile, "총합회복의삼지창=%d\n", 총합.회복의삼지창);
	fprintf(savefile, "총합밤의사냥꾼=%d\n", 총합.밤의사냥꾼);
	fprintf(savefile, "총합비겁한고블린=%d\n", 총합.비겁한고블린);
	fprintf(savefile, "총합깨달음=%d\n", 총합.깨달음);
	fprintf(savefile, "총합흑마법=%d\n", 총합.흑마법);
	fprintf(savefile, "총합음과양=%d\n", 총합.음과양의조화);
	fprintf(savefile, "총합아레스=%d\n", 총합.아레스의투구);
	fprintf(savefile, "총합라식=%d\n", 총합.라식);
	fprintf(savefile, "총합장화=%d\n", 총합.축복의장화);
	fprintf(savefile, "총합반지=%d\n", 총합.신비로운반지);
	fprintf(savefile, "총합치명적인탄환=%d\n", 총합.치명적인탄환);
	fprintf(savefile, "총합깨물기=%d\n", 총합.깨물기);
	fprintf(savefile, "총합이동의즐거움=%d\n", 총합.이동의즐거움);
	fprintf(savefile, "총합판다렌=%d\n", 총합.판다렌의화염작렬);
	fprintf(savefile, "총합마법부스터=%d\n", 총합.마법부스터);
	fprintf(savefile, "총합단단한벽=%d\n", 총합.단단한벽);
	fprintf(savefile, "총합마법의망토=%d\n", 총합.마법의망토);
	fprintf(savefile, "총합고대신비마법서=%d\n", 총합.고대신비의마법서);
	fprintf(savefile, "총합산뜻한기분=%d\n", 총합.산뜻한기분);
	fprintf(savefile, "총합갈망의검=%d\n", 총합.갈망의검);
	fprintf(savefile, "총합지배전투의기본=%d\n", 총합.지배전투의기본);
	fprintf(savefile, "총합지배푸른영기=%d\n", 총합.지배푸른영기);
	fprintf(savefile, "총합마법전투의기본=%d\n", 총합.마법전투의기본);
	fprintf(savefile, "총합마법푸른영기=%d\n", 총합.마법푸른영기);
	fprintf(savefile, "총합강인한체력=%d\n", 총합.강인한체력);
	fprintf(savefile, "총합활력증진=%d\n", 총합.활력증진);
	fprintf(savefile, "총합저돌적인공격방식=%d\n", 총합.저돌적인공격방식);
	fprintf(savefile, "총합신비한공격방식=%d\n", 총합.신비한공격방식);
	fprintf(savefile, "총합투쟁갑옷무력화=%d\n", 총합.투쟁갑옷무력화);
	fprintf(savefile, "총합투쟁저항무력화=%d\n", 총합.투쟁저항무력화);
	fprintf(savefile, "총합지배갑옷무력화=%d\n", 총합.지배갑옷무력화);
	fprintf(savefile, "총합지배저항무력화=%d\n", 총합.지배저항무력화);
	fprintf(savefile, "총합마법갑옷무력화=%d\n", 총합.마법갑옷무력화);
	fprintf(savefile, "총합마법저항무력화=%d\n", 총합.마법저항무력화);
	fprintf(savefile, "총합신비의방패=%d\n", 총합.신비의방패);
	fprintf(savefile, "총합저항의방패=%d\n", 총합.저항의방패);
	fprintf(savefile, "총합경험치사기꾼=%d\n", 총합.경험치사기꾼);
	fprintf(savefile, "총합골드도둑=%d\n", 총합.골드도둑);
	fprintf(savefile, "총합투쟁타격용분=%d\n", 총합.투쟁타격용분);
	fprintf(savefile, "총합투쟁마법용분=%d\n", 총합.투쟁마법용분);
	fprintf(savefile, "총합지배물리용분=%d\n", 총합.지배물리용분);
	fprintf(savefile, "총합지배마법용분=%d\n", 총합.지배마법용분);
	fprintf(savefile, "총합마법물리용분=%d\n", 총합.마법물리용분);
	fprintf(savefile, "총합마법마법용분=%d\n", 총합.마법마법용분);
	fprintf(savefile, "총합긍지최후의방어=%d\n", 총합.긍지최후의방어);
	fprintf(savefile, "총합축복최후의방어=%d\n", 총합.축복최후의방어);
	fprintf(savefile, "총합집중사격=%d\n", 총합.집중사격);
	fprintf(savefile, "총합무자비한연사=%d\n", 총합.무자비한연사);
	fprintf(savefile, "총합환상적인공격=%d\n", 총합.환상적인공격);
	fprintf(savefile, "총합제우스의분노=%d\n", 총합.제우스의분노);
	fprintf(savefile, "총합오디세우스의성검=%d\n", 총합.오디세우스의성검);
	fprintf(savefile, "총합대마법신비로운메테오=%d\n", 총합.대마법신비로운메테오);
	fprintf(savefile, "총합마법펀치=%d\n", 총합.마법펀치);
	fprintf(savefile, "총합곰발바닥=%d\n", 총합.곰발바닥);
	fprintf(savefile, "총합토르의분노=%d\n", 총합.토르의분노);
	fprintf(savefile, "총합마법의점멸=%d\n", 총합.마법의점멸);
	fprintf(savefile, "총합신의가호=%d\n", 총합.신의가호);

	//요우무r1
	fprintf(savefile, "요우무_r1플레이횟수=%d\n", 요우무_r1.게임횟수);
	fprintf(savefile, "요우무_r1승리=%d\n", 요우무_r1.승수);
	fprintf(savefile, "요우무_r1패배=%d\n", 요우무_r1.패수);
	fprintf(savefile, "요우무_r1승률=%2lf\n", 요우무_r1.승률);
	fprintf(savefile, "요우무_r1레이팅=%d\n", 요우무_r1.레이팅);
	fprintf(savefile, "요우무_r1연승=%d\n", 요우무_r1.연승);
	fprintf(savefile, "요우무_r1연패=%d\n", 요우무_r1.연패);
	fprintf(savefile, "요우무_r1킬=%d\n", 요우무_r1.킬);
	fprintf(savefile, "요우무_r1데스=%d\n", 요우무_r1.데스);
	fprintf(savefile, "요우무_r1어시스트=%d\n", 요우무_r1.어시스트);
	fprintf(savefile, "요우무_r1백조의부름=%d\n", 요우무_r1.백조의부름);
	fprintf(savefile, "요우무_r1회복의삼지창=%d\n", 요우무_r1.회복의삼지창);
	fprintf(savefile, "요우무_r1밤의사냥꾼=%d\n", 요우무_r1.밤의사냥꾼);
	fprintf(savefile, "요우무_r1비겁한고블린=%d\n", 요우무_r1.비겁한고블린);
	fprintf(savefile, "요우무_r1깨달음=%d\n", 요우무_r1.깨달음);
	fprintf(savefile, "요우무_r1흑마법=%d\n", 요우무_r1.흑마법);
	fprintf(savefile, "요우무_r1음과양=%d\n", 요우무_r1.음과양의조화);
	fprintf(savefile, "요우무_r1아레스=%d\n", 요우무_r1.아레스의투구);
	fprintf(savefile, "요우무_r1라식=%d\n", 요우무_r1.라식);
	fprintf(savefile, "요우무_r1장화=%d\n", 요우무_r1.축복의장화);
	fprintf(savefile, "요우무_r1반지=%d\n", 요우무_r1.신비로운반지);
	fprintf(savefile, "요우무_r1치명적인탄환=%d\n", 요우무_r1.치명적인탄환);
	fprintf(savefile, "요우무_r1깨물기=%d\n", 요우무_r1.깨물기);
	fprintf(savefile, "요우무_r1이동의즐거움=%d\n", 요우무_r1.이동의즐거움);
	fprintf(savefile, "요우무_r1판다렌=%d\n", 요우무_r1.판다렌의화염작렬);
	fprintf(savefile, "요우무_r1마법부스터=%d\n", 요우무_r1.마법부스터);
	fprintf(savefile, "요우무_r1단단한벽=%d\n", 요우무_r1.단단한벽);
	fprintf(savefile, "요우무_r1마법의망토=%d\n", 요우무_r1.마법의망토);
	fprintf(savefile, "요우무_r1고대신비마법서=%d\n", 요우무_r1.고대신비의마법서);
	fprintf(savefile, "요우무_r1산뜻한기분=%d\n", 요우무_r1.산뜻한기분);
	fprintf(savefile, "요우무_r1갈망의검=%d\n", 요우무_r1.갈망의검);
	fprintf(savefile, "요우무_r1지배전투의기본=%d\n", 요우무_r1.지배전투의기본);
	fprintf(savefile, "요우무_r1지배푸른영기=%d\n", 요우무_r1.지배푸른영기);
	fprintf(savefile, "요우무_r1마법전투의기본=%d\n", 요우무_r1.마법전투의기본);
	fprintf(savefile, "요우무_r1마법푸른영기=%d\n", 요우무_r1.마법푸른영기);
	fprintf(savefile, "요우무_r1강인한체력=%d\n", 요우무_r1.강인한체력);
	fprintf(savefile, "요우무_r1활력증진=%d\n", 요우무_r1.활력증진);
	fprintf(savefile, "요우무_r1저돌적인공격방식=%d\n", 요우무_r1.저돌적인공격방식);
	fprintf(savefile, "요우무_r1신비한공격방식=%d\n", 요우무_r1.신비한공격방식);
	fprintf(savefile, "요우무_r1투쟁갑옷무력화=%d\n", 요우무_r1.투쟁갑옷무력화);
	fprintf(savefile, "요우무_r1투쟁저항무력화=%d\n", 요우무_r1.투쟁저항무력화);
	fprintf(savefile, "요우무_r1지배갑옷무력화=%d\n", 요우무_r1.지배갑옷무력화);
	fprintf(savefile, "요우무_r1지배저항무력화=%d\n", 요우무_r1.지배저항무력화);
	fprintf(savefile, "요우무_r1마법갑옷무력화=%d\n", 요우무_r1.마법갑옷무력화);
	fprintf(savefile, "요우무_r1마법저항무력화=%d\n", 요우무_r1.마법저항무력화);
	fprintf(savefile, "요우무_r1신비의방패=%d\n", 요우무_r1.신비의방패);
	fprintf(savefile, "요우무_r1저항의방패=%d\n", 요우무_r1.저항의방패);
	fprintf(savefile, "요우무_r1경험치사기꾼=%d\n", 요우무_r1.경험치사기꾼);
	fprintf(savefile, "요우무_r1골드도둑=%d\n", 요우무_r1.골드도둑);
	fprintf(savefile, "요우무_r1투쟁타격용분=%d\n", 요우무_r1.투쟁타격용분);
	fprintf(savefile, "요우무_r1투쟁마법용분=%d\n", 요우무_r1.투쟁마법용분);
	fprintf(savefile, "요우무_r1지배물리용분=%d\n", 요우무_r1.지배물리용분);
	fprintf(savefile, "요우무_r1지배마법용분=%d\n", 요우무_r1.지배마법용분);
	fprintf(savefile, "요우무_r1마법물리용분=%d\n", 요우무_r1.마법물리용분);
	fprintf(savefile, "요우무_r1마법마법용분=%d\n", 요우무_r1.마법마법용분);
	fprintf(savefile, "요우무_r1긍지최후의방어=%d\n", 요우무_r1.긍지최후의방어);
	fprintf(savefile, "요우무_r1축복최후의방어=%d\n", 요우무_r1.축복최후의방어);
	fprintf(savefile, "요우무_r1집중사격=%d\n", 요우무_r1.집중사격);
	fprintf(savefile, "요우무_r1무자비한연사=%d\n", 요우무_r1.무자비한연사);
	fprintf(savefile, "요우무_r1환상적인공격=%d\n", 요우무_r1.환상적인공격);
	fprintf(savefile, "요우무_r1제우스의분노=%d\n", 요우무_r1.제우스의분노);
	fprintf(savefile, "요우무_r1오디세우스의성검=%d\n", 요우무_r1.오디세우스의성검);
	fprintf(savefile, "요우무_r1대마법신비로운메테오=%d\n", 요우무_r1.대마법신비로운메테오);
	fprintf(savefile, "요우무_r1마법펀치=%d\n", 요우무_r1.마법펀치);
	fprintf(savefile, "요우무_r1곰발바닥=%d\n", 요우무_r1.곰발바닥);
	fprintf(savefile, "요우무_r1토르의분노=%d\n", 요우무_r1.토르의분노);
	fprintf(savefile, "요우무_r1마법의점멸=%d\n", 요우무_r1.마법의점멸);
	fprintf(savefile, "요우무_r1신의가호=%d\n", 요우무_r1.신의가호);
	//요우무r2
	fprintf(savefile, "요우무_r2플레이횟수=%d\n", 요우무_r2.게임횟수);
	fprintf(savefile, "요우무_r2승리=%d\n", 요우무_r2.승수);
	fprintf(savefile, "요우무_r2패배=%d\n", 요우무_r2.패수);
	fprintf(savefile, "요우무_r2승률=%2lf\n", 요우무_r2.승률);
	fprintf(savefile, "요우무_r2레이팅=%d\n", 요우무_r2.레이팅);
	fprintf(savefile, "요우무_r2연승=%d\n", 요우무_r2.연승);
	fprintf(savefile, "요우무_r2연패=%d\n", 요우무_r2.연패);
	fprintf(savefile, "요우무_r2킬=%d\n", 요우무_r2.킬);
	fprintf(savefile, "요우무_r2데스=%d\n", 요우무_r2.데스);
	fprintf(savefile, "요우무_r2어시스트=%d\n", 요우무_r2.어시스트);
	fprintf(savefile, "요우무_r2백조의부름=%d\n", 요우무_r2.백조의부름);
	fprintf(savefile, "요우무_r2회복의삼지창=%d\n", 요우무_r2.회복의삼지창);
	fprintf(savefile, "요우무_r2밤의사냥꾼=%d\n", 요우무_r2.밤의사냥꾼);
	fprintf(savefile, "요우무_r2비겁한고블린=%d\n", 요우무_r2.비겁한고블린);
	fprintf(savefile, "요우무_r2깨달음=%d\n", 요우무_r2.깨달음);
	fprintf(savefile, "요우무_r2흑마법=%d\n", 요우무_r2.흑마법);
	fprintf(savefile, "요우무_r2음과양=%d\n", 요우무_r2.음과양의조화);
	fprintf(savefile, "요우무_r2아레스=%d\n", 요우무_r2.아레스의투구);
	fprintf(savefile, "요우무_r2라식=%d\n", 요우무_r2.라식);
	fprintf(savefile, "요우무_r2장화=%d\n", 요우무_r2.축복의장화);
	fprintf(savefile, "요우무_r2반지=%d\n", 요우무_r2.신비로운반지);
	fprintf(savefile, "요우무_r2치명적인탄환=%d\n", 요우무_r2.치명적인탄환);
	fprintf(savefile, "요우무_r2깨물기=%d\n", 요우무_r2.깨물기);
	fprintf(savefile, "요우무_r2이동의즐거움=%d\n", 요우무_r2.이동의즐거움);
	fprintf(savefile, "요우무_r2판다렌=%d\n", 요우무_r2.판다렌의화염작렬);
	fprintf(savefile, "요우무_r2마법부스터=%d\n", 요우무_r2.마법부스터);
	fprintf(savefile, "요우무_r2단단한벽=%d\n", 요우무_r2.단단한벽);
	fprintf(savefile, "요우무_r2마법의망토=%d\n", 요우무_r2.마법의망토);
	fprintf(savefile, "요우무_r2고대신비마법서=%d\n", 요우무_r2.고대신비의마법서);
	fprintf(savefile, "요우무_r2산뜻한기분=%d\n", 요우무_r2.산뜻한기분);
	fprintf(savefile, "요우무_r2갈망의검=%d\n", 요우무_r2.갈망의검);
	fprintf(savefile, "요우무_r2지배전투의기본=%d\n", 요우무_r2.지배전투의기본);
	fprintf(savefile, "요우무_r2지배푸른영기=%d\n", 요우무_r2.지배푸른영기);
	fprintf(savefile, "요우무_r2마법전투의기본=%d\n", 요우무_r2.마법전투의기본);
	fprintf(savefile, "요우무_r2마법푸른영기=%d\n", 요우무_r2.마법푸른영기);
	fprintf(savefile, "요우무_r2강인한체력=%d\n", 요우무_r2.강인한체력);
	fprintf(savefile, "요우무_r2활력증진=%d\n", 요우무_r2.활력증진);
	fprintf(savefile, "요우무_r2저돌적인공격방식=%d\n", 요우무_r2.저돌적인공격방식);
	fprintf(savefile, "요우무_r2신비한공격방식=%d\n", 요우무_r2.신비한공격방식);
	fprintf(savefile, "요우무_r2투쟁갑옷무력화=%d\n", 요우무_r2.투쟁갑옷무력화);
	fprintf(savefile, "요우무_r2투쟁저항무력화=%d\n", 요우무_r2.투쟁저항무력화);
	fprintf(savefile, "요우무_r2지배갑옷무력화=%d\n", 요우무_r2.지배갑옷무력화);
	fprintf(savefile, "요우무_r2지배저항무력화=%d\n", 요우무_r2.지배저항무력화);
	fprintf(savefile, "요우무_r2마법갑옷무력화=%d\n", 요우무_r2.마법갑옷무력화);
	fprintf(savefile, "요우무_r2마법저항무력화=%d\n", 요우무_r2.마법저항무력화);
	fprintf(savefile, "요우무_r2신비의방패=%d\n", 요우무_r2.신비의방패);
	fprintf(savefile, "요우무_r2저항의방패=%d\n", 요우무_r2.저항의방패);
	fprintf(savefile, "요우무_r2경험치사기꾼=%d\n", 요우무_r2.경험치사기꾼);
	fprintf(savefile, "요우무_r2골드도둑=%d\n", 요우무_r2.골드도둑);
	fprintf(savefile, "요우무_r2투쟁타격용분=%d\n", 요우무_r2.투쟁타격용분);
	fprintf(savefile, "요우무_r2투쟁마법용분=%d\n", 요우무_r2.투쟁마법용분);
	fprintf(savefile, "요우무_r2지배물리용분=%d\n", 요우무_r2.지배물리용분);
	fprintf(savefile, "요우무_r2지배마법용분=%d\n", 요우무_r2.지배마법용분);
	fprintf(savefile, "요우무_r2마법물리용분=%d\n", 요우무_r2.마법물리용분);
	fprintf(savefile, "요우무_r2마법마법용분=%d\n", 요우무_r2.마법마법용분);
	fprintf(savefile, "요우무_r2긍지최후의방어=%d\n", 요우무_r2.긍지최후의방어);
	fprintf(savefile, "요우무_r2축복최후의방어=%d\n", 요우무_r2.축복최후의방어);
	fprintf(savefile, "요우무_r2집중사격=%d\n", 요우무_r2.집중사격);
	fprintf(savefile, "요우무_r2무자비한연사=%d\n", 요우무_r2.무자비한연사);
	fprintf(savefile, "요우무_r2환상적인공격=%d\n", 요우무_r2.환상적인공격);
	fprintf(savefile, "요우무_r2제우스의분노=%d\n", 요우무_r2.제우스의분노);
	fprintf(savefile, "요우무_r2오디세우스의성검=%d\n", 요우무_r2.오디세우스의성검);
	fprintf(savefile, "요우무_r2대마법신비로운메테오=%d\n", 요우무_r2.대마법신비로운메테오);
	fprintf(savefile, "요우무_r2마법펀치=%d\n", 요우무_r2.마법펀치);
	fprintf(savefile, "요우무_r2곰발바닥=%d\n", 요우무_r2.곰발바닥);
	fprintf(savefile, "요우무_r2토르의분노=%d\n", 요우무_r2.토르의분노);
	fprintf(savefile, "요우무_r2마법의점멸=%d\n", 요우무_r2.마법의점멸);
	fprintf(savefile, "요우무_r2신의가호=%d\n", 요우무_r2.신의가호);
	//요우무하이브리드
	fprintf(savefile, "요우무_하이브리드플레이횟수=%d\n", 요우무_하이브리드.게임횟수);
	fprintf(savefile, "요우무_하이브리드승리=%d\n", 요우무_하이브리드.승수);
	fprintf(savefile, "요우무_하이브리드패배=%d\n", 요우무_하이브리드.패수);
	fprintf(savefile, "요우무_하이브리드승률=%2lf\n", 요우무_하이브리드.승률);
	fprintf(savefile, "요우무_하이브리드레이팅=%d\n", 요우무_하이브리드.레이팅);
	fprintf(savefile, "요우무_하이브리드연승=%d\n", 요우무_하이브리드.연승);
	fprintf(savefile, "요우무_하이브리드연패=%d\n", 요우무_하이브리드.연패);
	fprintf(savefile, "요우무_하이브리드킬=%d\n", 요우무_하이브리드.킬);
	fprintf(savefile, "요우무_하이브리드데스=%d\n", 요우무_하이브리드.데스);
	fprintf(savefile, "요우무_하이브리드어시스트=%d\n", 요우무_하이브리드.어시스트);
	fprintf(savefile, "요우무_하이브리드백조의부름=%d\n", 요우무_하이브리드.백조의부름);
	fprintf(savefile, "요우무_하이브리드회복의삼지창=%d\n", 요우무_하이브리드.회복의삼지창);
	fprintf(savefile, "요우무_하이브리드밤의사냥꾼=%d\n", 요우무_하이브리드.밤의사냥꾼);
	fprintf(savefile, "요우무_하이브리드비겁한고블린=%d\n", 요우무_하이브리드.비겁한고블린);
	fprintf(savefile, "요우무_하이브리드깨달음=%d\n", 요우무_하이브리드.깨달음);
	fprintf(savefile, "요우무_하이브리드흑마법=%d\n", 요우무_하이브리드.흑마법);
	fprintf(savefile, "요우무_하이브리드음과양=%d\n", 요우무_하이브리드.음과양의조화);
	fprintf(savefile, "요우무_하이브리드아레스=%d\n", 요우무_하이브리드.아레스의투구);
	fprintf(savefile, "요우무_하이브리드라식=%d\n", 요우무_하이브리드.라식);
	fprintf(savefile, "요우무_하이브리드장화=%d\n", 요우무_하이브리드.축복의장화);
	fprintf(savefile, "요우무_하이브리드반지=%d\n", 요우무_하이브리드.신비로운반지);
	fprintf(savefile, "요우무_하이브리드치명적인탄환=%d\n", 요우무_하이브리드.치명적인탄환);
	fprintf(savefile, "요우무_하이브리드깨물기=%d\n", 요우무_하이브리드.깨물기);
	fprintf(savefile, "요우무_하이브리드이동의즐거움=%d\n", 요우무_하이브리드.이동의즐거움);
	fprintf(savefile, "요우무_하이브리드판다렌=%d\n", 요우무_하이브리드.판다렌의화염작렬);
	fprintf(savefile, "요우무_하이브리드마법부스터=%d\n", 요우무_하이브리드.마법부스터);
	fprintf(savefile, "요우무_하이브리드단단한벽=%d\n", 요우무_하이브리드.단단한벽);
	fprintf(savefile, "요우무_하이브리드마법의망토=%d\n", 요우무_하이브리드.마법의망토);
	fprintf(savefile, "요우무_하이브리드고대신비마법서=%d\n", 요우무_하이브리드.고대신비의마법서);
	fprintf(savefile, "요우무_하이브리드산뜻한기분=%d\n", 요우무_하이브리드.산뜻한기분);
	fprintf(savefile, "요우무_하이브리드갈망의검=%d\n", 요우무_하이브리드.갈망의검);
	fprintf(savefile, "요우무_하이브리드지배전투의기본=%d\n", 요우무_하이브리드.지배전투의기본);
	fprintf(savefile, "요우무_하이브리드지배푸른영기=%d\n", 요우무_하이브리드.지배푸른영기);
	fprintf(savefile, "요우무_하이브리드마법전투의기본=%d\n", 요우무_하이브리드.마법전투의기본);
	fprintf(savefile, "요우무_하이브리드마법푸른영기=%d\n", 요우무_하이브리드.마법푸른영기);
	fprintf(savefile, "요우무_하이브리드강인한체력=%d\n", 요우무_하이브리드.강인한체력);
	fprintf(savefile, "요우무_하이브리드활력증진=%d\n", 요우무_하이브리드.활력증진);
	fprintf(savefile, "요우무_하이브리드저돌적인공격방식=%d\n", 요우무_하이브리드.저돌적인공격방식);
	fprintf(savefile, "요우무_하이브리드신비한공격방식=%d\n", 요우무_하이브리드.신비한공격방식);
	fprintf(savefile, "요우무_하이브리드투쟁갑옷무력화=%d\n", 요우무_하이브리드.투쟁갑옷무력화);
	fprintf(savefile, "요우무_하이브리드투쟁저항무력화=%d\n", 요우무_하이브리드.투쟁저항무력화);
	fprintf(savefile, "요우무_하이브리드지배갑옷무력화=%d\n", 요우무_하이브리드.지배갑옷무력화);
	fprintf(savefile, "요우무_하이브리드지배저항무력화=%d\n", 요우무_하이브리드.지배저항무력화);
	fprintf(savefile, "요우무_하이브리드마법갑옷무력화=%d\n", 요우무_하이브리드.마법갑옷무력화);
	fprintf(savefile, "요우무_하이브리드마법저항무력화=%d\n", 요우무_하이브리드.마법저항무력화);
	fprintf(savefile, "요우무_하이브리드신비의방패=%d\n", 요우무_하이브리드.신비의방패);
	fprintf(savefile, "요우무_하이브리드저항의방패=%d\n", 요우무_하이브리드.저항의방패);
	fprintf(savefile, "요우무_하이브리드경험치사기꾼=%d\n", 요우무_하이브리드.경험치사기꾼);
	fprintf(savefile, "요우무_하이브리드골드도둑=%d\n", 요우무_하이브리드.골드도둑);
	fprintf(savefile, "요우무_하이브리드투쟁타격용분=%d\n", 요우무_하이브리드.투쟁타격용분);
	fprintf(savefile, "요우무_하이브리드투쟁마법용분=%d\n", 요우무_하이브리드.투쟁마법용분);
	fprintf(savefile, "요우무_하이브리드지배물리용분=%d\n", 요우무_하이브리드.지배물리용분);
	fprintf(savefile, "요우무_하이브리드지배마법용분=%d\n", 요우무_하이브리드.지배마법용분);
	fprintf(savefile, "요우무_하이브리드마법물리용분=%d\n", 요우무_하이브리드.마법물리용분);
	fprintf(savefile, "요우무_하이브리드마법마법용분=%d\n", 요우무_하이브리드.마법마법용분);
	fprintf(savefile, "요우무_하이브리드긍지최후의방어=%d\n", 요우무_하이브리드.긍지최후의방어);
	fprintf(savefile, "요우무_하이브리드축복최후의방어=%d\n", 요우무_하이브리드.축복최후의방어);
	fprintf(savefile, "요우무_하이브리드집중사격=%d\n", 요우무_하이브리드.집중사격);
	fprintf(savefile, "요우무_하이브리드무자비한연사=%d\n", 요우무_하이브리드.무자비한연사);
	fprintf(savefile, "요우무_하이브리드환상적인공격=%d\n", 요우무_하이브리드.환상적인공격);
	fprintf(savefile, "요우무_하이브리드제우스의분노=%d\n", 요우무_하이브리드.제우스의분노);
	fprintf(savefile, "요우무_하이브리드오디세우스의성검=%d\n", 요우무_하이브리드.오디세우스의성검);
	fprintf(savefile, "요우무_하이브리드대마법신비로운메테오=%d\n", 요우무_하이브리드.대마법신비로운메테오);
	fprintf(savefile, "요우무_하이브리드마법펀치=%d\n", 요우무_하이브리드.마법펀치);
	fprintf(savefile, "요우무_하이브리드곰발바닥=%d\n", 요우무_하이브리드.곰발바닥);
	fprintf(savefile, "요우무_하이브리드토르의분노=%d\n", 요우무_하이브리드.토르의분노);
	fprintf(savefile, "요우무_하이브리드마법의점멸=%d\n", 요우무_하이브리드.마법의점멸);
	fprintf(savefile, "요우무_하이브리드신의가호=%d\n", 요우무_하이브리드.신의가호);
	//레이무
	fprintf(savefile, "레이무플레이횟수=%d\n", 레이무.게임횟수);
	fprintf(savefile, "레이무승리=%d\n", 레이무.승수);
	fprintf(savefile, "레이무패배=%d\n", 레이무.패수);
	fprintf(savefile, "레이무승률=%2lf\n", 레이무.승률);
	fprintf(savefile, "레이무레이팅=%d\n", 레이무.레이팅);
	fprintf(savefile, "레이무연승=%d\n", 레이무.연승);
	fprintf(savefile, "레이무연패=%d\n", 레이무.연패);
	fprintf(savefile, "레이무킬=%d\n", 레이무.킬);
	fprintf(savefile, "레이무데스=%d\n", 레이무.데스);
	fprintf(savefile, "레이무어시스트=%d\n", 레이무.어시스트);
	fprintf(savefile, "레이무백조의부름=%d\n", 레이무.백조의부름);
	fprintf(savefile, "레이무회복의삼지창=%d\n", 레이무.회복의삼지창);
	fprintf(savefile, "레이무밤의사냥꾼=%d\n", 레이무.밤의사냥꾼);
	fprintf(savefile, "레이무비겁한고블린=%d\n", 레이무.비겁한고블린);
	fprintf(savefile, "레이무깨달음=%d\n", 레이무.깨달음);
	fprintf(savefile, "레이무흑마법=%d\n", 레이무.흑마법);
	fprintf(savefile, "레이무음과양=%d\n", 레이무.음과양의조화);
	fprintf(savefile, "레이무아레스=%d\n", 레이무.아레스의투구);
	fprintf(savefile, "레이무라식=%d\n", 레이무.라식);
	fprintf(savefile, "레이무장화=%d\n", 레이무.축복의장화);
	fprintf(savefile, "레이무반지=%d\n", 레이무.신비로운반지);
	fprintf(savefile, "레이무치명적인탄환=%d\n", 레이무.치명적인탄환);
	fprintf(savefile, "레이무깨물기=%d\n", 레이무.깨물기);
	fprintf(savefile, "레이무이동의즐거움=%d\n", 레이무.이동의즐거움);
	fprintf(savefile, "레이무판다렌=%d\n", 레이무.판다렌의화염작렬);
	fprintf(savefile, "레이무마법부스터=%d\n", 레이무.마법부스터);
	fprintf(savefile, "레이무단단한벽=%d\n", 레이무.단단한벽);
	fprintf(savefile, "레이무마법의망토=%d\n", 레이무.마법의망토);
	fprintf(savefile, "레이무고대신비마법서=%d\n", 레이무.고대신비의마법서);
	fprintf(savefile, "레이무산뜻한기분=%d\n", 레이무.산뜻한기분);
	fprintf(savefile, "레이무갈망의검=%d\n", 레이무.갈망의검);
	fprintf(savefile, "레이무지배전투의기본=%d\n", 레이무.지배전투의기본);
	fprintf(savefile, "레이무지배푸른영기=%d\n", 레이무.지배푸른영기);
	fprintf(savefile, "레이무마법전투의기본=%d\n", 레이무.마법전투의기본);
	fprintf(savefile, "레이무마법푸른영기=%d\n", 레이무.마법푸른영기);
	fprintf(savefile, "레이무강인한체력=%d\n", 레이무.강인한체력);
	fprintf(savefile, "레이무활력증진=%d\n", 레이무.활력증진);
	fprintf(savefile, "레이무저돌적인공격방식=%d\n", 레이무.저돌적인공격방식);
	fprintf(savefile, "레이무신비한공격방식=%d\n", 레이무.신비한공격방식);
	fprintf(savefile, "레이무투쟁갑옷무력화=%d\n", 레이무.투쟁갑옷무력화);
	fprintf(savefile, "레이무투쟁저항무력화=%d\n", 레이무.투쟁저항무력화);
	fprintf(savefile, "레이무지배갑옷무력화=%d\n", 레이무.지배갑옷무력화);
	fprintf(savefile, "레이무지배저항무력화=%d\n", 레이무.지배저항무력화);
	fprintf(savefile, "레이무마법갑옷무력화=%d\n", 레이무.마법갑옷무력화);
	fprintf(savefile, "레이무마법저항무력화=%d\n", 레이무.마법저항무력화);
	fprintf(savefile, "레이무신비의방패=%d\n", 레이무.신비의방패);
	fprintf(savefile, "레이무저항의방패=%d\n", 레이무.저항의방패);
	fprintf(savefile, "레이무경험치사기꾼=%d\n", 레이무.경험치사기꾼);
	fprintf(savefile, "레이무골드도둑=%d\n", 레이무.골드도둑);
	fprintf(savefile, "레이무투쟁타격용분=%d\n", 레이무.투쟁타격용분);
	fprintf(savefile, "레이무투쟁마법용분=%d\n", 레이무.투쟁마법용분);
	fprintf(savefile, "레이무지배물리용분=%d\n", 레이무.지배물리용분);
	fprintf(savefile, "레이무지배마법용분=%d\n", 레이무.지배마법용분);
	fprintf(savefile, "레이무마법물리용분=%d\n", 레이무.마법물리용분);
	fprintf(savefile, "레이무마법마법용분=%d\n", 레이무.마법마법용분);
	fprintf(savefile, "레이무긍지최후의방어=%d\n", 레이무.긍지최후의방어);
	fprintf(savefile, "레이무축복최후의방어=%d\n", 레이무.축복최후의방어);
	fprintf(savefile, "레이무집중사격=%d\n", 레이무.집중사격);
	fprintf(savefile, "레이무무자비한연사=%d\n", 레이무.무자비한연사);
	fprintf(savefile, "레이무환상적인공격=%d\n", 레이무.환상적인공격);
	fprintf(savefile, "레이무제우스의분노=%d\n", 레이무.제우스의분노);
	fprintf(savefile, "레이무오디세우스의성검=%d\n", 레이무.오디세우스의성검);
	fprintf(savefile, "레이무대마법신비로운메테오=%d\n", 레이무.대마법신비로운메테오);
	fprintf(savefile, "레이무마법펀치=%d\n", 레이무.마법펀치);
	fprintf(savefile, "레이무곰발바닥=%d\n", 레이무.곰발바닥);
	fprintf(savefile, "레이무토르의분노=%d\n", 레이무.토르의분노);
	fprintf(savefile, "레이무마법의점멸=%d\n", 레이무.마법의점멸);
	fprintf(savefile, "레이무신의가호=%d\n", 레이무.신의가호);
	//치르노
	fprintf(savefile, "치르노플레이횟수=%d\n", 치르노.게임횟수);
	fprintf(savefile, "치르노승리=%d\n", 치르노.승수);
	fprintf(savefile, "치르노패배=%d\n", 치르노.패수);
	fprintf(savefile, "치르노승률=%2lf\n", 치르노.승률);
	fprintf(savefile, "치르노레이팅=%d\n", 치르노.레이팅);
	fprintf(savefile, "치르노연승=%d\n", 치르노.연승);
	fprintf(savefile, "치르노연패=%d\n", 치르노.연패);
	fprintf(savefile, "치르노킬=%d\n", 치르노.킬);
	fprintf(savefile, "치르노데스=%d\n", 치르노.데스);
	fprintf(savefile, "치르노어시스트=%d\n", 치르노.어시스트);
	fprintf(savefile, "치르노백조의부름=%d\n", 치르노.백조의부름);
	fprintf(savefile, "치르노회복의삼지창=%d\n", 치르노.회복의삼지창);
	fprintf(savefile, "치르노밤의사냥꾼=%d\n", 치르노.밤의사냥꾼);
	fprintf(savefile, "치르노비겁한고블린=%d\n", 치르노.비겁한고블린);
	fprintf(savefile, "치르노깨달음=%d\n", 치르노.깨달음);
	fprintf(savefile, "치르노흑마법=%d\n", 치르노.흑마법);
	fprintf(savefile, "치르노음과양=%d\n", 치르노.음과양의조화);
	fprintf(savefile, "치르노아레스=%d\n", 치르노.아레스의투구);
	fprintf(savefile, "치르노라식=%d\n", 치르노.라식);
	fprintf(savefile, "치르노장화=%d\n", 치르노.축복의장화);
	fprintf(savefile, "치르노반지=%d\n", 치르노.신비로운반지);
	fprintf(savefile, "치르노치명적인탄환=%d\n", 치르노.치명적인탄환);
	fprintf(savefile, "치르노깨물기=%d\n", 치르노.깨물기);
	fprintf(savefile, "치르노이동의즐거움=%d\n", 치르노.이동의즐거움);
	fprintf(savefile, "치르노판다렌=%d\n", 치르노.판다렌의화염작렬);
	fprintf(savefile, "치르노마법부스터=%d\n", 치르노.마법부스터);
	fprintf(savefile, "치르노단단한벽=%d\n", 치르노.단단한벽);
	fprintf(savefile, "치르노마법의망토=%d\n", 치르노.마법의망토);
	fprintf(savefile, "치르노고대신비마법서=%d\n", 치르노.고대신비의마법서);
	fprintf(savefile, "치르노산뜻한기분=%d\n", 치르노.산뜻한기분);
	fprintf(savefile, "치르노갈망의검=%d\n", 치르노.갈망의검);
	fprintf(savefile, "치르노지배전투의기본=%d\n", 치르노.지배전투의기본);
	fprintf(savefile, "치르노지배푸른영기=%d\n", 치르노.지배푸른영기);
	fprintf(savefile, "치르노마법전투의기본=%d\n", 치르노.마법전투의기본);
	fprintf(savefile, "치르노마법푸른영기=%d\n", 치르노.마법푸른영기);
	fprintf(savefile, "치르노강인한체력=%d\n", 치르노.강인한체력);
	fprintf(savefile, "치르노활력증진=%d\n", 치르노.활력증진);
	fprintf(savefile, "치르노저돌적인공격방식=%d\n", 치르노.저돌적인공격방식);
	fprintf(savefile, "치르노신비한공격방식=%d\n", 치르노.신비한공격방식);
	fprintf(savefile, "치르노투쟁갑옷무력화=%d\n", 치르노.투쟁갑옷무력화);
	fprintf(savefile, "치르노투쟁저항무력화=%d\n", 치르노.투쟁저항무력화);
	fprintf(savefile, "치르노지배갑옷무력화=%d\n", 치르노.지배갑옷무력화);
	fprintf(savefile, "치르노지배저항무력화=%d\n", 치르노.지배저항무력화);
	fprintf(savefile, "치르노마법갑옷무력화=%d\n", 치르노.마법갑옷무력화);
	fprintf(savefile, "치르노마법저항무력화=%d\n", 치르노.마법저항무력화);
	fprintf(savefile, "치르노신비의방패=%d\n", 치르노.신비의방패);
	fprintf(savefile, "치르노저항의방패=%d\n", 치르노.저항의방패);
	fprintf(savefile, "치르노경험치사기꾼=%d\n", 치르노.경험치사기꾼);
	fprintf(savefile, "치르노골드도둑=%d\n", 치르노.골드도둑);
	fprintf(savefile, "치르노투쟁타격용분=%d\n", 치르노.투쟁타격용분);
	fprintf(savefile, "치르노투쟁마법용분=%d\n", 치르노.투쟁마법용분);
	fprintf(savefile, "치르노지배물리용분=%d\n", 치르노.지배물리용분);
	fprintf(savefile, "치르노지배마법용분=%d\n", 치르노.지배마법용분);
	fprintf(savefile, "치르노마법물리용분=%d\n", 치르노.마법물리용분);
	fprintf(savefile, "치르노마법마법용분=%d\n", 치르노.마법마법용분);
	fprintf(savefile, "치르노긍지최후의방어=%d\n", 치르노.긍지최후의방어);
	fprintf(savefile, "치르노축복최후의방어=%d\n", 치르노.축복최후의방어);
	fprintf(savefile, "치르노집중사격=%d\n", 치르노.집중사격);
	fprintf(savefile, "치르노무자비한연사=%d\n", 치르노.무자비한연사);
	fprintf(savefile, "치르노환상적인공격=%d\n", 치르노.환상적인공격);
	fprintf(savefile, "치르노제우스의분노=%d\n", 치르노.제우스의분노);
	fprintf(savefile, "치르노오디세우스의성검=%d\n", 치르노.오디세우스의성검);
	fprintf(savefile, "치르노대마법신비로운메테오=%d\n", 치르노.대마법신비로운메테오);
	fprintf(savefile, "치르노마법펀치=%d\n", 치르노.마법펀치);
	fprintf(savefile, "치르노곰발바닥=%d\n", 치르노.곰발바닥);
	fprintf(savefile, "치르노토르의분노=%d\n", 치르노.토르의분노);
	fprintf(savefile, "치르노마법의점멸=%d\n", 치르노.마법의점멸);
	fprintf(savefile, "치르노신의가호=%d\n", 치르노.신의가호);
	//사쿠야_딜러
	fprintf(savefile, "사쿠야_딜러플레이횟수=%d\n", 사쿠야_딜러.게임횟수);
	fprintf(savefile, "사쿠야_딜러승리=%d\n", 사쿠야_딜러.승수);
	fprintf(savefile, "사쿠야_딜러패배=%d\n", 사쿠야_딜러.패수);
	fprintf(savefile, "사쿠야_딜러승률=%2lf\n", 사쿠야_딜러.승률);
	fprintf(savefile, "사쿠야_딜러레이팅=%d\n", 사쿠야_딜러.레이팅);
	fprintf(savefile, "사쿠야_딜러연승=%d\n", 사쿠야_딜러.연승);
	fprintf(savefile, "사쿠야_딜러연패=%d\n", 사쿠야_딜러.연패);
	fprintf(savefile, "사쿠야_딜러킬=%d\n", 사쿠야_딜러.킬);
	fprintf(savefile, "사쿠야_딜러데스=%d\n", 사쿠야_딜러.데스);
	fprintf(savefile, "사쿠야_딜러어시스트=%d\n", 사쿠야_딜러.어시스트);
	fprintf(savefile, "사쿠야_딜러백조의부름=%d\n", 사쿠야_딜러.백조의부름);
	fprintf(savefile, "사쿠야_딜러회복의삼지창=%d\n", 사쿠야_딜러.회복의삼지창);
	fprintf(savefile, "사쿠야_딜러밤의사냥꾼=%d\n", 사쿠야_딜러.밤의사냥꾼);
	fprintf(savefile, "사쿠야_딜러비겁한고블린=%d\n", 사쿠야_딜러.비겁한고블린);
	fprintf(savefile, "사쿠야_딜러깨달음=%d\n", 사쿠야_딜러.깨달음);
	fprintf(savefile, "사쿠야_딜러흑마법=%d\n", 사쿠야_딜러.흑마법);
	fprintf(savefile, "사쿠야_딜러음과양=%d\n", 사쿠야_딜러.음과양의조화);
	fprintf(savefile, "사쿠야_딜러아레스=%d\n", 사쿠야_딜러.아레스의투구);
	fprintf(savefile, "사쿠야_딜러라식=%d\n", 사쿠야_딜러.라식);
	fprintf(savefile, "사쿠야_딜러장화=%d\n", 사쿠야_딜러.축복의장화);
	fprintf(savefile, "사쿠야_딜러반지=%d\n", 사쿠야_딜러.신비로운반지);
	fprintf(savefile, "사쿠야_딜러치명적인탄환=%d\n", 사쿠야_딜러.치명적인탄환);
	fprintf(savefile, "사쿠야_딜러깨물기=%d\n", 사쿠야_딜러.깨물기);
	fprintf(savefile, "사쿠야_딜러이동의즐거움=%d\n", 사쿠야_딜러.이동의즐거움);
	fprintf(savefile, "사쿠야_딜러판다렌=%d\n", 사쿠야_딜러.판다렌의화염작렬);
	fprintf(savefile, "사쿠야_딜러마법부스터=%d\n", 사쿠야_딜러.마법부스터);
	fprintf(savefile, "사쿠야_딜러단단한벽=%d\n", 사쿠야_딜러.단단한벽);
	fprintf(savefile, "사쿠야_딜러마법의망토=%d\n", 사쿠야_딜러.마법의망토);
	fprintf(savefile, "사쿠야_딜러고대신비마법서=%d\n", 사쿠야_딜러.고대신비의마법서);
	fprintf(savefile, "사쿠야_딜러산뜻한기분=%d\n", 사쿠야_딜러.산뜻한기분);
	fprintf(savefile, "사쿠야_딜러갈망의검=%d\n", 사쿠야_딜러.갈망의검);
	fprintf(savefile, "사쿠야_딜러지배전투의기본=%d\n", 사쿠야_딜러.지배전투의기본);
	fprintf(savefile, "사쿠야_딜러지배푸른영기=%d\n", 사쿠야_딜러.지배푸른영기);
	fprintf(savefile, "사쿠야_딜러마법전투의기본=%d\n", 사쿠야_딜러.마법전투의기본);
	fprintf(savefile, "사쿠야_딜러마법푸른영기=%d\n", 사쿠야_딜러.마법푸른영기);
	fprintf(savefile, "사쿠야_딜러강인한체력=%d\n", 사쿠야_딜러.강인한체력);
	fprintf(savefile, "사쿠야_딜러활력증진=%d\n", 사쿠야_딜러.활력증진);
	fprintf(savefile, "사쿠야_딜러저돌적인공격방식=%d\n", 사쿠야_딜러.저돌적인공격방식);
	fprintf(savefile, "사쿠야_딜러신비한공격방식=%d\n", 사쿠야_딜러.신비한공격방식);
	fprintf(savefile, "사쿠야_딜러투쟁갑옷무력화=%d\n", 사쿠야_딜러.투쟁갑옷무력화);
	fprintf(savefile, "사쿠야_딜러투쟁저항무력화=%d\n", 사쿠야_딜러.투쟁저항무력화);
	fprintf(savefile, "사쿠야_딜러지배갑옷무력화=%d\n", 사쿠야_딜러.지배갑옷무력화);
	fprintf(savefile, "사쿠야_딜러지배저항무력화=%d\n", 사쿠야_딜러.지배저항무력화);
	fprintf(savefile, "사쿠야_딜러마법갑옷무력화=%d\n", 사쿠야_딜러.마법갑옷무력화);
	fprintf(savefile, "사쿠야_딜러마법저항무력화=%d\n", 사쿠야_딜러.마법저항무력화);
	fprintf(savefile, "사쿠야_딜러신비의방패=%d\n", 사쿠야_딜러.신비의방패);
	fprintf(savefile, "사쿠야_딜러저항의방패=%d\n", 사쿠야_딜러.저항의방패);
	fprintf(savefile, "사쿠야_딜러경험치사기꾼=%d\n", 사쿠야_딜러.경험치사기꾼);
	fprintf(savefile, "사쿠야_딜러골드도둑=%d\n", 사쿠야_딜러.골드도둑);
	fprintf(savefile, "사쿠야_딜러투쟁타격용분=%d\n", 사쿠야_딜러.투쟁타격용분);
	fprintf(savefile, "사쿠야_딜러투쟁마법용분=%d\n", 사쿠야_딜러.투쟁마법용분);
	fprintf(savefile, "사쿠야_딜러지배물리용분=%d\n", 사쿠야_딜러.지배물리용분);
	fprintf(savefile, "사쿠야_딜러지배마법용분=%d\n", 사쿠야_딜러.지배마법용분);
	fprintf(savefile, "사쿠야_딜러마법물리용분=%d\n", 사쿠야_딜러.마법물리용분);
	fprintf(savefile, "사쿠야_딜러마법마법용분=%d\n", 사쿠야_딜러.마법마법용분);
	fprintf(savefile, "사쿠야_딜러긍지최후의방어=%d\n", 사쿠야_딜러.긍지최후의방어);
	fprintf(savefile, "사쿠야_딜러축복최후의방어=%d\n", 사쿠야_딜러.축복최후의방어);
	fprintf(savefile, "사쿠야_딜러집중사격=%d\n", 사쿠야_딜러.집중사격);
	fprintf(savefile, "사쿠야_딜러무자비한연사=%d\n", 사쿠야_딜러.무자비한연사);
	fprintf(savefile, "사쿠야_딜러환상적인공격=%d\n", 사쿠야_딜러.환상적인공격);
	fprintf(savefile, "사쿠야_딜러제우스의분노=%d\n", 사쿠야_딜러.제우스의분노);
	fprintf(savefile, "사쿠야_딜러오디세우스의성검=%d\n", 사쿠야_딜러.오디세우스의성검);
	fprintf(savefile, "사쿠야_딜러대마법신비로운메테오=%d\n", 사쿠야_딜러.대마법신비로운메테오);
	fprintf(savefile, "사쿠야_딜러마법펀치=%d\n", 사쿠야_딜러.마법펀치);
	fprintf(savefile, "사쿠야_딜러곰발바닥=%d\n", 사쿠야_딜러.곰발바닥);
	fprintf(savefile, "사쿠야_딜러토르의분노=%d\n", 사쿠야_딜러.토르의분노);
	fprintf(savefile, "사쿠야_딜러마법의점멸=%d\n", 사쿠야_딜러.마법의점멸);
	fprintf(savefile, "사쿠야_딜러신의가호=%d\n", 사쿠야_딜러.신의가호);
	//사쿠야_탱커
	fprintf(savefile, "사쿠야_탱커플레이횟수=%d\n", 사쿠야_탱커.게임횟수);
	fprintf(savefile, "사쿠야_탱커승리=%d\n", 사쿠야_탱커.승수);
	fprintf(savefile, "사쿠야_탱커패배=%d\n", 사쿠야_탱커.패수);
	fprintf(savefile, "사쿠야_탱커승률=%2lf\n", 사쿠야_탱커.승률);
	fprintf(savefile, "사쿠야_탱커레이팅=%d\n", 사쿠야_탱커.레이팅);
	fprintf(savefile, "사쿠야_탱커연승=%d\n", 사쿠야_탱커.연승);
	fprintf(savefile, "사쿠야_탱커연패=%d\n", 사쿠야_탱커.연패);
	fprintf(savefile, "사쿠야_탱커킬=%d\n", 사쿠야_탱커.킬);
	fprintf(savefile, "사쿠야_탱커데스=%d\n", 사쿠야_탱커.데스);
	fprintf(savefile, "사쿠야_탱커어시스트=%d\n", 사쿠야_탱커.어시스트);
	fprintf(savefile, "사쿠야_탱커백조의부름=%d\n", 사쿠야_탱커.백조의부름);
	fprintf(savefile, "사쿠야_탱커회복의삼지창=%d\n", 사쿠야_탱커.회복의삼지창);
	fprintf(savefile, "사쿠야_탱커밤의사냥꾼=%d\n", 사쿠야_탱커.밤의사냥꾼);
	fprintf(savefile, "사쿠야_탱커비겁한고블린=%d\n", 사쿠야_탱커.비겁한고블린);
	fprintf(savefile, "사쿠야_탱커깨달음=%d\n", 사쿠야_탱커.깨달음);
	fprintf(savefile, "사쿠야_탱커흑마법=%d\n", 사쿠야_탱커.흑마법);
	fprintf(savefile, "사쿠야_탱커음과양=%d\n", 사쿠야_탱커.음과양의조화);
	fprintf(savefile, "사쿠야_탱커아레스=%d\n", 사쿠야_탱커.아레스의투구);
	fprintf(savefile, "사쿠야_탱커라식=%d\n", 사쿠야_탱커.라식);
	fprintf(savefile, "사쿠야_탱커장화=%d\n", 사쿠야_탱커.축복의장화);
	fprintf(savefile, "사쿠야_탱커반지=%d\n", 사쿠야_탱커.신비로운반지);
	fprintf(savefile, "사쿠야_탱커치명적인탄환=%d\n", 사쿠야_탱커.치명적인탄환);
	fprintf(savefile, "사쿠야_탱커깨물기=%d\n", 사쿠야_탱커.깨물기);
	fprintf(savefile, "사쿠야_탱커이동의즐거움=%d\n", 사쿠야_탱커.이동의즐거움);
	fprintf(savefile, "사쿠야_탱커판다렌=%d\n", 사쿠야_탱커.판다렌의화염작렬);
	fprintf(savefile, "사쿠야_탱커마법부스터=%d\n", 사쿠야_탱커.마법부스터);
	fprintf(savefile, "사쿠야_탱커단단한벽=%d\n", 사쿠야_탱커.단단한벽);
	fprintf(savefile, "사쿠야_탱커마법의망토=%d\n", 사쿠야_탱커.마법의망토);
	fprintf(savefile, "사쿠야_탱커고대신비마법서=%d\n", 사쿠야_탱커.고대신비의마법서);
	fprintf(savefile, "사쿠야_탱커산뜻한기분=%d\n", 사쿠야_탱커.산뜻한기분);
	fprintf(savefile, "사쿠야_탱커갈망의검=%d\n", 사쿠야_탱커.갈망의검);
	fprintf(savefile, "사쿠야_탱커지배전투의기본=%d\n", 사쿠야_탱커.지배전투의기본);
	fprintf(savefile, "사쿠야_탱커지배푸른영기=%d\n", 사쿠야_탱커.지배푸른영기);
	fprintf(savefile, "사쿠야_탱커마법전투의기본=%d\n", 사쿠야_탱커.마법전투의기본);
	fprintf(savefile, "사쿠야_탱커마법푸른영기=%d\n", 사쿠야_탱커.마법푸른영기);
	fprintf(savefile, "사쿠야_탱커강인한체력=%d\n", 사쿠야_탱커.강인한체력);
	fprintf(savefile, "사쿠야_탱커활력증진=%d\n", 사쿠야_탱커.활력증진);
	fprintf(savefile, "사쿠야_탱커저돌적인공격방식=%d\n", 사쿠야_탱커.저돌적인공격방식);
	fprintf(savefile, "사쿠야_탱커신비한공격방식=%d\n", 사쿠야_탱커.신비한공격방식);
	fprintf(savefile, "사쿠야_탱커투쟁갑옷무력화=%d\n", 사쿠야_탱커.투쟁갑옷무력화);
	fprintf(savefile, "사쿠야_탱커투쟁저항무력화=%d\n", 사쿠야_탱커.투쟁저항무력화);
	fprintf(savefile, "사쿠야_탱커지배갑옷무력화=%d\n", 사쿠야_탱커.지배갑옷무력화);
	fprintf(savefile, "사쿠야_탱커지배저항무력화=%d\n", 사쿠야_탱커.지배저항무력화);
	fprintf(savefile, "사쿠야_탱커마법갑옷무력화=%d\n", 사쿠야_탱커.마법갑옷무력화);
	fprintf(savefile, "사쿠야_탱커마법저항무력화=%d\n", 사쿠야_탱커.마법저항무력화);
	fprintf(savefile, "사쿠야_탱커신비의방패=%d\n", 사쿠야_탱커.신비의방패);
	fprintf(savefile, "사쿠야_탱커저항의방패=%d\n", 사쿠야_탱커.저항의방패);
	fprintf(savefile, "사쿠야_탱커경험치사기꾼=%d\n", 사쿠야_탱커.경험치사기꾼);
	fprintf(savefile, "사쿠야_탱커골드도둑=%d\n", 사쿠야_탱커.골드도둑);
	fprintf(savefile, "사쿠야_탱커투쟁타격용분=%d\n", 사쿠야_탱커.투쟁타격용분);
	fprintf(savefile, "사쿠야_탱커투쟁마법용분=%d\n", 사쿠야_탱커.투쟁마법용분);
	fprintf(savefile, "사쿠야_탱커지배물리용분=%d\n", 사쿠야_탱커.지배물리용분);
	fprintf(savefile, "사쿠야_탱커지배마법용분=%d\n", 사쿠야_탱커.지배마법용분);
	fprintf(savefile, "사쿠야_탱커마법물리용분=%d\n", 사쿠야_탱커.마법물리용분);
	fprintf(savefile, "사쿠야_탱커마법마법용분=%d\n", 사쿠야_탱커.마법마법용분);
	fprintf(savefile, "사쿠야_탱커긍지최후의방어=%d\n", 사쿠야_탱커.긍지최후의방어);
	fprintf(savefile, "사쿠야_탱커축복최후의방어=%d\n", 사쿠야_탱커.축복최후의방어);
	fprintf(savefile, "사쿠야_탱커집중사격=%d\n", 사쿠야_탱커.집중사격);
	fprintf(savefile, "사쿠야_탱커무자비한연사=%d\n", 사쿠야_탱커.무자비한연사);
	fprintf(savefile, "사쿠야_탱커환상적인공격=%d\n", 사쿠야_탱커.환상적인공격);
	fprintf(savefile, "사쿠야_탱커제우스의분노=%d\n", 사쿠야_탱커.제우스의분노);
	fprintf(savefile, "사쿠야_탱커오디세우스의성검=%d\n", 사쿠야_탱커.오디세우스의성검);
	fprintf(savefile, "사쿠야_탱커대마법신비로운메테오=%d\n", 사쿠야_탱커.대마법신비로운메테오);
	fprintf(savefile, "사쿠야_탱커마법펀치=%d\n", 사쿠야_탱커.마법펀치);
	fprintf(savefile, "사쿠야_탱커곰발바닥=%d\n", 사쿠야_탱커.곰발바닥);
	fprintf(savefile, "사쿠야_탱커토르의분노=%d\n", 사쿠야_탱커.토르의분노);
	fprintf(savefile, "사쿠야_탱커마법의점멸=%d\n", 사쿠야_탱커.마법의점멸);
	fprintf(savefile, "사쿠야_탱커신의가호=%d\n", 사쿠야_탱커.신의가호);
	//이쿠
	fprintf(savefile, "이쿠플레이횟수=%d\n", 이쿠.게임횟수);
	fprintf(savefile, "이쿠승리=%d\n", 이쿠.승수);
	fprintf(savefile, "이쿠패배=%d\n", 이쿠.패수);
	fprintf(savefile, "이쿠승률=%2lf\n", 이쿠.승률);
	fprintf(savefile, "이쿠레이팅=%d\n", 이쿠.레이팅);
	fprintf(savefile, "이쿠연승=%d\n", 이쿠.연승);
	fprintf(savefile, "이쿠연패=%d\n", 이쿠.연패);
	fprintf(savefile, "이쿠킬=%d\n", 이쿠.킬);
	fprintf(savefile, "이쿠데스=%d\n", 이쿠.데스);
	fprintf(savefile, "이쿠어시스트=%d\n", 이쿠.어시스트);
	fprintf(savefile, "이쿠백조의부름=%d\n", 이쿠.백조의부름);
	fprintf(savefile, "이쿠회복의삼지창=%d\n", 이쿠.회복의삼지창);
	fprintf(savefile, "이쿠밤의사냥꾼=%d\n", 이쿠.밤의사냥꾼);
	fprintf(savefile, "이쿠비겁한고블린=%d\n", 이쿠.비겁한고블린);
	fprintf(savefile, "이쿠깨달음=%d\n", 이쿠.깨달음);
	fprintf(savefile, "이쿠흑마법=%d\n", 이쿠.흑마법);
	fprintf(savefile, "이쿠음과양=%d\n", 이쿠.음과양의조화);
	fprintf(savefile, "이쿠아레스=%d\n", 이쿠.아레스의투구);
	fprintf(savefile, "이쿠라식=%d\n", 이쿠.라식);
	fprintf(savefile, "이쿠장화=%d\n", 이쿠.축복의장화);
	fprintf(savefile, "이쿠반지=%d\n", 이쿠.신비로운반지);
	fprintf(savefile, "이쿠치명적인탄환=%d\n", 이쿠.치명적인탄환);
	fprintf(savefile, "이쿠깨물기=%d\n", 이쿠.깨물기);
	fprintf(savefile, "이쿠이동의즐거움=%d\n", 이쿠.이동의즐거움);
	fprintf(savefile, "이쿠판다렌=%d\n", 이쿠.판다렌의화염작렬);
	fprintf(savefile, "이쿠마법부스터=%d\n", 이쿠.마법부스터);
	fprintf(savefile, "이쿠단단한벽=%d\n", 이쿠.단단한벽);
	fprintf(savefile, "이쿠마법의망토=%d\n", 이쿠.마법의망토);
	fprintf(savefile, "이쿠고대신비마법서=%d\n", 이쿠.고대신비의마법서);
	fprintf(savefile, "이쿠산뜻한기분=%d\n", 이쿠.산뜻한기분);
	fprintf(savefile, "이쿠갈망의검=%d\n", 이쿠.갈망의검);
	fprintf(savefile, "이쿠지배전투의기본=%d\n", 이쿠.지배전투의기본);
	fprintf(savefile, "이쿠지배푸른영기=%d\n", 이쿠.지배푸른영기);
	fprintf(savefile, "이쿠마법전투의기본=%d\n", 이쿠.마법전투의기본);
	fprintf(savefile, "이쿠마법푸른영기=%d\n", 이쿠.마법푸른영기);
	fprintf(savefile, "이쿠강인한체력=%d\n", 이쿠.강인한체력);
	fprintf(savefile, "이쿠활력증진=%d\n", 이쿠.활력증진);
	fprintf(savefile, "이쿠저돌적인공격방식=%d\n", 이쿠.저돌적인공격방식);
	fprintf(savefile, "이쿠신비한공격방식=%d\n", 이쿠.신비한공격방식);
	fprintf(savefile, "이쿠투쟁갑옷무력화=%d\n", 이쿠.투쟁갑옷무력화);
	fprintf(savefile, "이쿠투쟁저항무력화=%d\n", 이쿠.투쟁저항무력화);
	fprintf(savefile, "이쿠지배갑옷무력화=%d\n", 이쿠.지배갑옷무력화);
	fprintf(savefile, "이쿠지배저항무력화=%d\n", 이쿠.지배저항무력화);
	fprintf(savefile, "이쿠마법갑옷무력화=%d\n", 이쿠.마법갑옷무력화);
	fprintf(savefile, "이쿠마법저항무력화=%d\n", 이쿠.마법저항무력화);
	fprintf(savefile, "이쿠신비의방패=%d\n", 이쿠.신비의방패);
	fprintf(savefile, "이쿠저항의방패=%d\n", 이쿠.저항의방패);
	fprintf(savefile, "이쿠경험치사기꾼=%d\n", 이쿠.경험치사기꾼);
	fprintf(savefile, "이쿠골드도둑=%d\n", 이쿠.골드도둑);
	fprintf(savefile, "이쿠투쟁타격용분=%d\n", 이쿠.투쟁타격용분);
	fprintf(savefile, "이쿠투쟁마법용분=%d\n", 이쿠.투쟁마법용분);
	fprintf(savefile, "이쿠지배물리용분=%d\n", 이쿠.지배물리용분);
	fprintf(savefile, "이쿠지배마법용분=%d\n", 이쿠.지배마법용분);
	fprintf(savefile, "이쿠마법물리용분=%d\n", 이쿠.마법물리용분);
	fprintf(savefile, "이쿠마법마법용분=%d\n", 이쿠.마법마법용분);
	fprintf(savefile, "이쿠긍지최후의방어=%d\n", 이쿠.긍지최후의방어);
	fprintf(savefile, "이쿠축복최후의방어=%d\n", 이쿠.축복최후의방어);
	fprintf(savefile, "이쿠집중사격=%d\n", 이쿠.집중사격);
	fprintf(savefile, "이쿠무자비한연사=%d\n", 이쿠.무자비한연사);
	fprintf(savefile, "이쿠환상적인공격=%d\n", 이쿠.환상적인공격);
	fprintf(savefile, "이쿠제우스의분노=%d\n", 이쿠.제우스의분노);
	fprintf(savefile, "이쿠오디세우스의성검=%d\n", 이쿠.오디세우스의성검);
	fprintf(savefile, "이쿠대마법신비로운메테오=%d\n", 이쿠.대마법신비로운메테오);
	fprintf(savefile, "이쿠마법펀치=%d\n", 이쿠.마법펀치);
	fprintf(savefile, "이쿠곰발바닥=%d\n", 이쿠.곰발바닥);
	fprintf(savefile, "이쿠토르의분노=%d\n", 이쿠.토르의분노);
	fprintf(savefile, "이쿠마법의점멸=%d\n", 이쿠.마법의점멸);
	fprintf(savefile, "이쿠신의가호=%d\n", 이쿠.신의가호);
	//무라사_물리
	fprintf(savefile, "무라사_물리플레이횟수=%d\n", 무라사_물리.게임횟수);
	fprintf(savefile, "무라사_물리승리=%d\n", 무라사_물리.승수);
	fprintf(savefile, "무라사_물리패배=%d\n", 무라사_물리.패수);
	fprintf(savefile, "무라사_물리승률=%2lf\n", 무라사_물리.승률);
	fprintf(savefile, "무라사_물리레이팅=%d\n", 무라사_물리.레이팅);
	fprintf(savefile, "무라사_물리연승=%d\n", 무라사_물리.연승);
	fprintf(savefile, "무라사_물리연패=%d\n", 무라사_물리.연패);
	fprintf(savefile, "무라사_물리킬=%d\n", 무라사_물리.킬);
	fprintf(savefile, "무라사_물리데스=%d\n", 무라사_물리.데스);
	fprintf(savefile, "무라사_물리어시스트=%d\n", 무라사_물리.어시스트);
	fprintf(savefile, "무라사_물리백조의부름=%d\n", 무라사_물리.백조의부름);
	fprintf(savefile, "무라사_물리회복의삼지창=%d\n", 무라사_물리.회복의삼지창);
	fprintf(savefile, "무라사_물리밤의사냥꾼=%d\n", 무라사_물리.밤의사냥꾼);
	fprintf(savefile, "무라사_물리비겁한고블린=%d\n", 무라사_물리.비겁한고블린);
	fprintf(savefile, "무라사_물리깨달음=%d\n", 무라사_물리.깨달음);
	fprintf(savefile, "무라사_물리흑마법=%d\n", 무라사_물리.흑마법);
	fprintf(savefile, "무라사_물리음과양=%d\n", 무라사_물리.음과양의조화);
	fprintf(savefile, "무라사_물리아레스=%d\n", 무라사_물리.아레스의투구);
	fprintf(savefile, "무라사_물리라식=%d\n", 무라사_물리.라식);
	fprintf(savefile, "무라사_물리장화=%d\n", 무라사_물리.축복의장화);
	fprintf(savefile, "무라사_물리반지=%d\n", 무라사_물리.신비로운반지);
	fprintf(savefile, "무라사_물리치명적인탄환=%d\n", 무라사_물리.치명적인탄환);
	fprintf(savefile, "무라사_물리깨물기=%d\n", 무라사_물리.깨물기);
	fprintf(savefile, "무라사_물리이동의즐거움=%d\n", 무라사_물리.이동의즐거움);
	fprintf(savefile, "무라사_물리판다렌=%d\n", 무라사_물리.판다렌의화염작렬);
	fprintf(savefile, "무라사_물리마법부스터=%d\n", 무라사_물리.마법부스터);
	fprintf(savefile, "무라사_물리단단한벽=%d\n", 무라사_물리.단단한벽);
	fprintf(savefile, "무라사_물리마법의망토=%d\n", 무라사_물리.마법의망토);
	fprintf(savefile, "무라사_물리고대신비마법서=%d\n", 무라사_물리.고대신비의마법서);
	fprintf(savefile, "무라사_물리산뜻한기분=%d\n", 무라사_물리.산뜻한기분);
	fprintf(savefile, "무라사_물리갈망의검=%d\n", 무라사_물리.갈망의검);
	fprintf(savefile, "무라사_물리지배전투의기본=%d\n", 무라사_물리.지배전투의기본);
	fprintf(savefile, "무라사_물리지배푸른영기=%d\n", 무라사_물리.지배푸른영기);
	fprintf(savefile, "무라사_물리마법전투의기본=%d\n", 무라사_물리.마법전투의기본);
	fprintf(savefile, "무라사_물리마법푸른영기=%d\n", 무라사_물리.마법푸른영기);
	fprintf(savefile, "무라사_물리강인한체력=%d\n", 무라사_물리.강인한체력);
	fprintf(savefile, "무라사_물리활력증진=%d\n", 무라사_물리.활력증진);
	fprintf(savefile, "무라사_물리저돌적인공격방식=%d\n", 무라사_물리.저돌적인공격방식);
	fprintf(savefile, "무라사_물리신비한공격방식=%d\n", 무라사_물리.신비한공격방식);
	fprintf(savefile, "무라사_물리투쟁갑옷무력화=%d\n", 무라사_물리.투쟁갑옷무력화);
	fprintf(savefile, "무라사_물리투쟁저항무력화=%d\n", 무라사_물리.투쟁저항무력화);
	fprintf(savefile, "무라사_물리지배갑옷무력화=%d\n", 무라사_물리.지배갑옷무력화);
	fprintf(savefile, "무라사_물리지배저항무력화=%d\n", 무라사_물리.지배저항무력화);
	fprintf(savefile, "무라사_물리마법갑옷무력화=%d\n", 무라사_물리.마법갑옷무력화);
	fprintf(savefile, "무라사_물리마법저항무력화=%d\n", 무라사_물리.마법저항무력화);
	fprintf(savefile, "무라사_물리신비의방패=%d\n", 무라사_물리.신비의방패);
	fprintf(savefile, "무라사_물리저항의방패=%d\n", 무라사_물리.저항의방패);
	fprintf(savefile, "무라사_물리경험치사기꾼=%d\n", 무라사_물리.경험치사기꾼);
	fprintf(savefile, "무라사_물리골드도둑=%d\n", 무라사_물리.골드도둑);
	fprintf(savefile, "무라사_물리투쟁타격용분=%d\n", 무라사_물리.투쟁타격용분);
	fprintf(savefile, "무라사_물리투쟁마법용분=%d\n", 무라사_물리.투쟁마법용분);
	fprintf(savefile, "무라사_물리지배물리용분=%d\n", 무라사_물리.지배물리용분);
	fprintf(savefile, "무라사_물리지배마법용분=%d\n", 무라사_물리.지배마법용분);
	fprintf(savefile, "무라사_물리마법물리용분=%d\n", 무라사_물리.마법물리용분);
	fprintf(savefile, "무라사_물리마법마법용분=%d\n", 무라사_물리.마법마법용분);
	fprintf(savefile, "무라사_물리긍지최후의방어=%d\n", 무라사_물리.긍지최후의방어);
	fprintf(savefile, "무라사_물리축복최후의방어=%d\n", 무라사_물리.축복최후의방어);
	fprintf(savefile, "무라사_물리집중사격=%d\n", 무라사_물리.집중사격);
	fprintf(savefile, "무라사_물리무자비한연사=%d\n", 무라사_물리.무자비한연사);
	fprintf(savefile, "무라사_물리환상적인공격=%d\n", 무라사_물리.환상적인공격);
	fprintf(savefile, "무라사_물리제우스의분노=%d\n", 무라사_물리.제우스의분노);
	fprintf(savefile, "무라사_물리오디세우스의성검=%d\n", 무라사_물리.오디세우스의성검);
	fprintf(savefile, "무라사_물리대마법신비로운메테오=%d\n", 무라사_물리.대마법신비로운메테오);
	fprintf(savefile, "무라사_물리마법펀치=%d\n", 무라사_물리.마법펀치);
	fprintf(savefile, "무라사_물리곰발바닥=%d\n", 무라사_물리.곰발바닥);
	fprintf(savefile, "무라사_물리토르의분노=%d\n", 무라사_물리.토르의분노);
	fprintf(savefile, "무라사_물리마법의점멸=%d\n", 무라사_물리.마법의점멸);
	fprintf(savefile, "무라사_물리신의가호=%d\n", 무라사_물리.신의가호);
	//무라사_마법
	fprintf(savefile, "무라사_마법플레이횟수=%d\n", 무라사_마법.게임횟수);
	fprintf(savefile, "무라사_마법승리=%d\n", 무라사_마법.승수);
	fprintf(savefile, "무라사_마법패배=%d\n", 무라사_마법.패수);
	fprintf(savefile, "무라사_마법승률=%2lf\n", 무라사_마법.승률);
	fprintf(savefile, "무라사_마법레이팅=%d\n", 무라사_마법.레이팅);
	fprintf(savefile, "무라사_마법연승=%d\n", 무라사_마법.연승);
	fprintf(savefile, "무라사_마법연패=%d\n", 무라사_마법.연패);
	fprintf(savefile, "무라사_마법킬=%d\n", 무라사_마법.킬);
	fprintf(savefile, "무라사_마법데스=%d\n", 무라사_마법.데스);
	fprintf(savefile, "무라사_마법어시스트=%d\n", 무라사_마법.어시스트);
	fprintf(savefile, "무라사_마법백조의부름=%d\n", 무라사_마법.백조의부름);
	fprintf(savefile, "무라사_마법회복의삼지창=%d\n", 무라사_마법.회복의삼지창);
	fprintf(savefile, "무라사_마법밤의사냥꾼=%d\n", 무라사_마법.밤의사냥꾼);
	fprintf(savefile, "무라사_마법비겁한고블린=%d\n", 무라사_마법.비겁한고블린);
	fprintf(savefile, "무라사_마법깨달음=%d\n", 무라사_마법.깨달음);
	fprintf(savefile, "무라사_마법흑마법=%d\n", 무라사_마법.흑마법);
	fprintf(savefile, "무라사_마법음과양=%d\n", 무라사_마법.음과양의조화);
	fprintf(savefile, "무라사_마법아레스=%d\n", 무라사_마법.아레스의투구);
	fprintf(savefile, "무라사_마법라식=%d\n", 무라사_마법.라식);
	fprintf(savefile, "무라사_마법장화=%d\n", 무라사_마법.축복의장화);
	fprintf(savefile, "무라사_마법반지=%d\n", 무라사_마법.신비로운반지);
	fprintf(savefile, "무라사_마법치명적인탄환=%d\n", 무라사_마법.치명적인탄환);
	fprintf(savefile, "무라사_마법깨물기=%d\n", 무라사_마법.깨물기);
	fprintf(savefile, "무라사_마법이동의즐거움=%d\n", 무라사_마법.이동의즐거움);
	fprintf(savefile, "무라사_마법판다렌=%d\n", 무라사_마법.판다렌의화염작렬);
	fprintf(savefile, "무라사_마법마법부스터=%d\n", 무라사_마법.마법부스터);
	fprintf(savefile, "무라사_마법단단한벽=%d\n", 무라사_마법.단단한벽);
	fprintf(savefile, "무라사_마법마법의망토=%d\n", 무라사_마법.마법의망토);
	fprintf(savefile, "무라사_마법고대신비마법서=%d\n", 무라사_마법.고대신비의마법서);
	fprintf(savefile, "무라사_마법산뜻한기분=%d\n", 무라사_마법.산뜻한기분);
	fprintf(savefile, "무라사_마법갈망의검=%d\n", 무라사_마법.갈망의검);
	fprintf(savefile, "무라사_마법지배전투의기본=%d\n", 무라사_마법.지배전투의기본);
	fprintf(savefile, "무라사_마법지배푸른영기=%d\n", 무라사_마법.지배푸른영기);
	fprintf(savefile, "무라사_마법마법전투의기본=%d\n", 무라사_마법.마법전투의기본);
	fprintf(savefile, "무라사_마법마법푸른영기=%d\n", 무라사_마법.마법푸른영기);
	fprintf(savefile, "무라사_마법강인한체력=%d\n", 무라사_마법.강인한체력);
	fprintf(savefile, "무라사_마법활력증진=%d\n", 무라사_마법.활력증진);
	fprintf(savefile, "무라사_마법저돌적인공격방식=%d\n", 무라사_마법.저돌적인공격방식);
	fprintf(savefile, "무라사_마법신비한공격방식=%d\n", 무라사_마법.신비한공격방식);
	fprintf(savefile, "무라사_마법투쟁갑옷무력화=%d\n", 무라사_마법.투쟁갑옷무력화);
	fprintf(savefile, "무라사_마법투쟁저항무력화=%d\n", 무라사_마법.투쟁저항무력화);
	fprintf(savefile, "무라사_마법지배갑옷무력화=%d\n", 무라사_마법.지배갑옷무력화);
	fprintf(savefile, "무라사_마법지배저항무력화=%d\n", 무라사_마법.지배저항무력화);
	fprintf(savefile, "무라사_마법마법갑옷무력화=%d\n", 무라사_마법.마법갑옷무력화);
	fprintf(savefile, "무라사_마법마법저항무력화=%d\n", 무라사_마법.마법저항무력화);
	fprintf(savefile, "무라사_마법신비의방패=%d\n", 무라사_마법.신비의방패);
	fprintf(savefile, "무라사_마법저항의방패=%d\n", 무라사_마법.저항의방패);
	fprintf(savefile, "무라사_마법경험치사기꾼=%d\n", 무라사_마법.경험치사기꾼);
	fprintf(savefile, "무라사_마법골드도둑=%d\n", 무라사_마법.골드도둑);
	fprintf(savefile, "무라사_마법투쟁타격용분=%d\n", 무라사_마법.투쟁타격용분);
	fprintf(savefile, "무라사_마법투쟁마법용분=%d\n", 무라사_마법.투쟁마법용분);
	fprintf(savefile, "무라사_마법지배물리용분=%d\n", 무라사_마법.지배물리용분);
	fprintf(savefile, "무라사_마법지배마법용분=%d\n", 무라사_마법.지배마법용분);
	fprintf(savefile, "무라사_마법마법물리용분=%d\n", 무라사_마법.마법물리용분);
	fprintf(savefile, "무라사_마법마법마법용분=%d\n", 무라사_마법.마법마법용분);
	fprintf(savefile, "무라사_마법긍지최후의방어=%d\n", 무라사_마법.긍지최후의방어);
	fprintf(savefile, "무라사_마법축복최후의방어=%d\n", 무라사_마법.축복최후의방어);
	fprintf(savefile, "무라사_마법집중사격=%d\n", 무라사_마법.집중사격);
	fprintf(savefile, "무라사_마법무자비한연사=%d\n", 무라사_마법.무자비한연사);
	fprintf(savefile, "무라사_마법환상적인공격=%d\n", 무라사_마법.환상적인공격);
	fprintf(savefile, "무라사_마법제우스의분노=%d\n", 무라사_마법.제우스의분노);
	fprintf(savefile, "무라사_마법오디세우스의성검=%d\n", 무라사_마법.오디세우스의성검);
	fprintf(savefile, "무라사_마법대마법신비로운메테오=%d\n", 무라사_마법.대마법신비로운메테오);
	fprintf(savefile, "무라사_마법마법펀치=%d\n", 무라사_마법.마법펀치);
	fprintf(savefile, "무라사_마법곰발바닥=%d\n", 무라사_마법.곰발바닥);
	fprintf(savefile, "무라사_마법토르의분노=%d\n", 무라사_마법.토르의분노);
	fprintf(savefile, "무라사_마법마법의점멸=%d\n", 무라사_마법.마법의점멸);
	fprintf(savefile, "무라사_마법신의가호=%d\n", 무라사_마법.신의가호);
	//무라사_하이브리드
	fprintf(savefile, "무라사_하이브리드플레이횟수=%d\n", 무라사_하이브리드.게임횟수);
	fprintf(savefile, "무라사_하이브리드승리=%d\n", 무라사_하이브리드.승수);
	fprintf(savefile, "무라사_하이브리드패배=%d\n", 무라사_하이브리드.패수);
	fprintf(savefile, "무라사_하이브리드승률=%2lf\n", 무라사_하이브리드.승률);
	fprintf(savefile, "무라사_하이브리드레이팅=%d\n", 무라사_하이브리드.레이팅);
	fprintf(savefile, "무라사_하이브리드연승=%d\n", 무라사_하이브리드.연승);
	fprintf(savefile, "무라사_하이브리드연패=%d\n", 무라사_하이브리드.연패);
	fprintf(savefile, "무라사_하이브리드킬=%d\n", 무라사_하이브리드.킬);
	fprintf(savefile, "무라사_하이브리드데스=%d\n", 무라사_하이브리드.데스);
	fprintf(savefile, "무라사_하이브리드어시스트=%d\n", 무라사_하이브리드.어시스트);
	fprintf(savefile, "무라사_하이브리드백조의부름=%d\n", 무라사_하이브리드.백조의부름);
	fprintf(savefile, "무라사_하이브리드회복의삼지창=%d\n", 무라사_하이브리드.회복의삼지창);
	fprintf(savefile, "무라사_하이브리드밤의사냥꾼=%d\n", 무라사_하이브리드.밤의사냥꾼);
	fprintf(savefile, "무라사_하이브리드비겁한고블린=%d\n", 무라사_하이브리드.비겁한고블린);
	fprintf(savefile, "무라사_하이브리드깨달음=%d\n", 무라사_하이브리드.깨달음);
	fprintf(savefile, "무라사_하이브리드흑마법=%d\n", 무라사_하이브리드.흑마법);
	fprintf(savefile, "무라사_하이브리드음과양=%d\n", 무라사_하이브리드.음과양의조화);
	fprintf(savefile, "무라사_하이브리드아레스=%d\n", 무라사_하이브리드.아레스의투구);
	fprintf(savefile, "무라사_하이브리드라식=%d\n", 무라사_하이브리드.라식);
	fprintf(savefile, "무라사_하이브리드장화=%d\n", 무라사_하이브리드.축복의장화);
	fprintf(savefile, "무라사_하이브리드반지=%d\n", 무라사_하이브리드.신비로운반지);
	fprintf(savefile, "무라사_하이브리드치명적인탄환=%d\n", 무라사_하이브리드.치명적인탄환);
	fprintf(savefile, "무라사_하이브리드깨물기=%d\n", 무라사_하이브리드.깨물기);
	fprintf(savefile, "무라사_하이브리드이동의즐거움=%d\n", 무라사_하이브리드.이동의즐거움);
	fprintf(savefile, "무라사_하이브리드판다렌=%d\n", 무라사_하이브리드.판다렌의화염작렬);
	fprintf(savefile, "무라사_하이브리드마법부스터=%d\n", 무라사_하이브리드.마법부스터);
	fprintf(savefile, "무라사_하이브리드단단한벽=%d\n", 무라사_하이브리드.단단한벽);
	fprintf(savefile, "무라사_하이브리드마법의망토=%d\n", 무라사_하이브리드.마법의망토);
	fprintf(savefile, "무라사_하이브리드고대신비마법서=%d\n", 무라사_하이브리드.고대신비의마법서);
	fprintf(savefile, "무라사_하이브리드산뜻한기분=%d\n", 무라사_하이브리드.산뜻한기분);
	fprintf(savefile, "무라사_하이브리드갈망의검=%d\n", 무라사_하이브리드.갈망의검);
	fprintf(savefile, "무라사_하이브리드지배전투의기본=%d\n", 무라사_하이브리드.지배전투의기본);
	fprintf(savefile, "무라사_하이브리드지배푸른영기=%d\n", 무라사_하이브리드.지배푸른영기);
	fprintf(savefile, "무라사_하이브리드마법전투의기본=%d\n", 무라사_하이브리드.마법전투의기본);
	fprintf(savefile, "무라사_하이브리드마법푸른영기=%d\n", 무라사_하이브리드.마법푸른영기);
	fprintf(savefile, "무라사_하이브리드강인한체력=%d\n", 무라사_하이브리드.강인한체력);
	fprintf(savefile, "무라사_하이브리드활력증진=%d\n", 무라사_하이브리드.활력증진);
	fprintf(savefile, "무라사_하이브리드저돌적인공격방식=%d\n", 무라사_하이브리드.저돌적인공격방식);
	fprintf(savefile, "무라사_하이브리드신비한공격방식=%d\n", 무라사_하이브리드.신비한공격방식);
	fprintf(savefile, "무라사_하이브리드투쟁갑옷무력화=%d\n", 무라사_하이브리드.투쟁갑옷무력화);
	fprintf(savefile, "무라사_하이브리드투쟁저항무력화=%d\n", 무라사_하이브리드.투쟁저항무력화);
	fprintf(savefile, "무라사_하이브리드지배갑옷무력화=%d\n", 무라사_하이브리드.지배갑옷무력화);
	fprintf(savefile, "무라사_하이브리드지배저항무력화=%d\n", 무라사_하이브리드.지배저항무력화);
	fprintf(savefile, "무라사_하이브리드마법갑옷무력화=%d\n", 무라사_하이브리드.마법갑옷무력화);
	fprintf(savefile, "무라사_하이브리드마법저항무력화=%d\n", 무라사_하이브리드.마법저항무력화);
	fprintf(savefile, "무라사_하이브리드신비의방패=%d\n", 무라사_하이브리드.신비의방패);
	fprintf(savefile, "무라사_하이브리드저항의방패=%d\n", 무라사_하이브리드.저항의방패);
	fprintf(savefile, "무라사_하이브리드경험치사기꾼=%d\n", 무라사_하이브리드.경험치사기꾼);
	fprintf(savefile, "무라사_하이브리드골드도둑=%d\n", 무라사_하이브리드.골드도둑);
	fprintf(savefile, "무라사_하이브리드투쟁타격용분=%d\n", 무라사_하이브리드.투쟁타격용분);
	fprintf(savefile, "무라사_하이브리드투쟁마법용분=%d\n", 무라사_하이브리드.투쟁마법용분);
	fprintf(savefile, "무라사_하이브리드지배물리용분=%d\n", 무라사_하이브리드.지배물리용분);
	fprintf(savefile, "무라사_하이브리드지배마법용분=%d\n", 무라사_하이브리드.지배마법용분);
	fprintf(savefile, "무라사_하이브리드마법물리용분=%d\n", 무라사_하이브리드.마법물리용분);
	fprintf(savefile, "무라사_하이브리드마법마법용분=%d\n", 무라사_하이브리드.마법마법용분);
	fprintf(savefile, "무라사_하이브리드긍지최후의방어=%d\n", 무라사_하이브리드.긍지최후의방어);
	fprintf(savefile, "무라사_하이브리드축복최후의방어=%d\n", 무라사_하이브리드.축복최후의방어);
	fprintf(savefile, "무라사_하이브리드집중사격=%d\n", 무라사_하이브리드.집중사격);
	fprintf(savefile, "무라사_하이브리드무자비한연사=%d\n", 무라사_하이브리드.무자비한연사);
	fprintf(savefile, "무라사_하이브리드환상적인공격=%d\n", 무라사_하이브리드.환상적인공격);
	fprintf(savefile, "무라사_하이브리드제우스의분노=%d\n", 무라사_하이브리드.제우스의분노);
	fprintf(savefile, "무라사_하이브리드오디세우스의성검=%d\n", 무라사_하이브리드.오디세우스의성검);
	fprintf(savefile, "무라사_하이브리드대마법신비로운메테오=%d\n", 무라사_하이브리드.대마법신비로운메테오);
	fprintf(savefile, "무라사_하이브리드마법펀치=%d\n", 무라사_하이브리드.마법펀치);
	fprintf(savefile, "무라사_하이브리드곰발바닥=%d\n", 무라사_하이브리드.곰발바닥);
	fprintf(savefile, "무라사_하이브리드토르의분노=%d\n", 무라사_하이브리드.토르의분노);
	fprintf(savefile, "무라사_하이브리드마법의점멸=%d\n", 무라사_하이브리드.마법의점멸);
	fprintf(savefile, "무라사_하이브리드신의가호=%d\n", 무라사_하이브리드.신의가호);
	//레이센_딜러
	fprintf(savefile, "레이센_딜러플레이횟수=%d\n", 레이센_딜러.게임횟수);
	fprintf(savefile, "레이센_딜러승리=%d\n", 레이센_딜러.승수);
	fprintf(savefile, "레이센_딜러패배=%d\n", 레이센_딜러.패수);
	fprintf(savefile, "레이센_딜러승률=%2lf\n", 레이센_딜러.승률);
	fprintf(savefile, "레이센_딜러레이팅=%d\n", 레이센_딜러.레이팅);
	fprintf(savefile, "레이센_딜러연승=%d\n", 레이센_딜러.연승);
	fprintf(savefile, "레이센_딜러연패=%d\n", 레이센_딜러.연패);
	fprintf(savefile, "레이센_딜러킬=%d\n", 레이센_딜러.킬);
	fprintf(savefile, "레이센_딜러데스=%d\n", 레이센_딜러.데스);
	fprintf(savefile, "레이센_딜러어시스트=%d\n", 레이센_딜러.어시스트);
	fprintf(savefile, "레이센_딜러백조의부름=%d\n", 레이센_딜러.백조의부름);
	fprintf(savefile, "레이센_딜러회복의삼지창=%d\n", 레이센_딜러.회복의삼지창);
	fprintf(savefile, "레이센_딜러밤의사냥꾼=%d\n", 레이센_딜러.밤의사냥꾼);
	fprintf(savefile, "레이센_딜러비겁한고블린=%d\n", 레이센_딜러.비겁한고블린);
	fprintf(savefile, "레이센_딜러깨달음=%d\n", 레이센_딜러.깨달음);
	fprintf(savefile, "레이센_딜러흑마법=%d\n", 레이센_딜러.흑마법);
	fprintf(savefile, "레이센_딜러음과양=%d\n", 레이센_딜러.음과양의조화);
	fprintf(savefile, "레이센_딜러아레스=%d\n", 레이센_딜러.아레스의투구);
	fprintf(savefile, "레이센_딜러라식=%d\n", 레이센_딜러.라식);
	fprintf(savefile, "레이센_딜러장화=%d\n", 레이센_딜러.축복의장화);
	fprintf(savefile, "레이센_딜러반지=%d\n", 레이센_딜러.신비로운반지);
	fprintf(savefile, "레이센_딜러치명적인탄환=%d\n", 레이센_딜러.치명적인탄환);
	fprintf(savefile, "레이센_딜러깨물기=%d\n", 레이센_딜러.깨물기);
	fprintf(savefile, "레이센_딜러이동의즐거움=%d\n", 레이센_딜러.이동의즐거움);
	fprintf(savefile, "레이센_딜러판다렌=%d\n", 레이센_딜러.판다렌의화염작렬);
	fprintf(savefile, "레이센_딜러마법부스터=%d\n", 레이센_딜러.마법부스터);
	fprintf(savefile, "레이센_딜러단단한벽=%d\n", 레이센_딜러.단단한벽);
	fprintf(savefile, "레이센_딜러마법의망토=%d\n", 레이센_딜러.마법의망토);
	fprintf(savefile, "레이센_딜러고대신비마법서=%d\n", 레이센_딜러.고대신비의마법서);
	fprintf(savefile, "레이센_딜러산뜻한기분=%d\n", 레이센_딜러.산뜻한기분);
	fprintf(savefile, "레이센_딜러갈망의검=%d\n", 레이센_딜러.갈망의검);
	fprintf(savefile, "레이센_딜러지배전투의기본=%d\n", 레이센_딜러.지배전투의기본);
	fprintf(savefile, "레이센_딜러지배푸른영기=%d\n", 레이센_딜러.지배푸른영기);
	fprintf(savefile, "레이센_딜러마법전투의기본=%d\n", 레이센_딜러.마법전투의기본);
	fprintf(savefile, "레이센_딜러마법푸른영기=%d\n", 레이센_딜러.마법푸른영기);
	fprintf(savefile, "레이센_딜러강인한체력=%d\n", 레이센_딜러.강인한체력);
	fprintf(savefile, "레이센_딜러활력증진=%d\n", 레이센_딜러.활력증진);
	fprintf(savefile, "레이센_딜러저돌적인공격방식=%d\n", 레이센_딜러.저돌적인공격방식);
	fprintf(savefile, "레이센_딜러신비한공격방식=%d\n", 레이센_딜러.신비한공격방식);
	fprintf(savefile, "레이센_딜러투쟁갑옷무력화=%d\n", 레이센_딜러.투쟁갑옷무력화);
	fprintf(savefile, "레이센_딜러투쟁저항무력화=%d\n", 레이센_딜러.투쟁저항무력화);
	fprintf(savefile, "레이센_딜러지배갑옷무력화=%d\n", 레이센_딜러.지배갑옷무력화);
	fprintf(savefile, "레이센_딜러지배저항무력화=%d\n", 레이센_딜러.지배저항무력화);
	fprintf(savefile, "레이센_딜러마법갑옷무력화=%d\n", 레이센_딜러.마법갑옷무력화);
	fprintf(savefile, "레이센_딜러마법저항무력화=%d\n", 레이센_딜러.마법저항무력화);
	fprintf(savefile, "레이센_딜러신비의방패=%d\n", 레이센_딜러.신비의방패);
	fprintf(savefile, "레이센_딜러저항의방패=%d\n", 레이센_딜러.저항의방패);
	fprintf(savefile, "레이센_딜러경험치사기꾼=%d\n", 레이센_딜러.경험치사기꾼);
	fprintf(savefile, "레이센_딜러골드도둑=%d\n", 레이센_딜러.골드도둑);
	fprintf(savefile, "레이센_딜러투쟁타격용분=%d\n", 레이센_딜러.투쟁타격용분);
	fprintf(savefile, "레이센_딜러투쟁마법용분=%d\n", 레이센_딜러.투쟁마법용분);
	fprintf(savefile, "레이센_딜러지배물리용분=%d\n", 레이센_딜러.지배물리용분);
	fprintf(savefile, "레이센_딜러지배마법용분=%d\n", 레이센_딜러.지배마법용분);
	fprintf(savefile, "레이센_딜러마법물리용분=%d\n", 레이센_딜러.마법물리용분);
	fprintf(savefile, "레이센_딜러마법마법용분=%d\n", 레이센_딜러.마법마법용분);
	fprintf(savefile, "레이센_딜러긍지최후의방어=%d\n", 레이센_딜러.긍지최후의방어);
	fprintf(savefile, "레이센_딜러축복최후의방어=%d\n", 레이센_딜러.축복최후의방어);
	fprintf(savefile, "레이센_딜러집중사격=%d\n", 레이센_딜러.집중사격);
	fprintf(savefile, "레이센_딜러무자비한연사=%d\n", 레이센_딜러.무자비한연사);
	fprintf(savefile, "레이센_딜러환상적인공격=%d\n", 레이센_딜러.환상적인공격);
	fprintf(savefile, "레이센_딜러제우스의분노=%d\n", 레이센_딜러.제우스의분노);
	fprintf(savefile, "레이센_딜러오디세우스의성검=%d\n", 레이센_딜러.오디세우스의성검);
	fprintf(savefile, "레이센_딜러대마법신비로운메테오=%d\n", 레이센_딜러.대마법신비로운메테오);
	fprintf(savefile, "레이센_딜러마법펀치=%d\n", 레이센_딜러.마법펀치);
	fprintf(savefile, "레이센_딜러곰발바닥=%d\n", 레이센_딜러.곰발바닥);
	fprintf(savefile, "레이센_딜러토르의분노=%d\n", 레이센_딜러.토르의분노);
	fprintf(savefile, "레이센_딜러마법의점멸=%d\n", 레이센_딜러.마법의점멸);
	fprintf(savefile, "레이센_딜러신의가호=%d\n", 레이센_딜러.신의가호);
	//레이센_탱커
	fprintf(savefile, "레이센_탱커플레이횟수=%d\n", 레이센_탱커.게임횟수);
	fprintf(savefile, "레이센_탱커승리=%d\n", 레이센_탱커.승수);
	fprintf(savefile, "레이센_탱커패배=%d\n", 레이센_탱커.패수);
	fprintf(savefile, "레이센_탱커승률=%2lf\n", 레이센_탱커.승률);
	fprintf(savefile, "레이센_탱커레이팅=%d\n", 레이센_탱커.레이팅);
	fprintf(savefile, "레이센_탱커연승=%d\n", 레이센_탱커.연승);
	fprintf(savefile, "레이센_탱커연패=%d\n", 레이센_탱커.연패);
	fprintf(savefile, "레이센_탱커킬=%d\n", 레이센_탱커.킬);
	fprintf(savefile, "레이센_탱커데스=%d\n", 레이센_탱커.데스);
	fprintf(savefile, "레이센_탱커어시스트=%d\n", 레이센_탱커.어시스트);
	fprintf(savefile, "레이센_탱커백조의부름=%d\n", 레이센_탱커.백조의부름);
	fprintf(savefile, "레이센_탱커회복의삼지창=%d\n", 레이센_탱커.회복의삼지창);
	fprintf(savefile, "레이센_탱커밤의사냥꾼=%d\n", 레이센_탱커.밤의사냥꾼);
	fprintf(savefile, "레이센_탱커비겁한고블린=%d\n", 레이센_탱커.비겁한고블린);
	fprintf(savefile, "레이센_탱커깨달음=%d\n", 레이센_탱커.깨달음);
	fprintf(savefile, "레이센_탱커흑마법=%d\n", 레이센_탱커.흑마법);
	fprintf(savefile, "레이센_탱커음과양=%d\n", 레이센_탱커.음과양의조화);
	fprintf(savefile, "레이센_탱커아레스=%d\n", 레이센_탱커.아레스의투구);
	fprintf(savefile, "레이센_탱커라식=%d\n", 레이센_탱커.라식);
	fprintf(savefile, "레이센_탱커장화=%d\n", 레이센_탱커.축복의장화);
	fprintf(savefile, "레이센_탱커반지=%d\n", 레이센_탱커.신비로운반지);
	fprintf(savefile, "레이센_탱커치명적인탄환=%d\n", 레이센_탱커.치명적인탄환);
	fprintf(savefile, "레이센_탱커깨물기=%d\n", 레이센_탱커.깨물기);
	fprintf(savefile, "레이센_탱커이동의즐거움=%d\n", 레이센_탱커.이동의즐거움);
	fprintf(savefile, "레이센_탱커판다렌=%d\n", 레이센_탱커.판다렌의화염작렬);
	fprintf(savefile, "레이센_탱커마법부스터=%d\n", 레이센_탱커.마법부스터);
	fprintf(savefile, "레이센_탱커단단한벽=%d\n", 레이센_탱커.단단한벽);
	fprintf(savefile, "레이센_탱커마법의망토=%d\n", 레이센_탱커.마법의망토);
	fprintf(savefile, "레이센_탱커고대신비마법서=%d\n", 레이센_탱커.고대신비의마법서);
	fprintf(savefile, "레이센_탱커산뜻한기분=%d\n", 레이센_탱커.산뜻한기분);
	fprintf(savefile, "레이센_탱커갈망의검=%d\n", 레이센_탱커.갈망의검);
	fprintf(savefile, "레이센_탱커지배전투의기본=%d\n", 레이센_탱커.지배전투의기본);
	fprintf(savefile, "레이센_탱커지배푸른영기=%d\n", 레이센_탱커.지배푸른영기);
	fprintf(savefile, "레이센_탱커마법전투의기본=%d\n", 레이센_탱커.마법전투의기본);
	fprintf(savefile, "레이센_탱커마법푸른영기=%d\n", 레이센_탱커.마법푸른영기);
	fprintf(savefile, "레이센_탱커강인한체력=%d\n", 레이센_탱커.강인한체력);
	fprintf(savefile, "레이센_탱커활력증진=%d\n", 레이센_탱커.활력증진);
	fprintf(savefile, "레이센_탱커저돌적인공격방식=%d\n", 레이센_탱커.저돌적인공격방식);
	fprintf(savefile, "레이센_탱커신비한공격방식=%d\n", 레이센_탱커.신비한공격방식);
	fprintf(savefile, "레이센_탱커투쟁갑옷무력화=%d\n", 레이센_탱커.투쟁갑옷무력화);
	fprintf(savefile, "레이센_탱커투쟁저항무력화=%d\n", 레이센_탱커.투쟁저항무력화);
	fprintf(savefile, "레이센_탱커지배갑옷무력화=%d\n", 레이센_탱커.지배갑옷무력화);
	fprintf(savefile, "레이센_탱커지배저항무력화=%d\n", 레이센_탱커.지배저항무력화);
	fprintf(savefile, "레이센_탱커마법갑옷무력화=%d\n", 레이센_탱커.마법갑옷무력화);
	fprintf(savefile, "레이센_탱커마법저항무력화=%d\n", 레이센_탱커.마법저항무력화);
	fprintf(savefile, "레이센_탱커신비의방패=%d\n", 레이센_탱커.신비의방패);
	fprintf(savefile, "레이센_탱커저항의방패=%d\n", 레이센_탱커.저항의방패);
	fprintf(savefile, "레이센_탱커경험치사기꾼=%d\n", 레이센_탱커.경험치사기꾼);
	fprintf(savefile, "레이센_탱커골드도둑=%d\n", 레이센_탱커.골드도둑);
	fprintf(savefile, "레이센_탱커투쟁타격용분=%d\n", 레이센_탱커.투쟁타격용분);
	fprintf(savefile, "레이센_탱커투쟁마법용분=%d\n", 레이센_탱커.투쟁마법용분);
	fprintf(savefile, "레이센_탱커지배물리용분=%d\n", 레이센_탱커.지배물리용분);
	fprintf(savefile, "레이센_탱커지배마법용분=%d\n", 레이센_탱커.지배마법용분);
	fprintf(savefile, "레이센_탱커마법물리용분=%d\n", 레이센_탱커.마법물리용분);
	fprintf(savefile, "레이센_탱커마법마법용분=%d\n", 레이센_탱커.마법마법용분);
	fprintf(savefile, "레이센_탱커긍지최후의방어=%d\n", 레이센_탱커.긍지최후의방어);
	fprintf(savefile, "레이센_탱커축복최후의방어=%d\n", 레이센_탱커.축복최후의방어);
	fprintf(savefile, "레이센_탱커집중사격=%d\n", 레이센_탱커.집중사격);
	fprintf(savefile, "레이센_탱커무자비한연사=%d\n", 레이센_탱커.무자비한연사);
	fprintf(savefile, "레이센_탱커환상적인공격=%d\n", 레이센_탱커.환상적인공격);
	fprintf(savefile, "레이센_탱커제우스의분노=%d\n", 레이센_탱커.제우스의분노);
	fprintf(savefile, "레이센_탱커오디세우스의성검=%d\n", 레이센_탱커.오디세우스의성검);
	fprintf(savefile, "레이센_탱커대마법신비로운메테오=%d\n", 레이센_탱커.대마법신비로운메테오);
	fprintf(savefile, "레이센_탱커마법펀치=%d\n", 레이센_탱커.마법펀치);
	fprintf(savefile, "레이센_탱커곰발바닥=%d\n", 레이센_탱커.곰발바닥);
	fprintf(savefile, "레이센_탱커토르의분노=%d\n", 레이센_탱커.토르의분노);
	fprintf(savefile, "레이센_탱커마법의점멸=%d\n", 레이센_탱커.마법의점멸);
	fprintf(savefile, "레이센_탱커신의가호=%d\n", 레이센_탱커.신의가호);
	//레이센_하이브리드
	fprintf(savefile, "레이센_하이브리드플레이횟수=%d\n", 레이센_하이브리드.게임횟수);
	fprintf(savefile, "레이센_하이브리드승리=%d\n", 레이센_하이브리드.승수);
	fprintf(savefile, "레이센_하이브리드패배=%d\n", 레이센_하이브리드.패수);
	fprintf(savefile, "레이센_하이브리드승률=%2lf\n", 레이센_하이브리드.승률);
	fprintf(savefile, "레이센_하이브리드레이팅=%d\n", 레이센_하이브리드.레이팅);
	fprintf(savefile, "레이센_하이브리드연승=%d\n", 레이센_하이브리드.연승);
	fprintf(savefile, "레이센_하이브리드연패=%d\n", 레이센_하이브리드.연패);
	fprintf(savefile, "레이센_하이브리드킬=%d\n", 레이센_하이브리드.킬);
	fprintf(savefile, "레이센_하이브리드데스=%d\n", 레이센_하이브리드.데스);
	fprintf(savefile, "레이센_하이브리드어시스트=%d\n", 레이센_하이브리드.어시스트);
	fprintf(savefile, "레이센_하이브리드백조의부름=%d\n", 레이센_하이브리드.백조의부름);
	fprintf(savefile, "레이센_하이브리드회복의삼지창=%d\n", 레이센_하이브리드.회복의삼지창);
	fprintf(savefile, "레이센_하이브리드밤의사냥꾼=%d\n", 레이센_하이브리드.밤의사냥꾼);
	fprintf(savefile, "레이센_하이브리드비겁한고블린=%d\n", 레이센_하이브리드.비겁한고블린);
	fprintf(savefile, "레이센_하이브리드깨달음=%d\n", 레이센_하이브리드.깨달음);
	fprintf(savefile, "레이센_하이브리드흑마법=%d\n", 레이센_하이브리드.흑마법);
	fprintf(savefile, "레이센_하이브리드음과양=%d\n", 레이센_하이브리드.음과양의조화);
	fprintf(savefile, "레이센_하이브리드아레스=%d\n", 레이센_하이브리드.아레스의투구);
	fprintf(savefile, "레이센_하이브리드라식=%d\n", 레이센_하이브리드.라식);
	fprintf(savefile, "레이센_하이브리드장화=%d\n", 레이센_하이브리드.축복의장화);
	fprintf(savefile, "레이센_하이브리드반지=%d\n", 레이센_하이브리드.신비로운반지);
	fprintf(savefile, "레이센_하이브리드치명적인탄환=%d\n", 레이센_하이브리드.치명적인탄환);
	fprintf(savefile, "레이센_하이브리드깨물기=%d\n", 레이센_하이브리드.깨물기);
	fprintf(savefile, "레이센_하이브리드이동의즐거움=%d\n", 레이센_하이브리드.이동의즐거움);
	fprintf(savefile, "레이센_하이브리드판다렌=%d\n", 레이센_하이브리드.판다렌의화염작렬);
	fprintf(savefile, "레이센_하이브리드마법부스터=%d\n", 레이센_하이브리드.마법부스터);
	fprintf(savefile, "레이센_하이브리드단단한벽=%d\n", 레이센_하이브리드.단단한벽);
	fprintf(savefile, "레이센_하이브리드마법의망토=%d\n", 레이센_하이브리드.마법의망토);
	fprintf(savefile, "레이센_하이브리드고대신비마법서=%d\n", 레이센_하이브리드.고대신비의마법서);
	fprintf(savefile, "레이센_하이브리드산뜻한기분=%d\n", 레이센_하이브리드.산뜻한기분);
	fprintf(savefile, "레이센_하이브리드갈망의검=%d\n", 레이센_하이브리드.갈망의검);
	fprintf(savefile, "레이센_하이브리드지배전투의기본=%d\n", 레이센_하이브리드.지배전투의기본);
	fprintf(savefile, "레이센_하이브리드지배푸른영기=%d\n", 레이센_하이브리드.지배푸른영기);
	fprintf(savefile, "레이센_하이브리드마법전투의기본=%d\n", 레이센_하이브리드.마법전투의기본);
	fprintf(savefile, "레이센_하이브리드마법푸른영기=%d\n", 레이센_하이브리드.마법푸른영기);
	fprintf(savefile, "레이센_하이브리드강인한체력=%d\n", 레이센_하이브리드.강인한체력);
	fprintf(savefile, "레이센_하이브리드활력증진=%d\n", 레이센_하이브리드.활력증진);
	fprintf(savefile, "레이센_하이브리드저돌적인공격방식=%d\n", 레이센_하이브리드.저돌적인공격방식);
	fprintf(savefile, "레이센_하이브리드신비한공격방식=%d\n", 레이센_하이브리드.신비한공격방식);
	fprintf(savefile, "레이센_하이브리드투쟁갑옷무력화=%d\n", 레이센_하이브리드.투쟁갑옷무력화);
	fprintf(savefile, "레이센_하이브리드투쟁저항무력화=%d\n", 레이센_하이브리드.투쟁저항무력화);
	fprintf(savefile, "레이센_하이브리드지배갑옷무력화=%d\n", 레이센_하이브리드.지배갑옷무력화);
	fprintf(savefile, "레이센_하이브리드지배저항무력화=%d\n", 레이센_하이브리드.지배저항무력화);
	fprintf(savefile, "레이센_하이브리드마법갑옷무력화=%d\n", 레이센_하이브리드.마법갑옷무력화);
	fprintf(savefile, "레이센_하이브리드마법저항무력화=%d\n", 레이센_하이브리드.마법저항무력화);
	fprintf(savefile, "레이센_하이브리드신비의방패=%d\n", 레이센_하이브리드.신비의방패);
	fprintf(savefile, "레이센_하이브리드저항의방패=%d\n", 레이센_하이브리드.저항의방패);
	fprintf(savefile, "레이센_하이브리드경험치사기꾼=%d\n", 레이센_하이브리드.경험치사기꾼);
	fprintf(savefile, "레이센_하이브리드골드도둑=%d\n", 레이센_하이브리드.골드도둑);
	fprintf(savefile, "레이센_하이브리드투쟁타격용분=%d\n", 레이센_하이브리드.투쟁타격용분);
	fprintf(savefile, "레이센_하이브리드투쟁마법용분=%d\n", 레이센_하이브리드.투쟁마법용분);
	fprintf(savefile, "레이센_하이브리드지배물리용분=%d\n", 레이센_하이브리드.지배물리용분);
	fprintf(savefile, "레이센_하이브리드지배마법용분=%d\n", 레이센_하이브리드.지배마법용분);
	fprintf(savefile, "레이센_하이브리드마법물리용분=%d\n", 레이센_하이브리드.마법물리용분);
	fprintf(savefile, "레이센_하이브리드마법마법용분=%d\n", 레이센_하이브리드.마법마법용분);
	fprintf(savefile, "레이센_하이브리드긍지최후의방어=%d\n", 레이센_하이브리드.긍지최후의방어);
	fprintf(savefile, "레이센_하이브리드축복최후의방어=%d\n", 레이센_하이브리드.축복최후의방어);
	fprintf(savefile, "레이센_하이브리드집중사격=%d\n", 레이센_하이브리드.집중사격);
	fprintf(savefile, "레이센_하이브리드무자비한연사=%d\n", 레이센_하이브리드.무자비한연사);
	fprintf(savefile, "레이센_하이브리드환상적인공격=%d\n", 레이센_하이브리드.환상적인공격);
	fprintf(savefile, "레이센_하이브리드제우스의분노=%d\n", 레이센_하이브리드.제우스의분노);
	fprintf(savefile, "레이센_하이브리드오디세우스의성검=%d\n", 레이센_하이브리드.오디세우스의성검);
	fprintf(savefile, "레이센_하이브리드대마법신비로운메테오=%d\n", 레이센_하이브리드.대마법신비로운메테오);
	fprintf(savefile, "레이센_하이브리드마법펀치=%d\n", 레이센_하이브리드.마법펀치);
	fprintf(savefile, "레이센_하이브리드곰발바닥=%d\n", 레이센_하이브리드.곰발바닥);
	fprintf(savefile, "레이센_하이브리드토르의분노=%d\n", 레이센_하이브리드.토르의분노);
	fprintf(savefile, "레이센_하이브리드마법의점멸=%d\n", 레이센_하이브리드.마법의점멸);
	fprintf(savefile, "레이센_하이브리드신의가호=%d\n", 레이센_하이브리드.신의가호);
	//레밀리아
	fprintf(savefile, "레밀리아플레이횟수=%d\n", 레밀리아.게임횟수);
	fprintf(savefile, "레밀리아승리=%d\n", 레밀리아.승수);
	fprintf(savefile, "레밀리아패배=%d\n", 레밀리아.패수);
	fprintf(savefile, "레밀리아승률=%2lf\n", 레밀리아.승률);
	fprintf(savefile, "레밀리아레이팅=%d\n", 레밀리아.레이팅);
	fprintf(savefile, "레밀리아연승=%d\n", 레밀리아.연승);
	fprintf(savefile, "레밀리아연패=%d\n", 레밀리아.연패);
	fprintf(savefile, "레밀리아킬=%d\n", 레밀리아.킬);
	fprintf(savefile, "레밀리아데스=%d\n", 레밀리아.데스);
	fprintf(savefile, "레밀리아어시스트=%d\n", 레밀리아.어시스트);
	fprintf(savefile, "레밀리아백조의부름=%d\n", 레밀리아.백조의부름);
	fprintf(savefile, "레밀리아회복의삼지창=%d\n", 레밀리아.회복의삼지창);
	fprintf(savefile, "레밀리아밤의사냥꾼=%d\n", 레밀리아.밤의사냥꾼);
	fprintf(savefile, "레밀리아비겁한고블린=%d\n", 레밀리아.비겁한고블린);
	fprintf(savefile, "레밀리아깨달음=%d\n", 레밀리아.깨달음);
	fprintf(savefile, "레밀리아흑마법=%d\n", 레밀리아.흑마법);
	fprintf(savefile, "레밀리아음과양=%d\n", 레밀리아.음과양의조화);
	fprintf(savefile, "레밀리아아레스=%d\n", 레밀리아.아레스의투구);
	fprintf(savefile, "레밀리아라식=%d\n", 레밀리아.라식);
	fprintf(savefile, "레밀리아장화=%d\n", 레밀리아.축복의장화);
	fprintf(savefile, "레밀리아반지=%d\n", 레밀리아.신비로운반지);
	fprintf(savefile, "레밀리아치명적인탄환=%d\n", 레밀리아.치명적인탄환);
	fprintf(savefile, "레밀리아깨물기=%d\n", 레밀리아.깨물기);
	fprintf(savefile, "레밀리아이동의즐거움=%d\n", 레밀리아.이동의즐거움);
	fprintf(savefile, "레밀리아판다렌=%d\n", 레밀리아.판다렌의화염작렬);
	fprintf(savefile, "레밀리아마법부스터=%d\n", 레밀리아.마법부스터);
	fprintf(savefile, "레밀리아단단한벽=%d\n", 레밀리아.단단한벽);
	fprintf(savefile, "레밀리아마법의망토=%d\n", 레밀리아.마법의망토);
	fprintf(savefile, "레밀리아고대신비마법서=%d\n", 레밀리아.고대신비의마법서);
	fprintf(savefile, "레밀리아산뜻한기분=%d\n", 레밀리아.산뜻한기분);
	fprintf(savefile, "레밀리아갈망의검=%d\n", 레밀리아.갈망의검);
	fprintf(savefile, "레밀리아지배전투의기본=%d\n", 레밀리아.지배전투의기본);
	fprintf(savefile, "레밀리아지배푸른영기=%d\n", 레밀리아.지배푸른영기);
	fprintf(savefile, "레밀리아마법전투의기본=%d\n", 레밀리아.마법전투의기본);
	fprintf(savefile, "레밀리아마법푸른영기=%d\n", 레밀리아.마법푸른영기);
	fprintf(savefile, "레밀리아강인한체력=%d\n", 레밀리아.강인한체력);
	fprintf(savefile, "레밀리아활력증진=%d\n", 레밀리아.활력증진);
	fprintf(savefile, "레밀리아저돌적인공격방식=%d\n", 레밀리아.저돌적인공격방식);
	fprintf(savefile, "레밀리아신비한공격방식=%d\n", 레밀리아.신비한공격방식);
	fprintf(savefile, "레밀리아투쟁갑옷무력화=%d\n", 레밀리아.투쟁갑옷무력화);
	fprintf(savefile, "레밀리아투쟁저항무력화=%d\n", 레밀리아.투쟁저항무력화);
	fprintf(savefile, "레밀리아지배갑옷무력화=%d\n", 레밀리아.지배갑옷무력화);
	fprintf(savefile, "레밀리아지배저항무력화=%d\n", 레밀리아.지배저항무력화);
	fprintf(savefile, "레밀리아마법갑옷무력화=%d\n", 레밀리아.마법갑옷무력화);
	fprintf(savefile, "레밀리아마법저항무력화=%d\n", 레밀리아.마법저항무력화);
	fprintf(savefile, "레밀리아신비의방패=%d\n", 레밀리아.신비의방패);
	fprintf(savefile, "레밀리아저항의방패=%d\n", 레밀리아.저항의방패);
	fprintf(savefile, "레밀리아경험치사기꾼=%d\n", 레밀리아.경험치사기꾼);
	fprintf(savefile, "레밀리아골드도둑=%d\n", 레밀리아.골드도둑);
	fprintf(savefile, "레밀리아투쟁타격용분=%d\n", 레밀리아.투쟁타격용분);
	fprintf(savefile, "레밀리아투쟁마법용분=%d\n", 레밀리아.투쟁마법용분);
	fprintf(savefile, "레밀리아지배물리용분=%d\n", 레밀리아.지배물리용분);
	fprintf(savefile, "레밀리아지배마법용분=%d\n", 레밀리아.지배마법용분);
	fprintf(savefile, "레밀리아마법물리용분=%d\n", 레밀리아.마법물리용분);
	fprintf(savefile, "레밀리아마법마법용분=%d\n", 레밀리아.마법마법용분);
	fprintf(savefile, "레밀리아긍지최후의방어=%d\n", 레밀리아.긍지최후의방어);
	fprintf(savefile, "레밀리아축복최후의방어=%d\n", 레밀리아.축복최후의방어);
	fprintf(savefile, "레밀리아집중사격=%d\n", 레밀리아.집중사격);
	fprintf(savefile, "레밀리아무자비한연사=%d\n", 레밀리아.무자비한연사);
	fprintf(savefile, "레밀리아환상적인공격=%d\n", 레밀리아.환상적인공격);
	fprintf(savefile, "레밀리아제우스의분노=%d\n", 레밀리아.제우스의분노);
	fprintf(savefile, "레밀리아오디세우스의성검=%d\n", 레밀리아.오디세우스의성검);
	fprintf(savefile, "레밀리아대마법신비로운메테오=%d\n", 레밀리아.대마법신비로운메테오);
	fprintf(savefile, "레밀리아마법펀치=%d\n", 레밀리아.마법펀치);
	fprintf(savefile, "레밀리아곰발바닥=%d\n", 레밀리아.곰발바닥);
	fprintf(savefile, "레밀리아토르의분노=%d\n", 레밀리아.토르의분노);
	fprintf(savefile, "레밀리아마법의점멸=%d\n", 레밀리아.마법의점멸);
	fprintf(savefile, "레밀리아신의가호=%d\n", 레밀리아.신의가호);
	//플랑드르
	fprintf(savefile, "플랑도르플레이횟수=%d\n", 플랑도르.게임횟수);
	fprintf(savefile, "플랑도르승리=%d\n", 플랑도르.승수);
	fprintf(savefile, "플랑도르패배=%d\n", 플랑도르.패수);
	fprintf(savefile, "플랑도르승률=%2lf\n", 플랑도르.승률);
	fprintf(savefile, "플랑도르레이팅=%d\n", 플랑도르.레이팅);
	fprintf(savefile, "플랑도르연승=%d\n", 플랑도르.연승);
	fprintf(savefile, "플랑도르연패=%d\n", 플랑도르.연패);
	fprintf(savefile, "플랑도르킬=%d\n", 플랑도르.킬);
	fprintf(savefile, "플랑도르데스=%d\n", 플랑도르.데스);
	fprintf(savefile, "플랑도르어시스트=%d\n", 플랑도르.어시스트);
	fprintf(savefile, "플랑도르백조의부름=%d\n", 플랑도르.백조의부름);
	fprintf(savefile, "플랑도르회복의삼지창=%d\n", 플랑도르.회복의삼지창);
	fprintf(savefile, "플랑도르밤의사냥꾼=%d\n", 플랑도르.밤의사냥꾼);
	fprintf(savefile, "플랑도르비겁한고블린=%d\n", 플랑도르.비겁한고블린);
	fprintf(savefile, "플랑도르깨달음=%d\n", 플랑도르.깨달음);
	fprintf(savefile, "플랑도르흑마법=%d\n", 플랑도르.흑마법);
	fprintf(savefile, "플랑도르음과양=%d\n", 플랑도르.음과양의조화);
	fprintf(savefile, "플랑도르아레스=%d\n", 플랑도르.아레스의투구);
	fprintf(savefile, "플랑도르라식=%d\n", 플랑도르.라식);
	fprintf(savefile, "플랑도르장화=%d\n", 플랑도르.축복의장화);
	fprintf(savefile, "플랑도르반지=%d\n", 플랑도르.신비로운반지);
	fprintf(savefile, "플랑도르치명적인탄환=%d\n", 플랑도르.치명적인탄환);
	fprintf(savefile, "플랑도르깨물기=%d\n", 플랑도르.깨물기);
	fprintf(savefile, "플랑도르이동의즐거움=%d\n", 플랑도르.이동의즐거움);
	fprintf(savefile, "플랑도르판다렌=%d\n", 플랑도르.판다렌의화염작렬);
	fprintf(savefile, "플랑도르마법부스터=%d\n", 플랑도르.마법부스터);
	fprintf(savefile, "플랑도르단단한벽=%d\n", 플랑도르.단단한벽);
	fprintf(savefile, "플랑도르마법의망토=%d\n", 플랑도르.마법의망토);
	fprintf(savefile, "플랑도르고대신비마법서=%d\n", 플랑도르.고대신비의마법서);
	fprintf(savefile, "플랑도르산뜻한기분=%d\n", 플랑도르.산뜻한기분);
	fprintf(savefile, "플랑도르갈망의검=%d\n", 플랑도르.갈망의검);
	fprintf(savefile, "플랑도르지배전투의기본=%d\n", 플랑도르.지배전투의기본);
	fprintf(savefile, "플랑도르지배푸른영기=%d\n", 플랑도르.지배푸른영기);
	fprintf(savefile, "플랑도르마법전투의기본=%d\n", 플랑도르.마법전투의기본);
	fprintf(savefile, "플랑도르마법푸른영기=%d\n", 플랑도르.마법푸른영기);
	fprintf(savefile, "플랑도르강인한체력=%d\n", 플랑도르.강인한체력);
	fprintf(savefile, "플랑도르활력증진=%d\n", 플랑도르.활력증진);
	fprintf(savefile, "플랑도르저돌적인공격방식=%d\n", 플랑도르.저돌적인공격방식);
	fprintf(savefile, "플랑도르신비한공격방식=%d\n", 플랑도르.신비한공격방식);
	fprintf(savefile, "플랑도르투쟁갑옷무력화=%d\n", 플랑도르.투쟁갑옷무력화);
	fprintf(savefile, "플랑도르투쟁저항무력화=%d\n", 플랑도르.투쟁저항무력화);
	fprintf(savefile, "플랑도르지배갑옷무력화=%d\n", 플랑도르.지배갑옷무력화);
	fprintf(savefile, "플랑도르지배저항무력화=%d\n", 플랑도르.지배저항무력화);
	fprintf(savefile, "플랑도르마법갑옷무력화=%d\n", 플랑도르.마법갑옷무력화);
	fprintf(savefile, "플랑도르마법저항무력화=%d\n", 플랑도르.마법저항무력화);
	fprintf(savefile, "플랑도르신비의방패=%d\n", 플랑도르.신비의방패);
	fprintf(savefile, "플랑도르저항의방패=%d\n", 플랑도르.저항의방패);
	fprintf(savefile, "플랑도르경험치사기꾼=%d\n", 플랑도르.경험치사기꾼);
	fprintf(savefile, "플랑도르골드도둑=%d\n", 플랑도르.골드도둑);
	fprintf(savefile, "플랑도르투쟁타격용분=%d\n", 플랑도르.투쟁타격용분);
	fprintf(savefile, "플랑도르투쟁마법용분=%d\n", 플랑도르.투쟁마법용분);
	fprintf(savefile, "플랑도르지배물리용분=%d\n", 플랑도르.지배물리용분);
	fprintf(savefile, "플랑도르지배마법용분=%d\n", 플랑도르.지배마법용분);
	fprintf(savefile, "플랑도르마법물리용분=%d\n", 플랑도르.마법물리용분);
	fprintf(savefile, "플랑도르마법마법용분=%d\n", 플랑도르.마법마법용분);
	fprintf(savefile, "플랑도르긍지최후의방어=%d\n", 플랑도르.긍지최후의방어);
	fprintf(savefile, "플랑도르축복최후의방어=%d\n", 플랑도르.축복최후의방어);
	fprintf(savefile, "플랑도르집중사격=%d\n", 플랑도르.집중사격);
	fprintf(savefile, "플랑도르무자비한연사=%d\n", 플랑도르.무자비한연사);
	fprintf(savefile, "플랑도르환상적인공격=%d\n", 플랑도르.환상적인공격);
	fprintf(savefile, "플랑도르제우스의분노=%d\n", 플랑도르.제우스의분노);
	fprintf(savefile, "플랑도르오디세우스의성검=%d\n", 플랑도르.오디세우스의성검);
	fprintf(savefile, "플랑도르대마법신비로운메테오=%d\n", 플랑도르.대마법신비로운메테오);
	fprintf(savefile, "플랑도르마법펀치=%d\n", 플랑도르.마법펀치);
	fprintf(savefile, "플랑도르곰발바닥=%d\n", 플랑도르.곰발바닥);
	fprintf(savefile, "플랑도르토르의분노=%d\n", 플랑도르.토르의분노);
	fprintf(savefile, "플랑도르마법의점멸=%d\n", 플랑도르.마법의점멸);
	fprintf(savefile, "플랑도르신의가호=%d\n", 플랑도르.신의가호);
	//흑화치르노
	fprintf(savefile, "흑화치르노플레이횟수=%d\n", 흑화치르노.게임횟수);
	fprintf(savefile, "흑화치르노승리=%d\n", 흑화치르노.승수);
	fprintf(savefile, "흑화치르노패배=%d\n", 흑화치르노.패수);
	fprintf(savefile, "흑화치르노승률=%2lf\n", 흑화치르노.승률);
	fprintf(savefile, "흑화치르노레이팅=%d\n", 흑화치르노.레이팅);
	fprintf(savefile, "흑화치르노연승=%d\n", 흑화치르노.연승);
	fprintf(savefile, "흑화치르노연패=%d\n", 흑화치르노.연패);
	fprintf(savefile, "흑화치르노킬=%d\n", 흑화치르노.킬);
	fprintf(savefile, "흑화치르노데스=%d\n", 흑화치르노.데스);
	fprintf(savefile, "흑화치르노어시스트=%d\n", 흑화치르노.어시스트);
	fprintf(savefile, "흑화치르노백조의부름=%d\n", 흑화치르노.백조의부름);
	fprintf(savefile, "흑화치르노회복의삼지창=%d\n", 흑화치르노.회복의삼지창);
	fprintf(savefile, "흑화치르노밤의사냥꾼=%d\n", 흑화치르노.밤의사냥꾼);
	fprintf(savefile, "흑화치르노비겁한고블린=%d\n", 흑화치르노.비겁한고블린);
	fprintf(savefile, "흑화치르노깨달음=%d\n", 흑화치르노.깨달음);
	fprintf(savefile, "흑화치르노흑마법=%d\n", 흑화치르노.흑마법);
	fprintf(savefile, "흑화치르노음과양=%d\n", 흑화치르노.음과양의조화);
	fprintf(savefile, "흑화치르노아레스=%d\n", 흑화치르노.아레스의투구);
	fprintf(savefile, "흑화치르노라식=%d\n", 흑화치르노.라식);
	fprintf(savefile, "흑화치르노장화=%d\n", 흑화치르노.축복의장화);
	fprintf(savefile, "흑화치르노반지=%d\n", 흑화치르노.신비로운반지);
	fprintf(savefile, "흑화치르노치명적인탄환=%d\n", 흑화치르노.치명적인탄환);
	fprintf(savefile, "흑화치르노깨물기=%d\n", 흑화치르노.깨물기);
	fprintf(savefile, "흑화치르노이동의즐거움=%d\n", 흑화치르노.이동의즐거움);
	fprintf(savefile, "흑화치르노판다렌=%d\n", 흑화치르노.판다렌의화염작렬);
	fprintf(savefile, "흑화치르노마법부스터=%d\n", 흑화치르노.마법부스터);
	fprintf(savefile, "흑화치르노단단한벽=%d\n", 흑화치르노.단단한벽);
	fprintf(savefile, "흑화치르노마법의망토=%d\n", 흑화치르노.마법의망토);
	fprintf(savefile, "흑화치르노고대신비마법서=%d\n", 흑화치르노.고대신비의마법서);
	fprintf(savefile, "흑화치르노산뜻한기분=%d\n", 흑화치르노.산뜻한기분);
	fprintf(savefile, "흑화치르노갈망의검=%d\n", 흑화치르노.갈망의검);
	fprintf(savefile, "흑화치르노지배전투의기본=%d\n", 흑화치르노.지배전투의기본);
	fprintf(savefile, "흑화치르노지배푸른영기=%d\n", 흑화치르노.지배푸른영기);
	fprintf(savefile, "흑화치르노마법전투의기본=%d\n", 흑화치르노.마법전투의기본);
	fprintf(savefile, "흑화치르노마법푸른영기=%d\n", 흑화치르노.마법푸른영기);
	fprintf(savefile, "흑화치르노강인한체력=%d\n", 흑화치르노.강인한체력);
	fprintf(savefile, "흑화치르노활력증진=%d\n", 흑화치르노.활력증진);
	fprintf(savefile, "흑화치르노저돌적인공격방식=%d\n", 흑화치르노.저돌적인공격방식);
	fprintf(savefile, "흑화치르노신비한공격방식=%d\n", 흑화치르노.신비한공격방식);
	fprintf(savefile, "흑화치르노투쟁갑옷무력화=%d\n", 흑화치르노.투쟁갑옷무력화);
	fprintf(savefile, "흑화치르노투쟁저항무력화=%d\n", 흑화치르노.투쟁저항무력화);
	fprintf(savefile, "흑화치르노지배갑옷무력화=%d\n", 흑화치르노.지배갑옷무력화);
	fprintf(savefile, "흑화치르노지배저항무력화=%d\n", 흑화치르노.지배저항무력화);
	fprintf(savefile, "흑화치르노마법갑옷무력화=%d\n", 흑화치르노.마법갑옷무력화);
	fprintf(savefile, "흑화치르노마법저항무력화=%d\n", 흑화치르노.마법저항무력화);
	fprintf(savefile, "흑화치르노신비의방패=%d\n", 흑화치르노.신비의방패);
	fprintf(savefile, "흑화치르노저항의방패=%d\n", 흑화치르노.저항의방패);
	fprintf(savefile, "흑화치르노경험치사기꾼=%d\n", 흑화치르노.경험치사기꾼);
	fprintf(savefile, "흑화치르노골드도둑=%d\n", 흑화치르노.골드도둑);
	fprintf(savefile, "흑화치르노투쟁타격용분=%d\n", 흑화치르노.투쟁타격용분);
	fprintf(savefile, "흑화치르노투쟁마법용분=%d\n", 흑화치르노.투쟁마법용분);
	fprintf(savefile, "흑화치르노지배물리용분=%d\n", 흑화치르노.지배물리용분);
	fprintf(savefile, "흑화치르노지배마법용분=%d\n", 흑화치르노.지배마법용분);
	fprintf(savefile, "흑화치르노마법물리용분=%d\n", 흑화치르노.마법물리용분);
	fprintf(savefile, "흑화치르노마법마법용분=%d\n", 흑화치르노.마법마법용분);
	fprintf(savefile, "흑화치르노긍지최후의방어=%d\n", 흑화치르노.긍지최후의방어);
	fprintf(savefile, "흑화치르노축복최후의방어=%d\n", 흑화치르노.축복최후의방어);
	fprintf(savefile, "흑화치르노집중사격=%d\n", 흑화치르노.집중사격);
	fprintf(savefile, "흑화치르노무자비한연사=%d\n", 흑화치르노.무자비한연사);
	fprintf(savefile, "흑화치르노환상적인공격=%d\n", 흑화치르노.환상적인공격);
	fprintf(savefile, "흑화치르노제우스의분노=%d\n", 흑화치르노.제우스의분노);
	fprintf(savefile, "흑화치르노오디세우스의성검=%d\n", 흑화치르노.오디세우스의성검);
	fprintf(savefile, "흑화치르노대마법신비로운메테오=%d\n", 흑화치르노.대마법신비로운메테오);
	fprintf(savefile, "흑화치르노마법펀치=%d\n", 흑화치르노.마법펀치);
	fprintf(savefile, "흑화치르노곰발바닥=%d\n", 흑화치르노.곰발바닥);
	fprintf(savefile, "흑화치르노토르의분노=%d\n", 흑화치르노.토르의분노);
	fprintf(savefile, "흑화치르노마법의점멸=%d\n", 흑화치르노.마법의점멸);
	fprintf(savefile, "흑화치르노신의가호=%d\n", 흑화치르노.신의가호);
	//어묭_r1
	fprintf(savefile, "어드밴스드요우무_r1플레이횟수=%d\n", 어드밴스드요우무_r1.게임횟수);
	fprintf(savefile, "어드밴스드요우무_r1승리=%d\n", 어드밴스드요우무_r1.승수);
	fprintf(savefile, "어드밴스드요우무_r1패배=%d\n", 어드밴스드요우무_r1.패수);
	fprintf(savefile, "어드밴스드요우무_r1승률=%2lf\n", 어드밴스드요우무_r1.승률);
	fprintf(savefile, "어드밴스드요우무_r1레이팅=%d\n", 어드밴스드요우무_r1.레이팅);
	fprintf(savefile, "어드밴스드요우무_r1연승=%d\n", 어드밴스드요우무_r1.연승);
	fprintf(savefile, "어드밴스드요우무_r1연패=%d\n", 어드밴스드요우무_r1.연패);
	fprintf(savefile, "어드밴스드요우무_r1킬=%d\n", 어드밴스드요우무_r1.킬);
	fprintf(savefile, "어드밴스드요우무_r1데스=%d\n", 어드밴스드요우무_r1.데스);
	fprintf(savefile, "어드밴스드요우무_r1어시스트=%d\n", 어드밴스드요우무_r1.어시스트);
	fprintf(savefile, "어드밴스드요우무_r1백조의부름=%d\n", 어드밴스드요우무_r1.백조의부름);
	fprintf(savefile, "어드밴스드요우무_r1회복의삼지창=%d\n", 어드밴스드요우무_r1.회복의삼지창);
	fprintf(savefile, "어드밴스드요우무_r1밤의사냥꾼=%d\n", 어드밴스드요우무_r1.밤의사냥꾼);
	fprintf(savefile, "어드밴스드요우무_r1비겁한고블린=%d\n", 어드밴스드요우무_r1.비겁한고블린);
	fprintf(savefile, "어드밴스드요우무_r1깨달음=%d\n", 어드밴스드요우무_r1.깨달음);
	fprintf(savefile, "어드밴스드요우무_r1흑마법=%d\n", 어드밴스드요우무_r1.흑마법);
	fprintf(savefile, "어드밴스드요우무_r1음과양=%d\n", 어드밴스드요우무_r1.음과양의조화);
	fprintf(savefile, "어드밴스드요우무_r1아레스=%d\n", 어드밴스드요우무_r1.아레스의투구);
	fprintf(savefile, "어드밴스드요우무_r1라식=%d\n", 어드밴스드요우무_r1.라식);
	fprintf(savefile, "어드밴스드요우무_r1장화=%d\n", 어드밴스드요우무_r1.축복의장화);
	fprintf(savefile, "어드밴스드요우무_r1반지=%d\n", 어드밴스드요우무_r1.신비로운반지);
	fprintf(savefile, "어드밴스드요우무_r1치명적인탄환=%d\n", 어드밴스드요우무_r1.치명적인탄환);
	fprintf(savefile, "어드밴스드요우무_r1깨물기=%d\n", 어드밴스드요우무_r1.깨물기);
	fprintf(savefile, "어드밴스드요우무_r1이동의즐거움=%d\n", 어드밴스드요우무_r1.이동의즐거움);
	fprintf(savefile, "어드밴스드요우무_r1판다렌=%d\n", 어드밴스드요우무_r1.판다렌의화염작렬);
	fprintf(savefile, "어드밴스드요우무_r1마법부스터=%d\n", 어드밴스드요우무_r1.마법부스터);
	fprintf(savefile, "어드밴스드요우무_r1단단한벽=%d\n", 어드밴스드요우무_r1.단단한벽);
	fprintf(savefile, "어드밴스드요우무_r1마법의망토=%d\n", 어드밴스드요우무_r1.마법의망토);
	fprintf(savefile, "어드밴스드요우무_r1고대신비마법서=%d\n", 어드밴스드요우무_r1.고대신비의마법서);
	fprintf(savefile, "어드밴스드요우무_r1산뜻한기분=%d\n", 어드밴스드요우무_r1.산뜻한기분);
	fprintf(savefile, "어드밴스드요우무_r1갈망의검=%d\n", 어드밴스드요우무_r1.갈망의검);
	fprintf(savefile, "어드밴스드요우무_r1지배전투의기본=%d\n", 어드밴스드요우무_r1.지배전투의기본);
	fprintf(savefile, "어드밴스드요우무_r1지배푸른영기=%d\n", 어드밴스드요우무_r1.지배푸른영기);
	fprintf(savefile, "어드밴스드요우무_r1마법전투의기본=%d\n", 어드밴스드요우무_r1.마법전투의기본);
	fprintf(savefile, "어드밴스드요우무_r1마법푸른영기=%d\n", 어드밴스드요우무_r1.마법푸른영기);
	fprintf(savefile, "어드밴스드요우무_r1강인한체력=%d\n", 어드밴스드요우무_r1.강인한체력);
	fprintf(savefile, "어드밴스드요우무_r1활력증진=%d\n", 어드밴스드요우무_r1.활력증진);
	fprintf(savefile, "어드밴스드요우무_r1저돌적인공격방식=%d\n", 어드밴스드요우무_r1.저돌적인공격방식);
	fprintf(savefile, "어드밴스드요우무_r1신비한공격방식=%d\n", 어드밴스드요우무_r1.신비한공격방식);
	fprintf(savefile, "어드밴스드요우무_r1투쟁갑옷무력화=%d\n", 어드밴스드요우무_r1.투쟁갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r1투쟁저항무력화=%d\n", 어드밴스드요우무_r1.투쟁저항무력화);
	fprintf(savefile, "어드밴스드요우무_r1지배갑옷무력화=%d\n", 어드밴스드요우무_r1.지배갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r1지배저항무력화=%d\n", 어드밴스드요우무_r1.지배저항무력화);
	fprintf(savefile, "어드밴스드요우무_r1마법갑옷무력화=%d\n", 어드밴스드요우무_r1.마법갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r1마법저항무력화=%d\n", 어드밴스드요우무_r1.마법저항무력화);
	fprintf(savefile, "어드밴스드요우무_r1신비의방패=%d\n", 어드밴스드요우무_r1.신비의방패);
	fprintf(savefile, "어드밴스드요우무_r1저항의방패=%d\n", 어드밴스드요우무_r1.저항의방패);
	fprintf(savefile, "어드밴스드요우무_r1경험치사기꾼=%d\n", 어드밴스드요우무_r1.경험치사기꾼);
	fprintf(savefile, "어드밴스드요우무_r1골드도둑=%d\n", 어드밴스드요우무_r1.골드도둑);
	fprintf(savefile, "어드밴스드요우무_r1투쟁타격용분=%d\n", 어드밴스드요우무_r1.투쟁타격용분);
	fprintf(savefile, "어드밴스드요우무_r1투쟁마법용분=%d\n", 어드밴스드요우무_r1.투쟁마법용분);
	fprintf(savefile, "어드밴스드요우무_r1지배물리용분=%d\n", 어드밴스드요우무_r1.지배물리용분);
	fprintf(savefile, "어드밴스드요우무_r1지배마법용분=%d\n", 어드밴스드요우무_r1.지배마법용분);
	fprintf(savefile, "어드밴스드요우무_r1마법물리용분=%d\n", 어드밴스드요우무_r1.마법물리용분);
	fprintf(savefile, "어드밴스드요우무_r1마법마법용분=%d\n", 어드밴스드요우무_r1.마법마법용분);
	fprintf(savefile, "어드밴스드요우무_r1긍지최후의방어=%d\n", 어드밴스드요우무_r1.긍지최후의방어);
	fprintf(savefile, "어드밴스드요우무_r1축복최후의방어=%d\n", 어드밴스드요우무_r1.축복최후의방어);
	fprintf(savefile, "어드밴스드요우무_r1집중사격=%d\n", 어드밴스드요우무_r1.집중사격);
	fprintf(savefile, "어드밴스드요우무_r1무자비한연사=%d\n", 어드밴스드요우무_r1.무자비한연사);
	fprintf(savefile, "어드밴스드요우무_r1환상적인공격=%d\n", 어드밴스드요우무_r1.환상적인공격);
	fprintf(savefile, "어드밴스드요우무_r1제우스의분노=%d\n", 어드밴스드요우무_r1.제우스의분노);
	fprintf(savefile, "어드밴스드요우무_r1오디세우스의성검=%d\n", 어드밴스드요우무_r1.오디세우스의성검);
	fprintf(savefile, "어드밴스드요우무_r1대마법신비로운메테오=%d\n", 어드밴스드요우무_r1.대마법신비로운메테오);
	fprintf(savefile, "어드밴스드요우무_r1마법펀치=%d\n", 어드밴스드요우무_r1.마법펀치);
	fprintf(savefile, "어드밴스드요우무_r1곰발바닥=%d\n", 어드밴스드요우무_r1.곰발바닥);
	fprintf(savefile, "어드밴스드요우무_r1토르의분노=%d\n", 어드밴스드요우무_r1.토르의분노);
	fprintf(savefile, "어드밴스드요우무_r1마법의점멸=%d\n", 어드밴스드요우무_r1.마법의점멸);
	fprintf(savefile, "어드밴스드요우무_r1신의가호=%d\n", 어드밴스드요우무_r1.신의가호);
	//r2
	fprintf(savefile, "어드밴스드요우무_r2플레이횟수=%d\n", 어드밴스드요우무_r2.게임횟수);
	fprintf(savefile, "어드밴스드요우무_r2승리=%d\n", 어드밴스드요우무_r2.승수);
	fprintf(savefile, "어드밴스드요우무_r2패배=%d\n", 어드밴스드요우무_r2.패수);
	fprintf(savefile, "어드밴스드요우무_r2승률=%2lf\n", 어드밴스드요우무_r2.승률);
	fprintf(savefile, "어드밴스드요우무_r2레이팅=%d\n", 어드밴스드요우무_r2.레이팅);
	fprintf(savefile, "어드밴스드요우무_r2연승=%d\n", 어드밴스드요우무_r2.연승);
	fprintf(savefile, "어드밴스드요우무_r2연패=%d\n", 어드밴스드요우무_r2.연패);
	fprintf(savefile, "어드밴스드요우무_r2킬=%d\n", 어드밴스드요우무_r2.킬);
	fprintf(savefile, "어드밴스드요우무_r2데스=%d\n", 어드밴스드요우무_r2.데스);
	fprintf(savefile, "어드밴스드요우무_r2어시스트=%d\n", 어드밴스드요우무_r2.어시스트);
	fprintf(savefile, "어드밴스드요우무_r2백조의부름=%d\n", 어드밴스드요우무_r2.백조의부름);
	fprintf(savefile, "어드밴스드요우무_r2회복의삼지창=%d\n", 어드밴스드요우무_r2.회복의삼지창);
	fprintf(savefile, "어드밴스드요우무_r2밤의사냥꾼=%d\n", 어드밴스드요우무_r2.밤의사냥꾼);
	fprintf(savefile, "어드밴스드요우무_r2비겁한고블린=%d\n", 어드밴스드요우무_r2.비겁한고블린);
	fprintf(savefile, "어드밴스드요우무_r2깨달음=%d\n", 어드밴스드요우무_r2.깨달음);
	fprintf(savefile, "어드밴스드요우무_r2흑마법=%d\n", 어드밴스드요우무_r2.흑마법);
	fprintf(savefile, "어드밴스드요우무_r2음과양=%d\n", 어드밴스드요우무_r2.음과양의조화);
	fprintf(savefile, "어드밴스드요우무_r2아레스=%d\n", 어드밴스드요우무_r2.아레스의투구);
	fprintf(savefile, "어드밴스드요우무_r2라식=%d\n", 어드밴스드요우무_r2.라식);
	fprintf(savefile, "어드밴스드요우무_r2장화=%d\n", 어드밴스드요우무_r2.축복의장화);
	fprintf(savefile, "어드밴스드요우무_r2반지=%d\n", 어드밴스드요우무_r2.신비로운반지);
	fprintf(savefile, "어드밴스드요우무_r2치명적인탄환=%d\n", 어드밴스드요우무_r2.치명적인탄환);
	fprintf(savefile, "어드밴스드요우무_r2깨물기=%d\n", 어드밴스드요우무_r2.깨물기);
	fprintf(savefile, "어드밴스드요우무_r2이동의즐거움=%d\n", 어드밴스드요우무_r2.이동의즐거움);
	fprintf(savefile, "어드밴스드요우무_r2판다렌=%d\n", 어드밴스드요우무_r2.판다렌의화염작렬);
	fprintf(savefile, "어드밴스드요우무_r2마법부스터=%d\n", 어드밴스드요우무_r2.마법부스터);
	fprintf(savefile, "어드밴스드요우무_r2단단한벽=%d\n", 어드밴스드요우무_r2.단단한벽);
	fprintf(savefile, "어드밴스드요우무_r2마법의망토=%d\n", 어드밴스드요우무_r2.마법의망토);
	fprintf(savefile, "어드밴스드요우무_r2고대신비마법서=%d\n", 어드밴스드요우무_r2.고대신비의마법서);
	fprintf(savefile, "어드밴스드요우무_r2산뜻한기분=%d\n", 어드밴스드요우무_r2.산뜻한기분);
	fprintf(savefile, "어드밴스드요우무_r2갈망의검=%d\n", 어드밴스드요우무_r2.갈망의검);
	fprintf(savefile, "어드밴스드요우무_r2지배전투의기본=%d\n", 어드밴스드요우무_r2.지배전투의기본);
	fprintf(savefile, "어드밴스드요우무_r2지배푸른영기=%d\n", 어드밴스드요우무_r2.지배푸른영기);
	fprintf(savefile, "어드밴스드요우무_r2마법전투의기본=%d\n", 어드밴스드요우무_r2.마법전투의기본);
	fprintf(savefile, "어드밴스드요우무_r2마법푸른영기=%d\n", 어드밴스드요우무_r2.마법푸른영기);
	fprintf(savefile, "어드밴스드요우무_r2강인한체력=%d\n", 어드밴스드요우무_r2.강인한체력);
	fprintf(savefile, "어드밴스드요우무_r2활력증진=%d\n", 어드밴스드요우무_r2.활력증진);
	fprintf(savefile, "어드밴스드요우무_r2저돌적인공격방식=%d\n", 어드밴스드요우무_r2.저돌적인공격방식);
	fprintf(savefile, "어드밴스드요우무_r2신비한공격방식=%d\n", 어드밴스드요우무_r2.신비한공격방식);
	fprintf(savefile, "어드밴스드요우무_r2투쟁갑옷무력화=%d\n", 어드밴스드요우무_r2.투쟁갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r2투쟁저항무력화=%d\n", 어드밴스드요우무_r2.투쟁저항무력화);
	fprintf(savefile, "어드밴스드요우무_r2지배갑옷무력화=%d\n", 어드밴스드요우무_r2.지배갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r2지배저항무력화=%d\n", 어드밴스드요우무_r2.지배저항무력화);
	fprintf(savefile, "어드밴스드요우무_r2마법갑옷무력화=%d\n", 어드밴스드요우무_r2.마법갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r2마법저항무력화=%d\n", 어드밴스드요우무_r2.마법저항무력화);
	fprintf(savefile, "어드밴스드요우무_r2신비의방패=%d\n", 어드밴스드요우무_r2.신비의방패);
	fprintf(savefile, "어드밴스드요우무_r2저항의방패=%d\n", 어드밴스드요우무_r2.저항의방패);
	fprintf(savefile, "어드밴스드요우무_r2경험치사기꾼=%d\n", 어드밴스드요우무_r2.경험치사기꾼);
	fprintf(savefile, "어드밴스드요우무_r2골드도둑=%d\n", 어드밴스드요우무_r2.골드도둑);
	fprintf(savefile, "어드밴스드요우무_r2투쟁타격용분=%d\n", 어드밴스드요우무_r2.투쟁타격용분);
	fprintf(savefile, "어드밴스드요우무_r2투쟁마법용분=%d\n", 어드밴스드요우무_r2.투쟁마법용분);
	fprintf(savefile, "어드밴스드요우무_r2지배물리용분=%d\n", 어드밴스드요우무_r2.지배물리용분);
	fprintf(savefile, "어드밴스드요우무_r2지배마법용분=%d\n", 어드밴스드요우무_r2.지배마법용분);
	fprintf(savefile, "어드밴스드요우무_r2마법물리용분=%d\n", 어드밴스드요우무_r2.마법물리용분);
	fprintf(savefile, "어드밴스드요우무_r2마법마법용분=%d\n", 어드밴스드요우무_r2.마법마법용분);
	fprintf(savefile, "어드밴스드요우무_r2긍지최후의방어=%d\n", 어드밴스드요우무_r2.긍지최후의방어);
	fprintf(savefile, "어드밴스드요우무_r2축복최후의방어=%d\n", 어드밴스드요우무_r2.축복최후의방어);
	fprintf(savefile, "어드밴스드요우무_r2집중사격=%d\n", 어드밴스드요우무_r2.집중사격);
	fprintf(savefile, "어드밴스드요우무_r2무자비한연사=%d\n", 어드밴스드요우무_r2.무자비한연사);
	fprintf(savefile, "어드밴스드요우무_r2환상적인공격=%d\n", 어드밴스드요우무_r2.환상적인공격);
	fprintf(savefile, "어드밴스드요우무_r2제우스의분노=%d\n", 어드밴스드요우무_r2.제우스의분노);
	fprintf(savefile, "어드밴스드요우무_r2오디세우스의성검=%d\n", 어드밴스드요우무_r2.오디세우스의성검);
	fprintf(savefile, "어드밴스드요우무_r2대마법신비로운메테오=%d\n", 어드밴스드요우무_r2.대마법신비로운메테오);
	fprintf(savefile, "어드밴스드요우무_r2마법펀치=%d\n", 어드밴스드요우무_r2.마법펀치);
	fprintf(savefile, "어드밴스드요우무_r2곰발바닥=%d\n", 어드밴스드요우무_r2.곰발바닥);
	fprintf(savefile, "어드밴스드요우무_r2토르의분노=%d\n", 어드밴스드요우무_r2.토르의분노);
	fprintf(savefile, "어드밴스드요우무_r2마법의점멸=%d\n", 어드밴스드요우무_r2.마법의점멸);
	fprintf(savefile, "어드밴스드요우무_r2신의가호=%d\n", 어드밴스드요우무_r2.신의가호);
	//r3
	fprintf(savefile, "어드밴스드요우무_r3플레이횟수=%d\n", 어드밴스드요우무_r3.게임횟수);
	fprintf(savefile, "어드밴스드요우무_r3승리=%d\n", 어드밴스드요우무_r3.승수);
	fprintf(savefile, "어드밴스드요우무_r3패배=%d\n", 어드밴스드요우무_r3.패수);
	fprintf(savefile, "어드밴스드요우무_r3승률=%2lf\n", 어드밴스드요우무_r3.승률);
	fprintf(savefile, "어드밴스드요우무_r3레이팅=%d\n", 어드밴스드요우무_r3.레이팅);
	fprintf(savefile, "어드밴스드요우무_r3연승=%d\n", 어드밴스드요우무_r3.연승);
	fprintf(savefile, "어드밴스드요우무_r3연패=%d\n", 어드밴스드요우무_r3.연패);
	fprintf(savefile, "어드밴스드요우무_r3킬=%d\n", 어드밴스드요우무_r3.킬);
	fprintf(savefile, "어드밴스드요우무_r3데스=%d\n", 어드밴스드요우무_r3.데스);
	fprintf(savefile, "어드밴스드요우무_r3어시스트=%d\n", 어드밴스드요우무_r3.어시스트);
	fprintf(savefile, "어드밴스드요우무_r3백조의부름=%d\n", 어드밴스드요우무_r3.백조의부름);
	fprintf(savefile, "어드밴스드요우무_r3회복의삼지창=%d\n", 어드밴스드요우무_r3.회복의삼지창);
	fprintf(savefile, "어드밴스드요우무_r3밤의사냥꾼=%d\n", 어드밴스드요우무_r3.밤의사냥꾼);
	fprintf(savefile, "어드밴스드요우무_r3비겁한고블린=%d\n", 어드밴스드요우무_r3.비겁한고블린);
	fprintf(savefile, "어드밴스드요우무_r3깨달음=%d\n", 어드밴스드요우무_r3.깨달음);
	fprintf(savefile, "어드밴스드요우무_r3흑마법=%d\n", 어드밴스드요우무_r3.흑마법);
	fprintf(savefile, "어드밴스드요우무_r3음과양=%d\n", 어드밴스드요우무_r3.음과양의조화);
	fprintf(savefile, "어드밴스드요우무_r3아레스=%d\n", 어드밴스드요우무_r3.아레스의투구);
	fprintf(savefile, "어드밴스드요우무_r3라식=%d\n", 어드밴스드요우무_r3.라식);
	fprintf(savefile, "어드밴스드요우무_r3장화=%d\n", 어드밴스드요우무_r3.축복의장화);
	fprintf(savefile, "어드밴스드요우무_r3반지=%d\n", 어드밴스드요우무_r3.신비로운반지);
	fprintf(savefile, "어드밴스드요우무_r3치명적인탄환=%d\n", 어드밴스드요우무_r3.치명적인탄환);
	fprintf(savefile, "어드밴스드요우무_r3깨물기=%d\n", 어드밴스드요우무_r3.깨물기);
	fprintf(savefile, "어드밴스드요우무_r3이동의즐거움=%d\n", 어드밴스드요우무_r3.이동의즐거움);
	fprintf(savefile, "어드밴스드요우무_r3판다렌=%d\n", 어드밴스드요우무_r3.판다렌의화염작렬);
	fprintf(savefile, "어드밴스드요우무_r3마법부스터=%d\n", 어드밴스드요우무_r3.마법부스터);
	fprintf(savefile, "어드밴스드요우무_r3단단한벽=%d\n", 어드밴스드요우무_r3.단단한벽);
	fprintf(savefile, "어드밴스드요우무_r3마법의망토=%d\n", 어드밴스드요우무_r3.마법의망토);
	fprintf(savefile, "어드밴스드요우무_r3고대신비마법서=%d\n", 어드밴스드요우무_r3.고대신비의마법서);
	fprintf(savefile, "어드밴스드요우무_r3산뜻한기분=%d\n", 어드밴스드요우무_r3.산뜻한기분);
	fprintf(savefile, "어드밴스드요우무_r3갈망의검=%d\n", 어드밴스드요우무_r3.갈망의검);
	fprintf(savefile, "어드밴스드요우무_r3지배전투의기본=%d\n", 어드밴스드요우무_r3.지배전투의기본);
	fprintf(savefile, "어드밴스드요우무_r3지배푸른영기=%d\n", 어드밴스드요우무_r3.지배푸른영기);
	fprintf(savefile, "어드밴스드요우무_r3마법전투의기본=%d\n", 어드밴스드요우무_r3.마법전투의기본);
	fprintf(savefile, "어드밴스드요우무_r3마법푸른영기=%d\n", 어드밴스드요우무_r3.마법푸른영기);
	fprintf(savefile, "어드밴스드요우무_r3강인한체력=%d\n", 어드밴스드요우무_r3.강인한체력);
	fprintf(savefile, "어드밴스드요우무_r3활력증진=%d\n", 어드밴스드요우무_r3.활력증진);
	fprintf(savefile, "어드밴스드요우무_r3저돌적인공격방식=%d\n", 어드밴스드요우무_r3.저돌적인공격방식);
	fprintf(savefile, "어드밴스드요우무_r3신비한공격방식=%d\n", 어드밴스드요우무_r3.신비한공격방식);
	fprintf(savefile, "어드밴스드요우무_r3투쟁갑옷무력화=%d\n", 어드밴스드요우무_r3.투쟁갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r3투쟁저항무력화=%d\n", 어드밴스드요우무_r3.투쟁저항무력화);
	fprintf(savefile, "어드밴스드요우무_r3지배갑옷무력화=%d\n", 어드밴스드요우무_r3.지배갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r3지배저항무력화=%d\n", 어드밴스드요우무_r3.지배저항무력화);
	fprintf(savefile, "어드밴스드요우무_r3마법갑옷무력화=%d\n", 어드밴스드요우무_r3.마법갑옷무력화);
	fprintf(savefile, "어드밴스드요우무_r3마법저항무력화=%d\n", 어드밴스드요우무_r3.마법저항무력화);
	fprintf(savefile, "어드밴스드요우무_r3신비의방패=%d\n", 어드밴스드요우무_r3.신비의방패);
	fprintf(savefile, "어드밴스드요우무_r3저항의방패=%d\n", 어드밴스드요우무_r3.저항의방패);
	fprintf(savefile, "어드밴스드요우무_r3경험치사기꾼=%d\n", 어드밴스드요우무_r3.경험치사기꾼);
	fprintf(savefile, "어드밴스드요우무_r3골드도둑=%d\n", 어드밴스드요우무_r3.골드도둑);
	fprintf(savefile, "어드밴스드요우무_r3투쟁타격용분=%d\n", 어드밴스드요우무_r3.투쟁타격용분);
	fprintf(savefile, "어드밴스드요우무_r3투쟁마법용분=%d\n", 어드밴스드요우무_r3.투쟁마법용분);
	fprintf(savefile, "어드밴스드요우무_r3지배물리용분=%d\n", 어드밴스드요우무_r3.지배물리용분);
	fprintf(savefile, "어드밴스드요우무_r3지배마법용분=%d\n", 어드밴스드요우무_r3.지배마법용분);
	fprintf(savefile, "어드밴스드요우무_r3마법물리용분=%d\n", 어드밴스드요우무_r3.마법물리용분);
	fprintf(savefile, "어드밴스드요우무_r3마법마법용분=%d\n", 어드밴스드요우무_r3.마법마법용분);
	fprintf(savefile, "어드밴스드요우무_r3긍지최후의방어=%d\n", 어드밴스드요우무_r3.긍지최후의방어);
	fprintf(savefile, "어드밴스드요우무_r3축복최후의방어=%d\n", 어드밴스드요우무_r3.축복최후의방어);
	fprintf(savefile, "어드밴스드요우무_r3집중사격=%d\n", 어드밴스드요우무_r3.집중사격);
	fprintf(savefile, "어드밴스드요우무_r3무자비한연사=%d\n", 어드밴스드요우무_r3.무자비한연사);
	fprintf(savefile, "어드밴스드요우무_r3환상적인공격=%d\n", 어드밴스드요우무_r3.환상적인공격);
	fprintf(savefile, "어드밴스드요우무_r3제우스의분노=%d\n", 어드밴스드요우무_r3.제우스의분노);
	fprintf(savefile, "어드밴스드요우무_r3오디세우스의성검=%d\n", 어드밴스드요우무_r3.오디세우스의성검);
	fprintf(savefile, "어드밴스드요우무_r3대마법신비로운메테오=%d\n", 어드밴스드요우무_r3.대마법신비로운메테오);
	fprintf(savefile, "어드밴스드요우무_r3마법펀치=%d\n", 어드밴스드요우무_r3.마법펀치);
	fprintf(savefile, "어드밴스드요우무_r3곰발바닥=%d\n", 어드밴스드요우무_r3.곰발바닥);
	fprintf(savefile, "어드밴스드요우무_r3토르의분노=%d\n", 어드밴스드요우무_r3.토르의분노);
	fprintf(savefile, "어드밴스드요우무_r3마법의점멸=%d\n", 어드밴스드요우무_r3.마법의점멸);
	fprintf(savefile, "어드밴스드요우무_r3신의가호=%d\n", 어드밴스드요우무_r3.신의가호);
	//마리사_딜러
	fprintf(savefile, "마리사_딜러플레이횟수=%d\n", 마리사_딜러.게임횟수);
	fprintf(savefile, "마리사_딜러승리=%d\n", 마리사_딜러.승수);
	fprintf(savefile, "마리사_딜러패배=%d\n", 마리사_딜러.패수);
	fprintf(savefile, "마리사_딜러승률=%2lf\n", 마리사_딜러.승률);
	fprintf(savefile, "마리사_딜러레이팅=%d\n", 마리사_딜러.레이팅);
	fprintf(savefile, "마리사_딜러연승=%d\n", 마리사_딜러.연승);
	fprintf(savefile, "마리사_딜러연패=%d\n", 마리사_딜러.연패);
	fprintf(savefile, "마리사_딜러킬=%d\n", 마리사_딜러.킬);
	fprintf(savefile, "마리사_딜러데스=%d\n", 마리사_딜러.데스);
	fprintf(savefile, "마리사_딜러어시스트=%d\n", 마리사_딜러.어시스트);
	fprintf(savefile, "마리사_딜러백조의부름=%d\n", 마리사_딜러.백조의부름);
	fprintf(savefile, "마리사_딜러회복의삼지창=%d\n", 마리사_딜러.회복의삼지창);
	fprintf(savefile, "마리사_딜러밤의사냥꾼=%d\n", 마리사_딜러.밤의사냥꾼);
	fprintf(savefile, "마리사_딜러비겁한고블린=%d\n", 마리사_딜러.비겁한고블린);
	fprintf(savefile, "마리사_딜러깨달음=%d\n", 마리사_딜러.깨달음);
	fprintf(savefile, "마리사_딜러흑마법=%d\n", 마리사_딜러.흑마법);
	fprintf(savefile, "마리사_딜러음과양=%d\n", 마리사_딜러.음과양의조화);
	fprintf(savefile, "마리사_딜러아레스=%d\n", 마리사_딜러.아레스의투구);
	fprintf(savefile, "마리사_딜러라식=%d\n", 마리사_딜러.라식);
	fprintf(savefile, "마리사_딜러장화=%d\n", 마리사_딜러.축복의장화);
	fprintf(savefile, "마리사_딜러반지=%d\n", 마리사_딜러.신비로운반지);
	fprintf(savefile, "마리사_딜러치명적인탄환=%d\n", 마리사_딜러.치명적인탄환);
	fprintf(savefile, "마리사_딜러깨물기=%d\n", 마리사_딜러.깨물기);
	fprintf(savefile, "마리사_딜러이동의즐거움=%d\n", 마리사_딜러.이동의즐거움);
	fprintf(savefile, "마리사_딜러판다렌=%d\n", 마리사_딜러.판다렌의화염작렬);
	fprintf(savefile, "마리사_딜러마법부스터=%d\n", 마리사_딜러.마법부스터);
	fprintf(savefile, "마리사_딜러단단한벽=%d\n", 마리사_딜러.단단한벽);
	fprintf(savefile, "마리사_딜러마법의망토=%d\n", 마리사_딜러.마법의망토);
	fprintf(savefile, "마리사_딜러고대신비마법서=%d\n", 마리사_딜러.고대신비의마법서);
	fprintf(savefile, "마리사_딜러산뜻한기분=%d\n", 마리사_딜러.산뜻한기분);
	fprintf(savefile, "마리사_딜러갈망의검=%d\n", 마리사_딜러.갈망의검);
	fprintf(savefile, "마리사_딜러지배전투의기본=%d\n", 마리사_딜러.지배전투의기본);
	fprintf(savefile, "마리사_딜러지배푸른영기=%d\n", 마리사_딜러.지배푸른영기);
	fprintf(savefile, "마리사_딜러마법전투의기본=%d\n", 마리사_딜러.마법전투의기본);
	fprintf(savefile, "마리사_딜러마법푸른영기=%d\n", 마리사_딜러.마법푸른영기);
	fprintf(savefile, "마리사_딜러강인한체력=%d\n", 마리사_딜러.강인한체력);
	fprintf(savefile, "마리사_딜러활력증진=%d\n", 마리사_딜러.활력증진);
	fprintf(savefile, "마리사_딜러저돌적인공격방식=%d\n", 마리사_딜러.저돌적인공격방식);
	fprintf(savefile, "마리사_딜러신비한공격방식=%d\n", 마리사_딜러.신비한공격방식);
	fprintf(savefile, "마리사_딜러투쟁갑옷무력화=%d\n", 마리사_딜러.투쟁갑옷무력화);
	fprintf(savefile, "마리사_딜러투쟁저항무력화=%d\n", 마리사_딜러.투쟁저항무력화);
	fprintf(savefile, "마리사_딜러지배갑옷무력화=%d\n", 마리사_딜러.지배갑옷무력화);
	fprintf(savefile, "마리사_딜러지배저항무력화=%d\n", 마리사_딜러.지배저항무력화);
	fprintf(savefile, "마리사_딜러마법갑옷무력화=%d\n", 마리사_딜러.마법갑옷무력화);
	fprintf(savefile, "마리사_딜러마법저항무력화=%d\n", 마리사_딜러.마법저항무력화);
	fprintf(savefile, "마리사_딜러신비의방패=%d\n", 마리사_딜러.신비의방패);
	fprintf(savefile, "마리사_딜러저항의방패=%d\n", 마리사_딜러.저항의방패);
	fprintf(savefile, "마리사_딜러경험치사기꾼=%d\n", 마리사_딜러.경험치사기꾼);
	fprintf(savefile, "마리사_딜러골드도둑=%d\n", 마리사_딜러.골드도둑);
	fprintf(savefile, "마리사_딜러투쟁타격용분=%d\n", 마리사_딜러.투쟁타격용분);
	fprintf(savefile, "마리사_딜러투쟁마법용분=%d\n", 마리사_딜러.투쟁마법용분);
	fprintf(savefile, "마리사_딜러지배물리용분=%d\n", 마리사_딜러.지배물리용분);
	fprintf(savefile, "마리사_딜러지배마법용분=%d\n", 마리사_딜러.지배마법용분);
	fprintf(savefile, "마리사_딜러마법물리용분=%d\n", 마리사_딜러.마법물리용분);
	fprintf(savefile, "마리사_딜러마법마법용분=%d\n", 마리사_딜러.마법마법용분);
	fprintf(savefile, "마리사_딜러긍지최후의방어=%d\n", 마리사_딜러.긍지최후의방어);
	fprintf(savefile, "마리사_딜러축복최후의방어=%d\n", 마리사_딜러.축복최후의방어);
	fprintf(savefile, "마리사_딜러집중사격=%d\n", 마리사_딜러.집중사격);
	fprintf(savefile, "마리사_딜러무자비한연사=%d\n", 마리사_딜러.무자비한연사);
	fprintf(savefile, "마리사_딜러환상적인공격=%d\n", 마리사_딜러.환상적인공격);
	fprintf(savefile, "마리사_딜러제우스의분노=%d\n", 마리사_딜러.제우스의분노);
	fprintf(savefile, "마리사_딜러오디세우스의성검=%d\n", 마리사_딜러.오디세우스의성검);
	fprintf(savefile, "마리사_딜러대마법신비로운메테오=%d\n", 마리사_딜러.대마법신비로운메테오);
	fprintf(savefile, "마리사_딜러마법펀치=%d\n", 마리사_딜러.마법펀치);
	fprintf(savefile, "마리사_딜러곰발바닥=%d\n", 마리사_딜러.곰발바닥);
	fprintf(savefile, "마리사_딜러토르의분노=%d\n", 마리사_딜러.토르의분노);
	fprintf(savefile, "마리사_딜러마법의점멸=%d\n", 마리사_딜러.마법의점멸);
	fprintf(savefile, "마리사_딜러신의가호=%d\n", 마리사_딜러.신의가호);
	//마리사_힐러
	fprintf(savefile, "마리사_힐러플레이횟수=%d\n", 마리사_힐러.게임횟수);
	fprintf(savefile, "마리사_힐러승리=%d\n", 마리사_힐러.승수);
	fprintf(savefile, "마리사_힐러패배=%d\n", 마리사_힐러.패수);
	fprintf(savefile, "마리사_힐러승률=%2lf\n", 마리사_힐러.승률);
	fprintf(savefile, "마리사_힐러레이팅=%d\n", 마리사_힐러.레이팅);
	fprintf(savefile, "마리사_힐러연승=%d\n", 마리사_힐러.연승);
	fprintf(savefile, "마리사_힐러연패=%d\n", 마리사_힐러.연패);
	fprintf(savefile, "마리사_힐러킬=%d\n", 마리사_힐러.킬);
	fprintf(savefile, "마리사_힐러데스=%d\n", 마리사_힐러.데스);
	fprintf(savefile, "마리사_힐러어시스트=%d\n", 마리사_힐러.어시스트);
	fprintf(savefile, "마리사_힐러백조의부름=%d\n", 마리사_힐러.백조의부름);
	fprintf(savefile, "마리사_힐러회복의삼지창=%d\n", 마리사_힐러.회복의삼지창);
	fprintf(savefile, "마리사_힐러밤의사냥꾼=%d\n", 마리사_힐러.밤의사냥꾼);
	fprintf(savefile, "마리사_힐러비겁한고블린=%d\n", 마리사_힐러.비겁한고블린);
	fprintf(savefile, "마리사_힐러깨달음=%d\n", 마리사_힐러.깨달음);
	fprintf(savefile, "마리사_힐러흑마법=%d\n", 마리사_힐러.흑마법);
	fprintf(savefile, "마리사_힐러음과양=%d\n", 마리사_힐러.음과양의조화);
	fprintf(savefile, "마리사_힐러아레스=%d\n", 마리사_힐러.아레스의투구);
	fprintf(savefile, "마리사_힐러라식=%d\n", 마리사_힐러.라식);
	fprintf(savefile, "마리사_힐러장화=%d\n", 마리사_힐러.축복의장화);
	fprintf(savefile, "마리사_힐러반지=%d\n", 마리사_힐러.신비로운반지);
	fprintf(savefile, "마리사_힐러치명적인탄환=%d\n", 마리사_힐러.치명적인탄환);
	fprintf(savefile, "마리사_힐러깨물기=%d\n", 마리사_힐러.깨물기);
	fprintf(savefile, "마리사_힐러이동의즐거움=%d\n", 마리사_힐러.이동의즐거움);
	fprintf(savefile, "마리사_힐러판다렌=%d\n", 마리사_힐러.판다렌의화염작렬);
	fprintf(savefile, "마리사_힐러마법부스터=%d\n", 마리사_힐러.마법부스터);
	fprintf(savefile, "마리사_힐러단단한벽=%d\n", 마리사_힐러.단단한벽);
	fprintf(savefile, "마리사_힐러마법의망토=%d\n", 마리사_힐러.마법의망토);
	fprintf(savefile, "마리사_힐러고대신비마법서=%d\n", 마리사_힐러.고대신비의마법서);
	fprintf(savefile, "마리사_힐러산뜻한기분=%d\n", 마리사_힐러.산뜻한기분);
	fprintf(savefile, "마리사_힐러갈망의검=%d\n", 마리사_힐러.갈망의검);
	fprintf(savefile, "마리사_힐러지배전투의기본=%d\n", 마리사_힐러.지배전투의기본);
	fprintf(savefile, "마리사_힐러지배푸른영기=%d\n", 마리사_힐러.지배푸른영기);
	fprintf(savefile, "마리사_힐러마법전투의기본=%d\n", 마리사_힐러.마법전투의기본);
	fprintf(savefile, "마리사_힐러마법푸른영기=%d\n", 마리사_힐러.마법푸른영기);
	fprintf(savefile, "마리사_힐러강인한체력=%d\n", 마리사_힐러.강인한체력);
	fprintf(savefile, "마리사_힐러활력증진=%d\n", 마리사_힐러.활력증진);
	fprintf(savefile, "마리사_힐러저돌적인공격방식=%d\n", 마리사_힐러.저돌적인공격방식);
	fprintf(savefile, "마리사_힐러신비한공격방식=%d\n", 마리사_힐러.신비한공격방식);
	fprintf(savefile, "마리사_힐러투쟁갑옷무력화=%d\n", 마리사_힐러.투쟁갑옷무력화);
	fprintf(savefile, "마리사_힐러투쟁저항무력화=%d\n", 마리사_힐러.투쟁저항무력화);
	fprintf(savefile, "마리사_힐러지배갑옷무력화=%d\n", 마리사_힐러.지배갑옷무력화);
	fprintf(savefile, "마리사_힐러지배저항무력화=%d\n", 마리사_힐러.지배저항무력화);
	fprintf(savefile, "마리사_힐러마법갑옷무력화=%d\n", 마리사_힐러.마법갑옷무력화);
	fprintf(savefile, "마리사_힐러마법저항무력화=%d\n", 마리사_힐러.마법저항무력화);
	fprintf(savefile, "마리사_힐러신비의방패=%d\n", 마리사_힐러.신비의방패);
	fprintf(savefile, "마리사_힐러저항의방패=%d\n", 마리사_힐러.저항의방패);
	fprintf(savefile, "마리사_힐러경험치사기꾼=%d\n", 마리사_힐러.경험치사기꾼);
	fprintf(savefile, "마리사_힐러골드도둑=%d\n", 마리사_힐러.골드도둑);
	fprintf(savefile, "마리사_힐러투쟁타격용분=%d\n", 마리사_힐러.투쟁타격용분);
	fprintf(savefile, "마리사_힐러투쟁마법용분=%d\n", 마리사_힐러.투쟁마법용분);
	fprintf(savefile, "마리사_힐러지배물리용분=%d\n", 마리사_힐러.지배물리용분);
	fprintf(savefile, "마리사_힐러지배마법용분=%d\n", 마리사_힐러.지배마법용분);
	fprintf(savefile, "마리사_힐러마법물리용분=%d\n", 마리사_힐러.마법물리용분);
	fprintf(savefile, "마리사_힐러마법마법용분=%d\n", 마리사_힐러.마법마법용분);
	fprintf(savefile, "마리사_힐러긍지최후의방어=%d\n", 마리사_힐러.긍지최후의방어);
	fprintf(savefile, "마리사_힐러축복최후의방어=%d\n", 마리사_힐러.축복최후의방어);
	fprintf(savefile, "마리사_힐러집중사격=%d\n", 마리사_힐러.집중사격);
	fprintf(savefile, "마리사_힐러무자비한연사=%d\n", 마리사_힐러.무자비한연사);
	fprintf(savefile, "마리사_힐러환상적인공격=%d\n", 마리사_힐러.환상적인공격);
	fprintf(savefile, "마리사_힐러제우스의분노=%d\n", 마리사_힐러.제우스의분노);
	fprintf(savefile, "마리사_힐러오디세우스의성검=%d\n", 마리사_힐러.오디세우스의성검);
	fprintf(savefile, "마리사_힐러대마법신비로운메테오=%d\n", 마리사_힐러.대마법신비로운메테오);
	fprintf(savefile, "마리사_힐러마법펀치=%d\n", 마리사_힐러.마법펀치);
	fprintf(savefile, "마리사_힐러곰발바닥=%d\n", 마리사_힐러.곰발바닥);
	fprintf(savefile, "마리사_힐러토르의분노=%d\n", 마리사_힐러.토르의분노);
	fprintf(savefile, "마리사_힐러마법의점멸=%d\n", 마리사_힐러.마법의점멸);
	fprintf(savefile, "마리사_힐러신의가호=%d\n", 마리사_힐러.신의가호);
	//마리사_하이브리드
	fprintf(savefile, "마리사_하이브리드플레이횟수=%d\n", 마리사_하이브리드.게임횟수);
	fprintf(savefile, "마리사_하이브리드승리=%d\n", 마리사_하이브리드.승수);
	fprintf(savefile, "마리사_하이브리드패배=%d\n", 마리사_하이브리드.패수);
	fprintf(savefile, "마리사_하이브리드승률=%2lf\n", 마리사_하이브리드.승률);
	fprintf(savefile, "마리사_하이브리드레이팅=%d\n", 마리사_하이브리드.레이팅);
	fprintf(savefile, "마리사_하이브리드연승=%d\n", 마리사_하이브리드.연승);
	fprintf(savefile, "마리사_하이브리드연패=%d\n", 마리사_하이브리드.연패);
	fprintf(savefile, "마리사_하이브리드킬=%d\n", 마리사_하이브리드.킬);
	fprintf(savefile, "마리사_하이브리드데스=%d\n", 마리사_하이브리드.데스);
	fprintf(savefile, "마리사_하이브리드어시스트=%d\n", 마리사_하이브리드.어시스트);
	fprintf(savefile, "마리사_하이브리드백조의부름=%d\n", 마리사_하이브리드.백조의부름);
	fprintf(savefile, "마리사_하이브리드회복의삼지창=%d\n", 마리사_하이브리드.회복의삼지창);
	fprintf(savefile, "마리사_하이브리드밤의사냥꾼=%d\n", 마리사_하이브리드.밤의사냥꾼);
	fprintf(savefile, "마리사_하이브리드비겁한고블린=%d\n", 마리사_하이브리드.비겁한고블린);
	fprintf(savefile, "마리사_하이브리드깨달음=%d\n", 마리사_하이브리드.깨달음);
	fprintf(savefile, "마리사_하이브리드흑마법=%d\n", 마리사_하이브리드.흑마법);
	fprintf(savefile, "마리사_하이브리드음과양=%d\n", 마리사_하이브리드.음과양의조화);
	fprintf(savefile, "마리사_하이브리드아레스=%d\n", 마리사_하이브리드.아레스의투구);
	fprintf(savefile, "마리사_하이브리드라식=%d\n", 마리사_하이브리드.라식);
	fprintf(savefile, "마리사_하이브리드장화=%d\n", 마리사_하이브리드.축복의장화);
	fprintf(savefile, "마리사_하이브리드반지=%d\n", 마리사_하이브리드.신비로운반지);
	fprintf(savefile, "마리사_하이브리드치명적인탄환=%d\n", 마리사_하이브리드.치명적인탄환);
	fprintf(savefile, "마리사_하이브리드깨물기=%d\n", 마리사_하이브리드.깨물기);
	fprintf(savefile, "마리사_하이브리드이동의즐거움=%d\n", 마리사_하이브리드.이동의즐거움);
	fprintf(savefile, "마리사_하이브리드판다렌=%d\n", 마리사_하이브리드.판다렌의화염작렬);
	fprintf(savefile, "마리사_하이브리드마법부스터=%d\n", 마리사_하이브리드.마법부스터);
	fprintf(savefile, "마리사_하이브리드단단한벽=%d\n", 마리사_하이브리드.단단한벽);
	fprintf(savefile, "마리사_하이브리드마법의망토=%d\n", 마리사_하이브리드.마법의망토);
	fprintf(savefile, "마리사_하이브리드고대신비마법서=%d\n", 마리사_하이브리드.고대신비의마법서);
	fprintf(savefile, "마리사_하이브리드산뜻한기분=%d\n", 마리사_하이브리드.산뜻한기분);
	fprintf(savefile, "마리사_하이브리드갈망의검=%d\n", 마리사_하이브리드.갈망의검);
	fprintf(savefile, "마리사_하이브리드지배전투의기본=%d\n", 마리사_하이브리드.지배전투의기본);
	fprintf(savefile, "마리사_하이브리드지배푸른영기=%d\n", 마리사_하이브리드.지배푸른영기);
	fprintf(savefile, "마리사_하이브리드마법전투의기본=%d\n", 마리사_하이브리드.마법전투의기본);
	fprintf(savefile, "마리사_하이브리드마법푸른영기=%d\n", 마리사_하이브리드.마법푸른영기);
	fprintf(savefile, "마리사_하이브리드강인한체력=%d\n", 마리사_하이브리드.강인한체력);
	fprintf(savefile, "마리사_하이브리드활력증진=%d\n", 마리사_하이브리드.활력증진);
	fprintf(savefile, "마리사_하이브리드저돌적인공격방식=%d\n", 마리사_하이브리드.저돌적인공격방식);
	fprintf(savefile, "마리사_하이브리드신비한공격방식=%d\n", 마리사_하이브리드.신비한공격방식);
	fprintf(savefile, "마리사_하이브리드투쟁갑옷무력화=%d\n", 마리사_하이브리드.투쟁갑옷무력화);
	fprintf(savefile, "마리사_하이브리드투쟁저항무력화=%d\n", 마리사_하이브리드.투쟁저항무력화);
	fprintf(savefile, "마리사_하이브리드지배갑옷무력화=%d\n", 마리사_하이브리드.지배갑옷무력화);
	fprintf(savefile, "마리사_하이브리드지배저항무력화=%d\n", 마리사_하이브리드.지배저항무력화);
	fprintf(savefile, "마리사_하이브리드마법갑옷무력화=%d\n", 마리사_하이브리드.마법갑옷무력화);
	fprintf(savefile, "마리사_하이브리드마법저항무력화=%d\n", 마리사_하이브리드.마법저항무력화);
	fprintf(savefile, "마리사_하이브리드신비의방패=%d\n", 마리사_하이브리드.신비의방패);
	fprintf(savefile, "마리사_하이브리드저항의방패=%d\n", 마리사_하이브리드.저항의방패);
	fprintf(savefile, "마리사_하이브리드경험치사기꾼=%d\n", 마리사_하이브리드.경험치사기꾼);
	fprintf(savefile, "마리사_하이브리드골드도둑=%d\n", 마리사_하이브리드.골드도둑);
	fprintf(savefile, "마리사_하이브리드투쟁타격용분=%d\n", 마리사_하이브리드.투쟁타격용분);
	fprintf(savefile, "마리사_하이브리드투쟁마법용분=%d\n", 마리사_하이브리드.투쟁마법용분);
	fprintf(savefile, "마리사_하이브리드지배물리용분=%d\n", 마리사_하이브리드.지배물리용분);
	fprintf(savefile, "마리사_하이브리드지배마법용분=%d\n", 마리사_하이브리드.지배마법용분);
	fprintf(savefile, "마리사_하이브리드마법물리용분=%d\n", 마리사_하이브리드.마법물리용분);
	fprintf(savefile, "마리사_하이브리드마법마법용분=%d\n", 마리사_하이브리드.마법마법용분);
	fprintf(savefile, "마리사_하이브리드긍지최후의방어=%d\n", 마리사_하이브리드.긍지최후의방어);
	fprintf(savefile, "마리사_하이브리드축복최후의방어=%d\n", 마리사_하이브리드.축복최후의방어);
	fprintf(savefile, "마리사_하이브리드집중사격=%d\n", 마리사_하이브리드.집중사격);
	fprintf(savefile, "마리사_하이브리드무자비한연사=%d\n", 마리사_하이브리드.무자비한연사);
	fprintf(savefile, "마리사_하이브리드환상적인공격=%d\n", 마리사_하이브리드.환상적인공격);
	fprintf(savefile, "마리사_하이브리드제우스의분노=%d\n", 마리사_하이브리드.제우스의분노);
	fprintf(savefile, "마리사_하이브리드오디세우스의성검=%d\n", 마리사_하이브리드.오디세우스의성검);
	fprintf(savefile, "마리사_하이브리드대마법신비로운메테오=%d\n", 마리사_하이브리드.대마법신비로운메테오);
	fprintf(savefile, "마리사_하이브리드마법펀치=%d\n", 마리사_하이브리드.마법펀치);
	fprintf(savefile, "마리사_하이브리드곰발바닥=%d\n", 마리사_하이브리드.곰발바닥);
	fprintf(savefile, "마리사_하이브리드토르의분노=%d\n", 마리사_하이브리드.토르의분노);
	fprintf(savefile, "마리사_하이브리드마법의점멸=%d\n", 마리사_하이브리드.마법의점멸);
	fprintf(savefile, "마리사_하이브리드신의가호=%d\n", 마리사_하이브리드.신의가호);
	//유카리
	fprintf(savefile, "어드밴트모미지플레이횟수=%d\n", 어드밴트모미지.게임횟수);
	fprintf(savefile, "어드밴트모미지승리=%d\n", 어드밴트모미지.승수);
	fprintf(savefile, "어드밴트모미지패배=%d\n", 어드밴트모미지.패수);
	fprintf(savefile, "어드밴트모미지승률=%2lf\n", 어드밴트모미지.승률);
	fprintf(savefile, "어드밴트모미지레이팅=%d\n", 어드밴트모미지.레이팅);
	fprintf(savefile, "어드밴트모미지연승=%d\n", 어드밴트모미지.연승);
	fprintf(savefile, "어드밴트모미지연패=%d\n", 어드밴트모미지.연패);
	fprintf(savefile, "어드밴트모미지킬=%d\n", 어드밴트모미지.킬);
	fprintf(savefile, "어드밴트모미지데스=%d\n", 어드밴트모미지.데스);
	fprintf(savefile, "어드밴트모미지어시스트=%d\n", 어드밴트모미지.어시스트);
	fprintf(savefile, "어드밴트모미지백조의부름=%d\n", 어드밴트모미지.백조의부름);
	fprintf(savefile, "어드밴트모미지회복의삼지창=%d\n", 어드밴트모미지.회복의삼지창);
	fprintf(savefile, "어드밴트모미지밤의사냥꾼=%d\n", 어드밴트모미지.밤의사냥꾼);
	fprintf(savefile, "어드밴트모미지비겁한고블린=%d\n", 어드밴트모미지.비겁한고블린);
	fprintf(savefile, "어드밴트모미지깨달음=%d\n", 어드밴트모미지.깨달음);
	fprintf(savefile, "어드밴트모미지흑마법=%d\n", 어드밴트모미지.흑마법);
	fprintf(savefile, "어드밴트모미지음과양=%d\n", 어드밴트모미지.음과양의조화);
	fprintf(savefile, "어드밴트모미지아레스=%d\n", 어드밴트모미지.아레스의투구);
	fprintf(savefile, "어드밴트모미지라식=%d\n", 어드밴트모미지.라식);
	fprintf(savefile, "어드밴트모미지장화=%d\n", 어드밴트모미지.축복의장화);
	fprintf(savefile, "어드밴트모미지반지=%d\n", 어드밴트모미지.신비로운반지);
	fprintf(savefile, "어드밴트모미지치명적인탄환=%d\n", 어드밴트모미지.치명적인탄환);
	fprintf(savefile, "어드밴트모미지깨물기=%d\n", 어드밴트모미지.깨물기);
	fprintf(savefile, "어드밴트모미지이동의즐거움=%d\n", 어드밴트모미지.이동의즐거움);
	fprintf(savefile, "어드밴트모미지판다렌=%d\n", 어드밴트모미지.판다렌의화염작렬);
	fprintf(savefile, "어드밴트모미지마법부스터=%d\n", 어드밴트모미지.마법부스터);
	fprintf(savefile, "어드밴트모미지단단한벽=%d\n", 어드밴트모미지.단단한벽);
	fprintf(savefile, "어드밴트모미지마법의망토=%d\n", 어드밴트모미지.마법의망토);
	fprintf(savefile, "어드밴트모미지고대신비마법서=%d\n", 어드밴트모미지.고대신비의마법서);
	fprintf(savefile, "어드밴트모미지산뜻한기분=%d\n", 어드밴트모미지.산뜻한기분);
	fprintf(savefile, "어드밴트모미지갈망의검=%d\n", 어드밴트모미지.갈망의검);
	fprintf(savefile, "어드밴트모미지지배전투의기본=%d\n", 어드밴트모미지.지배전투의기본);
	fprintf(savefile, "어드밴트모미지지배푸른영기=%d\n", 어드밴트모미지.지배푸른영기);
	fprintf(savefile, "어드밴트모미지마법전투의기본=%d\n", 어드밴트모미지.마법전투의기본);
	fprintf(savefile, "어드밴트모미지마법푸른영기=%d\n", 어드밴트모미지.마법푸른영기);
	fprintf(savefile, "어드밴트모미지강인한체력=%d\n", 어드밴트모미지.강인한체력);
	fprintf(savefile, "어드밴트모미지활력증진=%d\n", 어드밴트모미지.활력증진);
	fprintf(savefile, "어드밴트모미지저돌적인공격방식=%d\n", 어드밴트모미지.저돌적인공격방식);
	fprintf(savefile, "어드밴트모미지신비한공격방식=%d\n", 어드밴트모미지.신비한공격방식);
	fprintf(savefile, "어드밴트모미지투쟁갑옷무력화=%d\n", 어드밴트모미지.투쟁갑옷무력화);
	fprintf(savefile, "어드밴트모미지투쟁저항무력화=%d\n", 어드밴트모미지.투쟁저항무력화);
	fprintf(savefile, "어드밴트모미지지배갑옷무력화=%d\n", 어드밴트모미지.지배갑옷무력화);
	fprintf(savefile, "어드밴트모미지지배저항무력화=%d\n", 어드밴트모미지.지배저항무력화);
	fprintf(savefile, "어드밴트모미지마법갑옷무력화=%d\n", 어드밴트모미지.마법갑옷무력화);
	fprintf(savefile, "어드밴트모미지마법저항무력화=%d\n", 어드밴트모미지.마법저항무력화);
	fprintf(savefile, "어드밴트모미지신비의방패=%d\n", 어드밴트모미지.신비의방패);
	fprintf(savefile, "어드밴트모미지저항의방패=%d\n", 어드밴트모미지.저항의방패);
	fprintf(savefile, "어드밴트모미지경험치사기꾼=%d\n", 어드밴트모미지.경험치사기꾼);
	fprintf(savefile, "어드밴트모미지골드도둑=%d\n", 어드밴트모미지.골드도둑);
	fprintf(savefile, "어드밴트모미지투쟁타격용분=%d\n", 어드밴트모미지.투쟁타격용분);
	fprintf(savefile, "어드밴트모미지투쟁마법용분=%d\n", 어드밴트모미지.투쟁마법용분);
	fprintf(savefile, "어드밴트모미지지배물리용분=%d\n", 어드밴트모미지.지배물리용분);
	fprintf(savefile, "어드밴트모미지지배마법용분=%d\n", 어드밴트모미지.지배마법용분);
	fprintf(savefile, "어드밴트모미지마법물리용분=%d\n", 어드밴트모미지.마법물리용분);
	fprintf(savefile, "어드밴트모미지마법마법용분=%d\n", 어드밴트모미지.마법마법용분);
	fprintf(savefile, "어드밴트모미지긍지최후의방어=%d\n", 어드밴트모미지.긍지최후의방어);
	fprintf(savefile, "어드밴트모미지축복최후의방어=%d\n", 어드밴트모미지.축복최후의방어);
	fprintf(savefile, "어드밴트모미지집중사격=%d\n", 어드밴트모미지.집중사격);
	fprintf(savefile, "어드밴트모미지무자비한연사=%d\n", 어드밴트모미지.무자비한연사);
	fprintf(savefile, "어드밴트모미지환상적인공격=%d\n", 어드밴트모미지.환상적인공격);
	fprintf(savefile, "어드밴트모미지제우스의분노=%d\n", 어드밴트모미지.제우스의분노);
	fprintf(savefile, "어드밴트모미지오디세우스의성검=%d\n", 어드밴트모미지.오디세우스의성검);
	fprintf(savefile, "어드밴트모미지대마법신비로운메테오=%d\n", 어드밴트모미지.대마법신비로운메테오);
	fprintf(savefile, "어드밴트모미지마법펀치=%d\n", 어드밴트모미지.마법펀치);
	fprintf(savefile, "어드밴트모미지곰발바닥=%d\n", 어드밴트모미지.곰발바닥);
	fprintf(savefile, "어드밴트모미지토르의분노=%d\n", 어드밴트모미지.토르의분노);
	fprintf(savefile, "어드밴트모미지마법의점멸=%d\n", 어드밴트모미지.마법의점멸);
	fprintf(savefile, "어드밴트모미지신의가호=%d\n", 어드밴트모미지.신의가호);
	//어드밴트모미지
	fprintf(savefile, "어드밴트모미지플레이횟수=%d\n", 어드밴트모미지.게임횟수);
	fprintf(savefile, "어드밴트모미지승리=%d\n", 어드밴트모미지.승수);
	fprintf(savefile, "어드밴트모미지패배=%d\n", 어드밴트모미지.패수);
	fprintf(savefile, "어드밴트모미지승률=%2lf\n", 어드밴트모미지.승률);
	fprintf(savefile, "어드밴트모미지레이팅=%d\n", 어드밴트모미지.레이팅);
	fprintf(savefile, "어드밴트모미지연승=%d\n", 어드밴트모미지.연승);
	fprintf(savefile, "어드밴트모미지연패=%d\n", 어드밴트모미지.연패);
	fprintf(savefile, "어드밴트모미지킬=%d\n", 어드밴트모미지.킬);
	fprintf(savefile, "어드밴트모미지데스=%d\n", 어드밴트모미지.데스);
	fprintf(savefile, "어드밴트모미지어시스트=%d\n", 어드밴트모미지.어시스트);
	fprintf(savefile, "어드밴트모미지백조의부름=%d\n", 어드밴트모미지.백조의부름);
	fprintf(savefile, "어드밴트모미지회복의삼지창=%d\n", 어드밴트모미지.회복의삼지창);
	fprintf(savefile, "어드밴트모미지밤의사냥꾼=%d\n", 어드밴트모미지.밤의사냥꾼);
	fprintf(savefile, "어드밴트모미지비겁한고블린=%d\n", 어드밴트모미지.비겁한고블린);
	fprintf(savefile, "어드밴트모미지깨달음=%d\n", 어드밴트모미지.깨달음);
	fprintf(savefile, "어드밴트모미지흑마법=%d\n", 어드밴트모미지.흑마법);
	fprintf(savefile, "어드밴트모미지음과양=%d\n", 어드밴트모미지.음과양의조화);
	fprintf(savefile, "어드밴트모미지아레스=%d\n", 어드밴트모미지.아레스의투구);
	fprintf(savefile, "어드밴트모미지라식=%d\n", 어드밴트모미지.라식);
	fprintf(savefile, "어드밴트모미지장화=%d\n", 어드밴트모미지.축복의장화);
	fprintf(savefile, "어드밴트모미지반지=%d\n", 어드밴트모미지.신비로운반지);
	fprintf(savefile, "어드밴트모미지치명적인탄환=%d\n", 어드밴트모미지.치명적인탄환);
	fprintf(savefile, "어드밴트모미지깨물기=%d\n", 어드밴트모미지.깨물기);
	fprintf(savefile, "어드밴트모미지이동의즐거움=%d\n", 어드밴트모미지.이동의즐거움);
	fprintf(savefile, "어드밴트모미지판다렌=%d\n", 어드밴트모미지.판다렌의화염작렬);
	fprintf(savefile, "어드밴트모미지마법부스터=%d\n", 어드밴트모미지.마법부스터);
	fprintf(savefile, "어드밴트모미지단단한벽=%d\n", 어드밴트모미지.단단한벽);
	fprintf(savefile, "어드밴트모미지마법의망토=%d\n", 어드밴트모미지.마법의망토);
	fprintf(savefile, "어드밴트모미지고대신비마법서=%d\n", 어드밴트모미지.고대신비의마법서);
	fprintf(savefile, "어드밴트모미지산뜻한기분=%d\n", 어드밴트모미지.산뜻한기분);
	fprintf(savefile, "어드밴트모미지갈망의검=%d\n", 어드밴트모미지.갈망의검);
	fprintf(savefile, "어드밴트모미지지배전투의기본=%d\n", 어드밴트모미지.지배전투의기본);
	fprintf(savefile, "어드밴트모미지지배푸른영기=%d\n", 어드밴트모미지.지배푸른영기);
	fprintf(savefile, "어드밴트모미지마법전투의기본=%d\n", 어드밴트모미지.마법전투의기본);
	fprintf(savefile, "어드밴트모미지마법푸른영기=%d\n", 어드밴트모미지.마법푸른영기);
	fprintf(savefile, "어드밴트모미지강인한체력=%d\n", 어드밴트모미지.강인한체력);
	fprintf(savefile, "어드밴트모미지활력증진=%d\n", 어드밴트모미지.활력증진);
	fprintf(savefile, "어드밴트모미지저돌적인공격방식=%d\n", 어드밴트모미지.저돌적인공격방식);
	fprintf(savefile, "어드밴트모미지신비한공격방식=%d\n", 어드밴트모미지.신비한공격방식);
	fprintf(savefile, "어드밴트모미지투쟁갑옷무력화=%d\n", 어드밴트모미지.투쟁갑옷무력화);
	fprintf(savefile, "어드밴트모미지투쟁저항무력화=%d\n", 어드밴트모미지.투쟁저항무력화);
	fprintf(savefile, "어드밴트모미지지배갑옷무력화=%d\n", 어드밴트모미지.지배갑옷무력화);
	fprintf(savefile, "어드밴트모미지지배저항무력화=%d\n", 어드밴트모미지.지배저항무력화);
	fprintf(savefile, "어드밴트모미지마법갑옷무력화=%d\n", 어드밴트모미지.마법갑옷무력화);
	fprintf(savefile, "어드밴트모미지마법저항무력화=%d\n", 어드밴트모미지.마법저항무력화);
	fprintf(savefile, "어드밴트모미지신비의방패=%d\n", 어드밴트모미지.신비의방패);
	fprintf(savefile, "어드밴트모미지저항의방패=%d\n", 어드밴트모미지.저항의방패);
	fprintf(savefile, "어드밴트모미지경험치사기꾼=%d\n", 어드밴트모미지.경험치사기꾼);
	fprintf(savefile, "어드밴트모미지골드도둑=%d\n", 어드밴트모미지.골드도둑);
	fprintf(savefile, "어드밴트모미지투쟁타격용분=%d\n", 어드밴트모미지.투쟁타격용분);
	fprintf(savefile, "어드밴트모미지투쟁마법용분=%d\n", 어드밴트모미지.투쟁마법용분);
	fprintf(savefile, "어드밴트모미지지배물리용분=%d\n", 어드밴트모미지.지배물리용분);
	fprintf(savefile, "어드밴트모미지지배마법용분=%d\n", 어드밴트모미지.지배마법용분);
	fprintf(savefile, "어드밴트모미지마법물리용분=%d\n", 어드밴트모미지.마법물리용분);
	fprintf(savefile, "어드밴트모미지마법마법용분=%d\n", 어드밴트모미지.마법마법용분);
	fprintf(savefile, "어드밴트모미지긍지최후의방어=%d\n", 어드밴트모미지.긍지최후의방어);
	fprintf(savefile, "어드밴트모미지축복최후의방어=%d\n", 어드밴트모미지.축복최후의방어);
	fprintf(savefile, "어드밴트모미지집중사격=%d\n", 어드밴트모미지.집중사격);
	fprintf(savefile, "어드밴트모미지무자비한연사=%d\n", 어드밴트모미지.무자비한연사);
	fprintf(savefile, "어드밴트모미지환상적인공격=%d\n", 어드밴트모미지.환상적인공격);
	fprintf(savefile, "어드밴트모미지제우스의분노=%d\n", 어드밴트모미지.제우스의분노);
	fprintf(savefile, "어드밴트모미지오디세우스의성검=%d\n", 어드밴트모미지.오디세우스의성검);
	fprintf(savefile, "어드밴트모미지대마법신비로운메테오=%d\n", 어드밴트모미지.대마법신비로운메테오);
	fprintf(savefile, "어드밴트모미지마법펀치=%d\n", 어드밴트모미지.마법펀치);
	fprintf(savefile, "어드밴트모미지곰발바닥=%d\n", 어드밴트모미지.곰발바닥);
	fprintf(savefile, "어드밴트모미지토르의분노=%d\n", 어드밴트모미지.토르의분노);
	fprintf(savefile, "어드밴트모미지마법의점멸=%d\n", 어드밴트모미지.마법의점멸);
	fprintf(savefile, "어드밴트모미지신의가호=%d\n", 어드밴트모미지.신의가호);
	//파츄리
	fprintf(savefile, "파츄리플레이횟수=%d\n", 파츄리.게임횟수);
	fprintf(savefile, "파츄리승리=%d\n", 파츄리.승수);
	fprintf(savefile, "파츄리패배=%d\n", 파츄리.패수);
	fprintf(savefile, "파츄리승률=%2lf\n", 파츄리.승률);
	fprintf(savefile, "파츄리레이팅=%d\n", 파츄리.레이팅);
	fprintf(savefile, "파츄리연승=%d\n", 파츄리.연승);
	fprintf(savefile, "파츄리연패=%d\n", 파츄리.연패);
	fprintf(savefile, "파츄리킬=%d\n", 파츄리.킬);
	fprintf(savefile, "파츄리데스=%d\n", 파츄리.데스);
	fprintf(savefile, "파츄리어시스트=%d\n", 파츄리.어시스트);
	fprintf(savefile, "파츄리백조의부름=%d\n", 파츄리.백조의부름);
	fprintf(savefile, "파츄리회복의삼지창=%d\n", 파츄리.회복의삼지창);
	fprintf(savefile, "파츄리밤의사냥꾼=%d\n", 파츄리.밤의사냥꾼);
	fprintf(savefile, "파츄리비겁한고블린=%d\n", 파츄리.비겁한고블린);
	fprintf(savefile, "파츄리깨달음=%d\n", 파츄리.깨달음);
	fprintf(savefile, "파츄리흑마법=%d\n", 파츄리.흑마법);
	fprintf(savefile, "파츄리음과양=%d\n", 파츄리.음과양의조화);
	fprintf(savefile, "파츄리아레스=%d\n", 파츄리.아레스의투구);
	fprintf(savefile, "파츄리라식=%d\n", 파츄리.라식);
	fprintf(savefile, "파츄리장화=%d\n", 파츄리.축복의장화);
	fprintf(savefile, "파츄리반지=%d\n", 파츄리.신비로운반지);
	fprintf(savefile, "파츄리치명적인탄환=%d\n", 파츄리.치명적인탄환);
	fprintf(savefile, "파츄리깨물기=%d\n", 파츄리.깨물기);
	fprintf(savefile, "파츄리이동의즐거움=%d\n", 파츄리.이동의즐거움);
	fprintf(savefile, "파츄리판다렌=%d\n", 파츄리.판다렌의화염작렬);
	fprintf(savefile, "파츄리마법부스터=%d\n", 파츄리.마법부스터);
	fprintf(savefile, "파츄리단단한벽=%d\n", 파츄리.단단한벽);
	fprintf(savefile, "파츄리마법의망토=%d\n", 파츄리.마법의망토);
	fprintf(savefile, "파츄리고대신비마법서=%d\n", 파츄리.고대신비의마법서);
	fprintf(savefile, "파츄리산뜻한기분=%d\n", 파츄리.산뜻한기분);
	fprintf(savefile, "파츄리갈망의검=%d\n", 파츄리.갈망의검);
	fprintf(savefile, "파츄리지배전투의기본=%d\n", 파츄리.지배전투의기본);
	fprintf(savefile, "파츄리지배푸른영기=%d\n", 파츄리.지배푸른영기);
	fprintf(savefile, "파츄리마법전투의기본=%d\n", 파츄리.마법전투의기본);
	fprintf(savefile, "파츄리마법푸른영기=%d\n", 파츄리.마법푸른영기);
	fprintf(savefile, "파츄리강인한체력=%d\n", 파츄리.강인한체력);
	fprintf(savefile, "파츄리활력증진=%d\n", 파츄리.활력증진);
	fprintf(savefile, "파츄리저돌적인공격방식=%d\n", 파츄리.저돌적인공격방식);
	fprintf(savefile, "파츄리신비한공격방식=%d\n", 파츄리.신비한공격방식);
	fprintf(savefile, "파츄리투쟁갑옷무력화=%d\n", 파츄리.투쟁갑옷무력화);
	fprintf(savefile, "파츄리투쟁저항무력화=%d\n", 파츄리.투쟁저항무력화);
	fprintf(savefile, "파츄리지배갑옷무력화=%d\n", 파츄리.지배갑옷무력화);
	fprintf(savefile, "파츄리지배저항무력화=%d\n", 파츄리.지배저항무력화);
	fprintf(savefile, "파츄리마법갑옷무력화=%d\n", 파츄리.마법갑옷무력화);
	fprintf(savefile, "파츄리마법저항무력화=%d\n", 파츄리.마법저항무력화);
	fprintf(savefile, "파츄리신비의방패=%d\n", 파츄리.신비의방패);
	fprintf(savefile, "파츄리저항의방패=%d\n", 파츄리.저항의방패);
	fprintf(savefile, "파츄리경험치사기꾼=%d\n", 파츄리.경험치사기꾼);
	fprintf(savefile, "파츄리골드도둑=%d\n", 파츄리.골드도둑);
	fprintf(savefile, "파츄리투쟁타격용분=%d\n", 파츄리.투쟁타격용분);
	fprintf(savefile, "파츄리투쟁마법용분=%d\n", 파츄리.투쟁마법용분);
	fprintf(savefile, "파츄리지배물리용분=%d\n", 파츄리.지배물리용분);
	fprintf(savefile, "파츄리지배마법용분=%d\n", 파츄리.지배마법용분);
	fprintf(savefile, "파츄리마법물리용분=%d\n", 파츄리.마법물리용분);
	fprintf(savefile, "파츄리마법마법용분=%d\n", 파츄리.마법마법용분);
	fprintf(savefile, "파츄리긍지최후의방어=%d\n", 파츄리.긍지최후의방어);
	fprintf(savefile, "파츄리축복최후의방어=%d\n", 파츄리.축복최후의방어);
	fprintf(savefile, "파츄리집중사격=%d\n", 파츄리.집중사격);
	fprintf(savefile, "파츄리무자비한연사=%d\n", 파츄리.무자비한연사);
	fprintf(savefile, "파츄리환상적인공격=%d\n", 파츄리.환상적인공격);
	fprintf(savefile, "파츄리제우스의분노=%d\n", 파츄리.제우스의분노);
	fprintf(savefile, "파츄리오디세우스의성검=%d\n", 파츄리.오디세우스의성검);
	fprintf(savefile, "파츄리대마법신비로운메테오=%d\n", 파츄리.대마법신비로운메테오);
	fprintf(savefile, "파츄리마법펀치=%d\n", 파츄리.마법펀치);
	fprintf(savefile, "파츄리곰발바닥=%d\n", 파츄리.곰발바닥);
	fprintf(savefile, "파츄리토르의분노=%d\n", 파츄리.토르의분노);
	fprintf(savefile, "파츄리마법의점멸=%d\n", 파츄리.마법의점멸);
	fprintf(savefile, "파츄리신의가호=%d\n", 파츄리.신의가호);
	//우츠호
	fprintf(savefile, "우츠호플레이횟수=%d\n", 우츠호.게임횟수);
	fprintf(savefile, "우츠호승리=%d\n", 우츠호.승수);
	fprintf(savefile, "우츠호패배=%d\n", 우츠호.패수);
	fprintf(savefile, "우츠호승률=%2lf\n", 우츠호.승률);
	fprintf(savefile, "우츠호레이팅=%d\n", 우츠호.레이팅);
	fprintf(savefile, "우츠호연승=%d\n", 우츠호.연승);
	fprintf(savefile, "우츠호연패=%d\n", 우츠호.연패);
	fprintf(savefile, "우츠호킬=%d\n", 우츠호.킬);
	fprintf(savefile, "우츠호데스=%d\n", 우츠호.데스);
	fprintf(savefile, "우츠호어시스트=%d\n", 우츠호.어시스트);
	fprintf(savefile, "우츠호백조의부름=%d\n", 우츠호.백조의부름);
	fprintf(savefile, "우츠호회복의삼지창=%d\n", 우츠호.회복의삼지창);
	fprintf(savefile, "우츠호밤의사냥꾼=%d\n", 우츠호.밤의사냥꾼);
	fprintf(savefile, "우츠호비겁한고블린=%d\n", 우츠호.비겁한고블린);
	fprintf(savefile, "우츠호깨달음=%d\n", 우츠호.깨달음);
	fprintf(savefile, "우츠호흑마법=%d\n", 우츠호.흑마법);
	fprintf(savefile, "우츠호음과양=%d\n", 우츠호.음과양의조화);
	fprintf(savefile, "우츠호아레스=%d\n", 우츠호.아레스의투구);
	fprintf(savefile, "우츠호라식=%d\n", 우츠호.라식);
	fprintf(savefile, "우츠호장화=%d\n", 우츠호.축복의장화);
	fprintf(savefile, "우츠호반지=%d\n", 우츠호.신비로운반지);
	fprintf(savefile, "우츠호치명적인탄환=%d\n", 우츠호.치명적인탄환);
	fprintf(savefile, "우츠호깨물기=%d\n", 우츠호.깨물기);
	fprintf(savefile, "우츠호이동의즐거움=%d\n", 우츠호.이동의즐거움);
	fprintf(savefile, "우츠호판다렌=%d\n", 우츠호.판다렌의화염작렬);
	fprintf(savefile, "우츠호마법부스터=%d\n", 우츠호.마법부스터);
	fprintf(savefile, "우츠호단단한벽=%d\n", 우츠호.단단한벽);
	fprintf(savefile, "우츠호마법의망토=%d\n", 우츠호.마법의망토);
	fprintf(savefile, "우츠호고대신비마법서=%d\n", 우츠호.고대신비의마법서);
	fprintf(savefile, "우츠호산뜻한기분=%d\n", 우츠호.산뜻한기분);
	fprintf(savefile, "우츠호갈망의검=%d\n", 우츠호.갈망의검);
	fprintf(savefile, "우츠호지배전투의기본=%d\n", 우츠호.지배전투의기본);
	fprintf(savefile, "우츠호지배푸른영기=%d\n", 우츠호.지배푸른영기);
	fprintf(savefile, "우츠호마법전투의기본=%d\n", 우츠호.마법전투의기본);
	fprintf(savefile, "우츠호마법푸른영기=%d\n", 우츠호.마법푸른영기);
	fprintf(savefile, "우츠호강인한체력=%d\n", 우츠호.강인한체력);
	fprintf(savefile, "우츠호활력증진=%d\n", 우츠호.활력증진);
	fprintf(savefile, "우츠호저돌적인공격방식=%d\n", 우츠호.저돌적인공격방식);
	fprintf(savefile, "우츠호신비한공격방식=%d\n", 우츠호.신비한공격방식);
	fprintf(savefile, "우츠호투쟁갑옷무력화=%d\n", 우츠호.투쟁갑옷무력화);
	fprintf(savefile, "우츠호투쟁저항무력화=%d\n", 우츠호.투쟁저항무력화);
	fprintf(savefile, "우츠호지배갑옷무력화=%d\n", 우츠호.지배갑옷무력화);
	fprintf(savefile, "우츠호지배저항무력화=%d\n", 우츠호.지배저항무력화);
	fprintf(savefile, "우츠호마법갑옷무력화=%d\n", 우츠호.마법갑옷무력화);
	fprintf(savefile, "우츠호마법저항무력화=%d\n", 우츠호.마법저항무력화);
	fprintf(savefile, "우츠호신비의방패=%d\n", 우츠호.신비의방패);
	fprintf(savefile, "우츠호저항의방패=%d\n", 우츠호.저항의방패);
	fprintf(savefile, "우츠호경험치사기꾼=%d\n", 우츠호.경험치사기꾼);
	fprintf(savefile, "우츠호골드도둑=%d\n", 우츠호.골드도둑);
	fprintf(savefile, "우츠호투쟁타격용분=%d\n", 우츠호.투쟁타격용분);
	fprintf(savefile, "우츠호투쟁마법용분=%d\n", 우츠호.투쟁마법용분);
	fprintf(savefile, "우츠호지배물리용분=%d\n", 우츠호.지배물리용분);
	fprintf(savefile, "우츠호지배마법용분=%d\n", 우츠호.지배마법용분);
	fprintf(savefile, "우츠호마법물리용분=%d\n", 우츠호.마법물리용분);
	fprintf(savefile, "우츠호마법마법용분=%d\n", 우츠호.마법마법용분);
	fprintf(savefile, "우츠호긍지최후의방어=%d\n", 우츠호.긍지최후의방어);
	fprintf(savefile, "우츠호축복최후의방어=%d\n", 우츠호.축복최후의방어);
	fprintf(savefile, "우츠호집중사격=%d\n", 우츠호.집중사격);
	fprintf(savefile, "우츠호무자비한연사=%d\n", 우츠호.무자비한연사);
	fprintf(savefile, "우츠호환상적인공격=%d\n", 우츠호.환상적인공격);
	fprintf(savefile, "우츠호제우스의분노=%d\n", 우츠호.제우스의분노);
	fprintf(savefile, "우츠호오디세우스의성검=%d\n", 우츠호.오디세우스의성검);
	fprintf(savefile, "우츠호대마법신비로운메테오=%d\n", 우츠호.대마법신비로운메테오);
	fprintf(savefile, "우츠호마법펀치=%d\n", 우츠호.마법펀치);
	fprintf(savefile, "우츠호곰발바닥=%d\n", 우츠호.곰발바닥);
	fprintf(savefile, "우츠호토르의분노=%d\n", 우츠호.토르의분노);
	fprintf(savefile, "우츠호마법의점멸=%d\n", 우츠호.마법의점멸);
	fprintf(savefile, "우츠호신의가호=%d\n", 우츠호.신의가호);
	//스와코
	fprintf(savefile, "스와코플레이횟수=%d\n", 스와코.게임횟수);
	fprintf(savefile, "스와코승리=%d\n", 스와코.승수);
	fprintf(savefile, "스와코패배=%d\n", 스와코.패수);
	fprintf(savefile, "스와코승률=%2lf\n", 스와코.승률);
	fprintf(savefile, "스와코레이팅=%d\n", 스와코.레이팅);
	fprintf(savefile, "스와코연승=%d\n", 스와코.연승);
	fprintf(savefile, "스와코연패=%d\n", 스와코.연패);
	fprintf(savefile, "스와코킬=%d\n", 스와코.킬);
	fprintf(savefile, "스와코데스=%d\n", 스와코.데스);
	fprintf(savefile, "스와코어시스트=%d\n", 스와코.어시스트);
	fprintf(savefile, "스와코백조의부름=%d\n", 스와코.백조의부름);
	fprintf(savefile, "스와코회복의삼지창=%d\n", 스와코.회복의삼지창);
	fprintf(savefile, "스와코밤의사냥꾼=%d\n", 스와코.밤의사냥꾼);
	fprintf(savefile, "스와코비겁한고블린=%d\n", 스와코.비겁한고블린);
	fprintf(savefile, "스와코깨달음=%d\n", 스와코.깨달음);
	fprintf(savefile, "스와코흑마법=%d\n", 스와코.흑마법);
	fprintf(savefile, "스와코음과양=%d\n", 스와코.음과양의조화);
	fprintf(savefile, "스와코아레스=%d\n", 스와코.아레스의투구);
	fprintf(savefile, "스와코라식=%d\n", 스와코.라식);
	fprintf(savefile, "스와코장화=%d\n", 스와코.축복의장화);
	fprintf(savefile, "스와코반지=%d\n", 스와코.신비로운반지);
	fprintf(savefile, "스와코치명적인탄환=%d\n", 스와코.치명적인탄환);
	fprintf(savefile, "스와코깨물기=%d\n", 스와코.깨물기);
	fprintf(savefile, "스와코이동의즐거움=%d\n", 스와코.이동의즐거움);
	fprintf(savefile, "스와코판다렌=%d\n", 스와코.판다렌의화염작렬);
	fprintf(savefile, "스와코마법부스터=%d\n", 스와코.마법부스터);
	fprintf(savefile, "스와코단단한벽=%d\n", 스와코.단단한벽);
	fprintf(savefile, "스와코마법의망토=%d\n", 스와코.마법의망토);
	fprintf(savefile, "스와코고대신비마법서=%d\n", 스와코.고대신비의마법서);
	fprintf(savefile, "스와코산뜻한기분=%d\n", 스와코.산뜻한기분);
	fprintf(savefile, "스와코갈망의검=%d\n", 스와코.갈망의검);
	fprintf(savefile, "스와코지배전투의기본=%d\n", 스와코.지배전투의기본);
	fprintf(savefile, "스와코지배푸른영기=%d\n", 스와코.지배푸른영기);
	fprintf(savefile, "스와코마법전투의기본=%d\n", 스와코.마법전투의기본);
	fprintf(savefile, "스와코마법푸른영기=%d\n", 스와코.마법푸른영기);
	fprintf(savefile, "스와코강인한체력=%d\n", 스와코.강인한체력);
	fprintf(savefile, "스와코활력증진=%d\n", 스와코.활력증진);
	fprintf(savefile, "스와코저돌적인공격방식=%d\n", 스와코.저돌적인공격방식);
	fprintf(savefile, "스와코신비한공격방식=%d\n", 스와코.신비한공격방식);
	fprintf(savefile, "스와코투쟁갑옷무력화=%d\n", 스와코.투쟁갑옷무력화);
	fprintf(savefile, "스와코투쟁저항무력화=%d\n", 스와코.투쟁저항무력화);
	fprintf(savefile, "스와코지배갑옷무력화=%d\n", 스와코.지배갑옷무력화);
	fprintf(savefile, "스와코지배저항무력화=%d\n", 스와코.지배저항무력화);
	fprintf(savefile, "스와코마법갑옷무력화=%d\n", 스와코.마법갑옷무력화);
	fprintf(savefile, "스와코마법저항무력화=%d\n", 스와코.마법저항무력화);
	fprintf(savefile, "스와코신비의방패=%d\n", 스와코.신비의방패);
	fprintf(savefile, "스와코저항의방패=%d\n", 스와코.저항의방패);
	fprintf(savefile, "스와코경험치사기꾼=%d\n", 스와코.경험치사기꾼);
	fprintf(savefile, "스와코골드도둑=%d\n", 스와코.골드도둑);
	fprintf(savefile, "스와코투쟁타격용분=%d\n", 스와코.투쟁타격용분);
	fprintf(savefile, "스와코투쟁마법용분=%d\n", 스와코.투쟁마법용분);
	fprintf(savefile, "스와코지배물리용분=%d\n", 스와코.지배물리용분);
	fprintf(savefile, "스와코지배마법용분=%d\n", 스와코.지배마법용분);
	fprintf(savefile, "스와코마법물리용분=%d\n", 스와코.마법물리용분);
	fprintf(savefile, "스와코마법마법용분=%d\n", 스와코.마법마법용분);
	fprintf(savefile, "스와코긍지최후의방어=%d\n", 스와코.긍지최후의방어);
	fprintf(savefile, "스와코축복최후의방어=%d\n", 스와코.축복최후의방어);
	fprintf(savefile, "스와코집중사격=%d\n", 스와코.집중사격);
	fprintf(savefile, "스와코무자비한연사=%d\n", 스와코.무자비한연사);
	fprintf(savefile, "스와코환상적인공격=%d\n", 스와코.환상적인공격);
	fprintf(savefile, "스와코제우스의분노=%d\n", 스와코.제우스의분노);
	fprintf(savefile, "스와코오디세우스의성검=%d\n", 스와코.오디세우스의성검);
	fprintf(savefile, "스와코대마법신비로운메테오=%d\n", 스와코.대마법신비로운메테오);
	fprintf(savefile, "스와코마법펀치=%d\n", 스와코.마법펀치);
	fprintf(savefile, "스와코곰발바닥=%d\n", 스와코.곰발바닥);
	fprintf(savefile, "스와코토르의분노=%d\n", 스와코.토르의분노);
	fprintf(savefile, "스와코마법의점멸=%d\n", 스와코.마법의점멸);
	fprintf(savefile, "스와코신의가호=%d\n", 스와코.신의가호);
	//텐시_딜러
	fprintf(savefile, "텐시_딜러플레이횟수=%d\n", 텐시_딜러.게임횟수);
	fprintf(savefile, "텐시_딜러승리=%d\n", 텐시_딜러.승수);
	fprintf(savefile, "텐시_딜러패배=%d\n", 텐시_딜러.패수);
	fprintf(savefile, "텐시_딜러승률=%2lf\n", 텐시_딜러.승률);
	fprintf(savefile, "텐시_딜러레이팅=%d\n", 텐시_딜러.레이팅);
	fprintf(savefile, "텐시_딜러연승=%d\n", 텐시_딜러.연승);
	fprintf(savefile, "텐시_딜러연패=%d\n", 텐시_딜러.연패);
	fprintf(savefile, "텐시_딜러킬=%d\n", 텐시_딜러.킬);
	fprintf(savefile, "텐시_딜러데스=%d\n", 텐시_딜러.데스);
	fprintf(savefile, "텐시_딜러어시스트=%d\n", 텐시_딜러.어시스트);
	fprintf(savefile, "텐시_딜러백조의부름=%d\n", 텐시_딜러.백조의부름);
	fprintf(savefile, "텐시_딜러회복의삼지창=%d\n", 텐시_딜러.회복의삼지창);
	fprintf(savefile, "텐시_딜러밤의사냥꾼=%d\n", 텐시_딜러.밤의사냥꾼);
	fprintf(savefile, "텐시_딜러비겁한고블린=%d\n", 텐시_딜러.비겁한고블린);
	fprintf(savefile, "텐시_딜러깨달음=%d\n", 텐시_딜러.깨달음);
	fprintf(savefile, "텐시_딜러흑마법=%d\n", 텐시_딜러.흑마법);
	fprintf(savefile, "텐시_딜러음과양=%d\n", 텐시_딜러.음과양의조화);
	fprintf(savefile, "텐시_딜러아레스=%d\n", 텐시_딜러.아레스의투구);
	fprintf(savefile, "텐시_딜러라식=%d\n", 텐시_딜러.라식);
	fprintf(savefile, "텐시_딜러장화=%d\n", 텐시_딜러.축복의장화);
	fprintf(savefile, "텐시_딜러반지=%d\n", 텐시_딜러.신비로운반지);
	fprintf(savefile, "텐시_딜러치명적인탄환=%d\n", 텐시_딜러.치명적인탄환);
	fprintf(savefile, "텐시_딜러깨물기=%d\n", 텐시_딜러.깨물기);
	fprintf(savefile, "텐시_딜러이동의즐거움=%d\n", 텐시_딜러.이동의즐거움);
	fprintf(savefile, "텐시_딜러판다렌=%d\n", 텐시_딜러.판다렌의화염작렬);
	fprintf(savefile, "텐시_딜러마법부스터=%d\n", 텐시_딜러.마법부스터);
	fprintf(savefile, "텐시_딜러단단한벽=%d\n", 텐시_딜러.단단한벽);
	fprintf(savefile, "텐시_딜러마법의망토=%d\n", 텐시_딜러.마법의망토);
	fprintf(savefile, "텐시_딜러고대신비마법서=%d\n", 텐시_딜러.고대신비의마법서);
	fprintf(savefile, "텐시_딜러산뜻한기분=%d\n", 텐시_딜러.산뜻한기분);
	fprintf(savefile, "텐시_딜러갈망의검=%d\n", 텐시_딜러.갈망의검);
	fprintf(savefile, "텐시_딜러지배전투의기본=%d\n", 텐시_딜러.지배전투의기본);
	fprintf(savefile, "텐시_딜러지배푸른영기=%d\n", 텐시_딜러.지배푸른영기);
	fprintf(savefile, "텐시_딜러마법전투의기본=%d\n", 텐시_딜러.마법전투의기본);
	fprintf(savefile, "텐시_딜러마법푸른영기=%d\n", 텐시_딜러.마법푸른영기);
	fprintf(savefile, "텐시_딜러강인한체력=%d\n", 텐시_딜러.강인한체력);
	fprintf(savefile, "텐시_딜러활력증진=%d\n", 텐시_딜러.활력증진);
	fprintf(savefile, "텐시_딜러저돌적인공격방식=%d\n", 텐시_딜러.저돌적인공격방식);
	fprintf(savefile, "텐시_딜러신비한공격방식=%d\n", 텐시_딜러.신비한공격방식);
	fprintf(savefile, "텐시_딜러투쟁갑옷무력화=%d\n", 텐시_딜러.투쟁갑옷무력화);
	fprintf(savefile, "텐시_딜러투쟁저항무력화=%d\n", 텐시_딜러.투쟁저항무력화);
	fprintf(savefile, "텐시_딜러지배갑옷무력화=%d\n", 텐시_딜러.지배갑옷무력화);
	fprintf(savefile, "텐시_딜러지배저항무력화=%d\n", 텐시_딜러.지배저항무력화);
	fprintf(savefile, "텐시_딜러마법갑옷무력화=%d\n", 텐시_딜러.마법갑옷무력화);
	fprintf(savefile, "텐시_딜러마법저항무력화=%d\n", 텐시_딜러.마법저항무력화);
	fprintf(savefile, "텐시_딜러신비의방패=%d\n", 텐시_딜러.신비의방패);
	fprintf(savefile, "텐시_딜러저항의방패=%d\n", 텐시_딜러.저항의방패);
	fprintf(savefile, "텐시_딜러경험치사기꾼=%d\n", 텐시_딜러.경험치사기꾼);
	fprintf(savefile, "텐시_딜러골드도둑=%d\n", 텐시_딜러.골드도둑);
	fprintf(savefile, "텐시_딜러투쟁타격용분=%d\n", 텐시_딜러.투쟁타격용분);
	fprintf(savefile, "텐시_딜러투쟁마법용분=%d\n", 텐시_딜러.투쟁마법용분);
	fprintf(savefile, "텐시_딜러지배물리용분=%d\n", 텐시_딜러.지배물리용분);
	fprintf(savefile, "텐시_딜러지배마법용분=%d\n", 텐시_딜러.지배마법용분);
	fprintf(savefile, "텐시_딜러마법물리용분=%d\n", 텐시_딜러.마법물리용분);
	fprintf(savefile, "텐시_딜러마법마법용분=%d\n", 텐시_딜러.마법마법용분);
	fprintf(savefile, "텐시_딜러긍지최후의방어=%d\n", 텐시_딜러.긍지최후의방어);
	fprintf(savefile, "텐시_딜러축복최후의방어=%d\n", 텐시_딜러.축복최후의방어);
	fprintf(savefile, "텐시_딜러집중사격=%d\n", 텐시_딜러.집중사격);
	fprintf(savefile, "텐시_딜러무자비한연사=%d\n", 텐시_딜러.무자비한연사);
	fprintf(savefile, "텐시_딜러환상적인공격=%d\n", 텐시_딜러.환상적인공격);
	fprintf(savefile, "텐시_딜러제우스의분노=%d\n", 텐시_딜러.제우스의분노);
	fprintf(savefile, "텐시_딜러오디세우스의성검=%d\n", 텐시_딜러.오디세우스의성검);
	fprintf(savefile, "텐시_딜러대마법신비로운메테오=%d\n", 텐시_딜러.대마법신비로운메테오);
	fprintf(savefile, "텐시_딜러마법펀치=%d\n", 텐시_딜러.마법펀치);
	fprintf(savefile, "텐시_딜러곰발바닥=%d\n", 텐시_딜러.곰발바닥);
	fprintf(savefile, "텐시_딜러토르의분노=%d\n", 텐시_딜러.토르의분노);
	fprintf(savefile, "텐시_딜러마법의점멸=%d\n", 텐시_딜러.마법의점멸);
	fprintf(savefile, "텐시_딜러신의가호=%d\n", 텐시_딜러.신의가호);
	//텐시_탱커
	fprintf(savefile, "텐시_탱커플레이횟수=%d\n", 텐시_탱커.게임횟수);
	fprintf(savefile, "텐시_탱커승리=%d\n", 텐시_탱커.승수);
	fprintf(savefile, "텐시_탱커패배=%d\n", 텐시_탱커.패수);
	fprintf(savefile, "텐시_탱커승률=%2lf\n", 텐시_탱커.승률);
	fprintf(savefile, "텐시_탱커레이팅=%d\n", 텐시_탱커.레이팅);
	fprintf(savefile, "텐시_탱커연승=%d\n", 텐시_탱커.연승);
	fprintf(savefile, "텐시_탱커연패=%d\n", 텐시_탱커.연패);
	fprintf(savefile, "텐시_탱커킬=%d\n", 텐시_탱커.킬);
	fprintf(savefile, "텐시_탱커데스=%d\n", 텐시_탱커.데스);
	fprintf(savefile, "텐시_탱커어시스트=%d\n", 텐시_탱커.어시스트);
	fprintf(savefile, "텐시_탱커백조의부름=%d\n", 텐시_탱커.백조의부름);
	fprintf(savefile, "텐시_탱커회복의삼지창=%d\n", 텐시_탱커.회복의삼지창);
	fprintf(savefile, "텐시_탱커밤의사냥꾼=%d\n", 텐시_탱커.밤의사냥꾼);
	fprintf(savefile, "텐시_탱커비겁한고블린=%d\n", 텐시_탱커.비겁한고블린);
	fprintf(savefile, "텐시_탱커깨달음=%d\n", 텐시_탱커.깨달음);
	fprintf(savefile, "텐시_탱커흑마법=%d\n", 텐시_탱커.흑마법);
	fprintf(savefile, "텐시_탱커음과양=%d\n", 텐시_탱커.음과양의조화);
	fprintf(savefile, "텐시_탱커아레스=%d\n", 텐시_탱커.아레스의투구);
	fprintf(savefile, "텐시_탱커라식=%d\n", 텐시_탱커.라식);
	fprintf(savefile, "텐시_탱커장화=%d\n", 텐시_탱커.축복의장화);
	fprintf(savefile, "텐시_탱커반지=%d\n", 텐시_탱커.신비로운반지);
	fprintf(savefile, "텐시_탱커치명적인탄환=%d\n", 텐시_탱커.치명적인탄환);
	fprintf(savefile, "텐시_탱커깨물기=%d\n", 텐시_탱커.깨물기);
	fprintf(savefile, "텐시_탱커이동의즐거움=%d\n", 텐시_탱커.이동의즐거움);
	fprintf(savefile, "텐시_탱커판다렌=%d\n", 텐시_탱커.판다렌의화염작렬);
	fprintf(savefile, "텐시_탱커마법부스터=%d\n", 텐시_탱커.마법부스터);
	fprintf(savefile, "텐시_탱커단단한벽=%d\n", 텐시_탱커.단단한벽);
	fprintf(savefile, "텐시_탱커마법의망토=%d\n", 텐시_탱커.마법의망토);
	fprintf(savefile, "텐시_탱커고대신비마법서=%d\n", 텐시_탱커.고대신비의마법서);
	fprintf(savefile, "텐시_탱커산뜻한기분=%d\n", 텐시_탱커.산뜻한기분);
	fprintf(savefile, "텐시_탱커갈망의검=%d\n", 텐시_탱커.갈망의검);
	fprintf(savefile, "텐시_탱커지배전투의기본=%d\n", 텐시_탱커.지배전투의기본);
	fprintf(savefile, "텐시_탱커지배푸른영기=%d\n", 텐시_탱커.지배푸른영기);
	fprintf(savefile, "텐시_탱커마법전투의기본=%d\n", 텐시_탱커.마법전투의기본);
	fprintf(savefile, "텐시_탱커마법푸른영기=%d\n", 텐시_탱커.마법푸른영기);
	fprintf(savefile, "텐시_탱커강인한체력=%d\n", 텐시_탱커.강인한체력);
	fprintf(savefile, "텐시_탱커활력증진=%d\n", 텐시_탱커.활력증진);
	fprintf(savefile, "텐시_탱커저돌적인공격방식=%d\n", 텐시_탱커.저돌적인공격방식);
	fprintf(savefile, "텐시_탱커신비한공격방식=%d\n", 텐시_탱커.신비한공격방식);
	fprintf(savefile, "텐시_탱커투쟁갑옷무력화=%d\n", 텐시_탱커.투쟁갑옷무력화);
	fprintf(savefile, "텐시_탱커투쟁저항무력화=%d\n", 텐시_탱커.투쟁저항무력화);
	fprintf(savefile, "텐시_탱커지배갑옷무력화=%d\n", 텐시_탱커.지배갑옷무력화);
	fprintf(savefile, "텐시_탱커지배저항무력화=%d\n", 텐시_탱커.지배저항무력화);
	fprintf(savefile, "텐시_탱커마법갑옷무력화=%d\n", 텐시_탱커.마법갑옷무력화);
	fprintf(savefile, "텐시_탱커마법저항무력화=%d\n", 텐시_탱커.마법저항무력화);
	fprintf(savefile, "텐시_탱커신비의방패=%d\n", 텐시_탱커.신비의방패);
	fprintf(savefile, "텐시_탱커저항의방패=%d\n", 텐시_탱커.저항의방패);
	fprintf(savefile, "텐시_탱커경험치사기꾼=%d\n", 텐시_탱커.경험치사기꾼);
	fprintf(savefile, "텐시_탱커골드도둑=%d\n", 텐시_탱커.골드도둑);
	fprintf(savefile, "텐시_탱커투쟁타격용분=%d\n", 텐시_탱커.투쟁타격용분);
	fprintf(savefile, "텐시_탱커투쟁마법용분=%d\n", 텐시_탱커.투쟁마법용분);
	fprintf(savefile, "텐시_탱커지배물리용분=%d\n", 텐시_탱커.지배물리용분);
	fprintf(savefile, "텐시_탱커지배마법용분=%d\n", 텐시_탱커.지배마법용분);
	fprintf(savefile, "텐시_탱커마법물리용분=%d\n", 텐시_탱커.마법물리용분);
	fprintf(savefile, "텐시_탱커마법마법용분=%d\n", 텐시_탱커.마법마법용분);
	fprintf(savefile, "텐시_탱커긍지최후의방어=%d\n", 텐시_탱커.긍지최후의방어);
	fprintf(savefile, "텐시_탱커축복최후의방어=%d\n", 텐시_탱커.축복최후의방어);
	fprintf(savefile, "텐시_탱커집중사격=%d\n", 텐시_탱커.집중사격);
	fprintf(savefile, "텐시_탱커무자비한연사=%d\n", 텐시_탱커.무자비한연사);
	fprintf(savefile, "텐시_탱커환상적인공격=%d\n", 텐시_탱커.환상적인공격);
	fprintf(savefile, "텐시_탱커제우스의분노=%d\n", 텐시_탱커.제우스의분노);
	fprintf(savefile, "텐시_탱커오디세우스의성검=%d\n", 텐시_탱커.오디세우스의성검);
	fprintf(savefile, "텐시_탱커대마법신비로운메테오=%d\n", 텐시_탱커.대마법신비로운메테오);
	fprintf(savefile, "텐시_탱커마법펀치=%d\n", 텐시_탱커.마법펀치);
	fprintf(savefile, "텐시_탱커곰발바닥=%d\n", 텐시_탱커.곰발바닥);
	fprintf(savefile, "텐시_탱커토르의분노=%d\n", 텐시_탱커.토르의분노);
	fprintf(savefile, "텐시_탱커마법의점멸=%d\n", 텐시_탱커.마법의점멸);
	fprintf(savefile, "텐시_탱커신의가호=%d\n", 텐시_탱커.신의가호);
	//어드밴트치르노
	fprintf(savefile, "어드밴트치르노플레이횟수=%d\n", 어드밴트치르노.게임횟수);
	fprintf(savefile, "어드밴트치르노승리=%d\n", 어드밴트치르노.승수);
	fprintf(savefile, "어드밴트치르노패배=%d\n", 어드밴트치르노.패수);
	fprintf(savefile, "어드밴트치르노승률=%2lf\n", 어드밴트치르노.승률);
	fprintf(savefile, "어드밴트치르노레이팅=%d\n", 어드밴트치르노.레이팅);
	fprintf(savefile, "어드밴트치르노연승=%d\n", 어드밴트치르노.연승);
	fprintf(savefile, "어드밴트치르노연패=%d\n", 어드밴트치르노.연패);
	fprintf(savefile, "어드밴트치르노킬=%d\n", 어드밴트치르노.킬);
	fprintf(savefile, "어드밴트치르노데스=%d\n", 어드밴트치르노.데스);
	fprintf(savefile, "어드밴트치르노어시스트=%d\n", 어드밴트치르노.어시스트);
	fprintf(savefile, "어드밴트치르노백조의부름=%d\n", 어드밴트치르노.백조의부름);
	fprintf(savefile, "어드밴트치르노회복의삼지창=%d\n", 어드밴트치르노.회복의삼지창);
	fprintf(savefile, "어드밴트치르노밤의사냥꾼=%d\n", 어드밴트치르노.밤의사냥꾼);
	fprintf(savefile, "어드밴트치르노비겁한고블린=%d\n", 어드밴트치르노.비겁한고블린);
	fprintf(savefile, "어드밴트치르노깨달음=%d\n", 어드밴트치르노.깨달음);
	fprintf(savefile, "어드밴트치르노흑마법=%d\n", 어드밴트치르노.흑마법);
	fprintf(savefile, "어드밴트치르노음과양=%d\n", 어드밴트치르노.음과양의조화);
	fprintf(savefile, "어드밴트치르노아레스=%d\n", 어드밴트치르노.아레스의투구);
	fprintf(savefile, "어드밴트치르노라식=%d\n", 어드밴트치르노.라식);
	fprintf(savefile, "어드밴트치르노장화=%d\n", 어드밴트치르노.축복의장화);
	fprintf(savefile, "어드밴트치르노반지=%d\n", 어드밴트치르노.신비로운반지);
	fprintf(savefile, "어드밴트치르노치명적인탄환=%d\n", 어드밴트치르노.치명적인탄환);
	fprintf(savefile, "어드밴트치르노깨물기=%d\n", 어드밴트치르노.깨물기);
	fprintf(savefile, "어드밴트치르노이동의즐거움=%d\n", 어드밴트치르노.이동의즐거움);
	fprintf(savefile, "어드밴트치르노판다렌=%d\n", 어드밴트치르노.판다렌의화염작렬);
	fprintf(savefile, "어드밴트치르노마법부스터=%d\n", 어드밴트치르노.마법부스터);
	fprintf(savefile, "어드밴트치르노단단한벽=%d\n", 어드밴트치르노.단단한벽);
	fprintf(savefile, "어드밴트치르노마법의망토=%d\n", 어드밴트치르노.마법의망토);
	fprintf(savefile, "어드밴트치르노고대신비마법서=%d\n", 어드밴트치르노.고대신비의마법서);
	fprintf(savefile, "어드밴트치르노산뜻한기분=%d\n", 어드밴트치르노.산뜻한기분);
	fprintf(savefile, "어드밴트치르노갈망의검=%d\n", 어드밴트치르노.갈망의검);
	fprintf(savefile, "어드밴트치르노지배전투의기본=%d\n", 어드밴트치르노.지배전투의기본);
	fprintf(savefile, "어드밴트치르노지배푸른영기=%d\n", 어드밴트치르노.지배푸른영기);
	fprintf(savefile, "어드밴트치르노마법전투의기본=%d\n", 어드밴트치르노.마법전투의기본);
	fprintf(savefile, "어드밴트치르노마법푸른영기=%d\n", 어드밴트치르노.마법푸른영기);
	fprintf(savefile, "어드밴트치르노강인한체력=%d\n", 어드밴트치르노.강인한체력);
	fprintf(savefile, "어드밴트치르노활력증진=%d\n", 어드밴트치르노.활력증진);
	fprintf(savefile, "어드밴트치르노저돌적인공격방식=%d\n", 어드밴트치르노.저돌적인공격방식);
	fprintf(savefile, "어드밴트치르노신비한공격방식=%d\n", 어드밴트치르노.신비한공격방식);
	fprintf(savefile, "어드밴트치르노투쟁갑옷무력화=%d\n", 어드밴트치르노.투쟁갑옷무력화);
	fprintf(savefile, "어드밴트치르노투쟁저항무력화=%d\n", 어드밴트치르노.투쟁저항무력화);
	fprintf(savefile, "어드밴트치르노지배갑옷무력화=%d\n", 어드밴트치르노.지배갑옷무력화);
	fprintf(savefile, "어드밴트치르노지배저항무력화=%d\n", 어드밴트치르노.지배저항무력화);
	fprintf(savefile, "어드밴트치르노마법갑옷무력화=%d\n", 어드밴트치르노.마법갑옷무력화);
	fprintf(savefile, "어드밴트치르노마법저항무력화=%d\n", 어드밴트치르노.마법저항무력화);
	fprintf(savefile, "어드밴트치르노신비의방패=%d\n", 어드밴트치르노.신비의방패);
	fprintf(savefile, "어드밴트치르노저항의방패=%d\n", 어드밴트치르노.저항의방패);
	fprintf(savefile, "어드밴트치르노경험치사기꾼=%d\n", 어드밴트치르노.경험치사기꾼);
	fprintf(savefile, "어드밴트치르노골드도둑=%d\n", 어드밴트치르노.골드도둑);
	fprintf(savefile, "어드밴트치르노투쟁타격용분=%d\n", 어드밴트치르노.투쟁타격용분);
	fprintf(savefile, "어드밴트치르노투쟁마법용분=%d\n", 어드밴트치르노.투쟁마법용분);
	fprintf(savefile, "어드밴트치르노지배물리용분=%d\n", 어드밴트치르노.지배물리용분);
	fprintf(savefile, "어드밴트치르노지배마법용분=%d\n", 어드밴트치르노.지배마법용분);
	fprintf(savefile, "어드밴트치르노마법물리용분=%d\n", 어드밴트치르노.마법물리용분);
	fprintf(savefile, "어드밴트치르노마법마법용분=%d\n", 어드밴트치르노.마법마법용분);
	fprintf(savefile, "어드밴트치르노긍지최후의방어=%d\n", 어드밴트치르노.긍지최후의방어);
	fprintf(savefile, "어드밴트치르노축복최후의방어=%d\n", 어드밴트치르노.축복최후의방어);
	fprintf(savefile, "어드밴트치르노집중사격=%d\n", 어드밴트치르노.집중사격);
	fprintf(savefile, "어드밴트치르노무자비한연사=%d\n", 어드밴트치르노.무자비한연사);
	fprintf(savefile, "어드밴트치르노환상적인공격=%d\n", 어드밴트치르노.환상적인공격);
	fprintf(savefile, "어드밴트치르노제우스의분노=%d\n", 어드밴트치르노.제우스의분노);
	fprintf(savefile, "어드밴트치르노오디세우스의성검=%d\n", 어드밴트치르노.오디세우스의성검);
	fprintf(savefile, "어드밴트치르노대마법신비로운메테오=%d\n", 어드밴트치르노.대마법신비로운메테오);
	fprintf(savefile, "어드밴트치르노마법펀치=%d\n", 어드밴트치르노.마법펀치);
	fprintf(savefile, "어드밴트치르노곰발바닥=%d\n", 어드밴트치르노.곰발바닥);
	fprintf(savefile, "어드밴트치르노토르의분노=%d\n", 어드밴트치르노.토르의분노);
	fprintf(savefile, "어드밴트치르노마법의점멸=%d\n", 어드밴트치르노.마법의점멸);
	fprintf(savefile, "어드밴트치르노신의가호=%d\n", 어드밴트치르노.신의가호);
	//코마치
	fprintf(savefile, "코마치플레이횟수=%d\n", 코마치.게임횟수);
	fprintf(savefile, "코마치승리=%d\n", 코마치.승수);
	fprintf(savefile, "코마치패배=%d\n", 코마치.패수);
	fprintf(savefile, "코마치승률=%2lf\n", 코마치.승률);
	fprintf(savefile, "코마치레이팅=%d\n", 코마치.레이팅);
	fprintf(savefile, "코마치연승=%d\n", 코마치.연승);
	fprintf(savefile, "코마치연패=%d\n", 코마치.연패);
	fprintf(savefile, "코마치킬=%d\n", 코마치.킬);
	fprintf(savefile, "코마치데스=%d\n", 코마치.데스);
	fprintf(savefile, "코마치어시스트=%d\n", 코마치.어시스트);
	fprintf(savefile, "코마치백조의부름=%d\n", 코마치.백조의부름);
	fprintf(savefile, "코마치회복의삼지창=%d\n", 코마치.회복의삼지창);
	fprintf(savefile, "코마치밤의사냥꾼=%d\n", 코마치.밤의사냥꾼);
	fprintf(savefile, "코마치비겁한고블린=%d\n", 코마치.비겁한고블린);
	fprintf(savefile, "코마치깨달음=%d\n", 코마치.깨달음);
	fprintf(savefile, "코마치흑마법=%d\n", 코마치.흑마법);
	fprintf(savefile, "코마치음과양=%d\n", 코마치.음과양의조화);
	fprintf(savefile, "코마치아레스=%d\n", 코마치.아레스의투구);
	fprintf(savefile, "코마치라식=%d\n", 코마치.라식);
	fprintf(savefile, "코마치장화=%d\n", 코마치.축복의장화);
	fprintf(savefile, "코마치반지=%d\n", 코마치.신비로운반지);
	fprintf(savefile, "코마치치명적인탄환=%d\n", 코마치.치명적인탄환);
	fprintf(savefile, "코마치깨물기=%d\n", 코마치.깨물기);
	fprintf(savefile, "코마치이동의즐거움=%d\n", 코마치.이동의즐거움);
	fprintf(savefile, "코마치판다렌=%d\n", 코마치.판다렌의화염작렬);
	fprintf(savefile, "코마치마법부스터=%d\n", 코마치.마법부스터);
	fprintf(savefile, "코마치단단한벽=%d\n", 코마치.단단한벽);
	fprintf(savefile, "코마치마법의망토=%d\n", 코마치.마법의망토);
	fprintf(savefile, "코마치고대신비마법서=%d\n", 코마치.고대신비의마법서);
	fprintf(savefile, "코마치산뜻한기분=%d\n", 코마치.산뜻한기분);
	fprintf(savefile, "코마치갈망의검=%d\n", 코마치.갈망의검);
	fprintf(savefile, "코마치지배전투의기본=%d\n", 코마치.지배전투의기본);
	fprintf(savefile, "코마치지배푸른영기=%d\n", 코마치.지배푸른영기);
	fprintf(savefile, "코마치마법전투의기본=%d\n", 코마치.마법전투의기본);
	fprintf(savefile, "코마치마법푸른영기=%d\n", 코마치.마법푸른영기);
	fprintf(savefile, "코마치강인한체력=%d\n", 코마치.강인한체력);
	fprintf(savefile, "코마치활력증진=%d\n", 코마치.활력증진);
	fprintf(savefile, "코마치저돌적인공격방식=%d\n", 코마치.저돌적인공격방식);
	fprintf(savefile, "코마치신비한공격방식=%d\n", 코마치.신비한공격방식);
	fprintf(savefile, "코마치투쟁갑옷무력화=%d\n", 코마치.투쟁갑옷무력화);
	fprintf(savefile, "코마치투쟁저항무력화=%d\n", 코마치.투쟁저항무력화);
	fprintf(savefile, "코마치지배갑옷무력화=%d\n", 코마치.지배갑옷무력화);
	fprintf(savefile, "코마치지배저항무력화=%d\n", 코마치.지배저항무력화);
	fprintf(savefile, "코마치마법갑옷무력화=%d\n", 코마치.마법갑옷무력화);
	fprintf(savefile, "코마치마법저항무력화=%d\n", 코마치.마법저항무력화);
	fprintf(savefile, "코마치신비의방패=%d\n", 코마치.신비의방패);
	fprintf(savefile, "코마치저항의방패=%d\n", 코마치.저항의방패);
	fprintf(savefile, "코마치경험치사기꾼=%d\n", 코마치.경험치사기꾼);
	fprintf(savefile, "코마치골드도둑=%d\n", 코마치.골드도둑);
	fprintf(savefile, "코마치투쟁타격용분=%d\n", 코마치.투쟁타격용분);
	fprintf(savefile, "코마치투쟁마법용분=%d\n", 코마치.투쟁마법용분);
	fprintf(savefile, "코마치지배물리용분=%d\n", 코마치.지배물리용분);
	fprintf(savefile, "코마치지배마법용분=%d\n", 코마치.지배마법용분);
	fprintf(savefile, "코마치마법물리용분=%d\n", 코마치.마법물리용분);
	fprintf(savefile, "코마치마법마법용분=%d\n", 코마치.마법마법용분);
	fprintf(savefile, "코마치긍지최후의방어=%d\n", 코마치.긍지최후의방어);
	fprintf(savefile, "코마치축복최후의방어=%d\n", 코마치.축복최후의방어);
	fprintf(savefile, "코마치집중사격=%d\n", 코마치.집중사격);
	fprintf(savefile, "코마치무자비한연사=%d\n", 코마치.무자비한연사);
	fprintf(savefile, "코마치환상적인공격=%d\n", 코마치.환상적인공격);
	fprintf(savefile, "코마치제우스의분노=%d\n", 코마치.제우스의분노);
	fprintf(savefile, "코마치오디세우스의성검=%d\n", 코마치.오디세우스의성검);
	fprintf(savefile, "코마치대마법신비로운메테오=%d\n", 코마치.대마법신비로운메테오);
	fprintf(savefile, "코마치마법펀치=%d\n", 코마치.마법펀치);
	fprintf(savefile, "코마치곰발바닥=%d\n", 코마치.곰발바닥);
	fprintf(savefile, "코마치토르의분노=%d\n", 코마치.토르의분노);
	fprintf(savefile, "코마치마법의점멸=%d\n", 코마치.마법의점멸);
	fprintf(savefile, "코마치신의가호=%d\n", 코마치.신의가호);
	//모코우
	fprintf(savefile, "모코우플레이횟수=%d\n", 모코우.게임횟수);
	fprintf(savefile, "모코우승리=%d\n", 모코우.승수);
	fprintf(savefile, "모코우패배=%d\n", 모코우.패수);
	fprintf(savefile, "모코우승률=%2lf\n", 모코우.승률);
	fprintf(savefile, "모코우레이팅=%d\n", 모코우.레이팅);
	fprintf(savefile, "모코우연승=%d\n", 모코우.연승);
	fprintf(savefile, "모코우연패=%d\n", 모코우.연패);
	fprintf(savefile, "모코우킬=%d\n", 모코우.킬);
	fprintf(savefile, "모코우데스=%d\n", 모코우.데스);
	fprintf(savefile, "모코우어시스트=%d\n", 모코우.어시스트);
	fprintf(savefile, "모코우백조의부름=%d\n", 모코우.백조의부름);
	fprintf(savefile, "모코우회복의삼지창=%d\n", 모코우.회복의삼지창);
	fprintf(savefile, "모코우밤의사냥꾼=%d\n", 모코우.밤의사냥꾼);
	fprintf(savefile, "모코우비겁한고블린=%d\n", 모코우.비겁한고블린);
	fprintf(savefile, "모코우깨달음=%d\n", 모코우.깨달음);
	fprintf(savefile, "모코우흑마법=%d\n", 모코우.흑마법);
	fprintf(savefile, "모코우음과양=%d\n", 모코우.음과양의조화);
	fprintf(savefile, "모코우아레스=%d\n", 모코우.아레스의투구);
	fprintf(savefile, "모코우라식=%d\n", 모코우.라식);
	fprintf(savefile, "모코우장화=%d\n", 모코우.축복의장화);
	fprintf(savefile, "모코우반지=%d\n", 모코우.신비로운반지);
	fprintf(savefile, "모코우치명적인탄환=%d\n", 모코우.치명적인탄환);
	fprintf(savefile, "모코우깨물기=%d\n", 모코우.깨물기);
	fprintf(savefile, "모코우이동의즐거움=%d\n", 모코우.이동의즐거움);
	fprintf(savefile, "모코우판다렌=%d\n", 모코우.판다렌의화염작렬);
	fprintf(savefile, "모코우마법부스터=%d\n", 모코우.마법부스터);
	fprintf(savefile, "모코우단단한벽=%d\n", 모코우.단단한벽);
	fprintf(savefile, "모코우마법의망토=%d\n", 모코우.마법의망토);
	fprintf(savefile, "모코우고대신비마법서=%d\n", 모코우.고대신비의마법서);
	fprintf(savefile, "모코우산뜻한기분=%d\n", 모코우.산뜻한기분);
	fprintf(savefile, "모코우갈망의검=%d\n", 모코우.갈망의검);
	fprintf(savefile, "모코우지배전투의기본=%d\n", 모코우.지배전투의기본);
	fprintf(savefile, "모코우지배푸른영기=%d\n", 모코우.지배푸른영기);
	fprintf(savefile, "모코우마법전투의기본=%d\n", 모코우.마법전투의기본);
	fprintf(savefile, "모코우마법푸른영기=%d\n", 모코우.마법푸른영기);
	fprintf(savefile, "모코우강인한체력=%d\n", 모코우.강인한체력);
	fprintf(savefile, "모코우활력증진=%d\n", 모코우.활력증진);
	fprintf(savefile, "모코우저돌적인공격방식=%d\n", 모코우.저돌적인공격방식);
	fprintf(savefile, "모코우신비한공격방식=%d\n", 모코우.신비한공격방식);
	fprintf(savefile, "모코우투쟁갑옷무력화=%d\n", 모코우.투쟁갑옷무력화);
	fprintf(savefile, "모코우투쟁저항무력화=%d\n", 모코우.투쟁저항무력화);
	fprintf(savefile, "모코우지배갑옷무력화=%d\n", 모코우.지배갑옷무력화);
	fprintf(savefile, "모코우지배저항무력화=%d\n", 모코우.지배저항무력화);
	fprintf(savefile, "모코우마법갑옷무력화=%d\n", 모코우.마법갑옷무력화);
	fprintf(savefile, "모코우마법저항무력화=%d\n", 모코우.마법저항무력화);
	fprintf(savefile, "모코우신비의방패=%d\n", 모코우.신비의방패);
	fprintf(savefile, "모코우저항의방패=%d\n", 모코우.저항의방패);
	fprintf(savefile, "모코우경험치사기꾼=%d\n", 모코우.경험치사기꾼);
	fprintf(savefile, "모코우골드도둑=%d\n", 모코우.골드도둑);
	fprintf(savefile, "모코우투쟁타격용분=%d\n", 모코우.투쟁타격용분);
	fprintf(savefile, "모코우투쟁마법용분=%d\n", 모코우.투쟁마법용분);
	fprintf(savefile, "모코우지배물리용분=%d\n", 모코우.지배물리용분);
	fprintf(savefile, "모코우지배마법용분=%d\n", 모코우.지배마법용분);
	fprintf(savefile, "모코우마법물리용분=%d\n", 모코우.마법물리용분);
	fprintf(savefile, "모코우마법마법용분=%d\n", 모코우.마법마법용분);
	fprintf(savefile, "모코우긍지최후의방어=%d\n", 모코우.긍지최후의방어);
	fprintf(savefile, "모코우축복최후의방어=%d\n", 모코우.축복최후의방어);
	fprintf(savefile, "모코우집중사격=%d\n", 모코우.집중사격);
	fprintf(savefile, "모코우무자비한연사=%d\n", 모코우.무자비한연사);
	fprintf(savefile, "모코우환상적인공격=%d\n", 모코우.환상적인공격);
	fprintf(savefile, "모코우제우스의분노=%d\n", 모코우.제우스의분노);
	fprintf(savefile, "모코우오디세우스의성검=%d\n", 모코우.오디세우스의성검);
	fprintf(savefile, "모코우대마법신비로운메테오=%d\n", 모코우.대마법신비로운메테오);
	fprintf(savefile, "모코우마법펀치=%d\n", 모코우.마법펀치);
	fprintf(savefile, "모코우곰발바닥=%d\n", 모코우.곰발바닥);
	fprintf(savefile, "모코우토르의분노=%d\n", 모코우.토르의분노);
	fprintf(savefile, "모코우마법의점멸=%d\n", 모코우.마법의점멸);
	fprintf(savefile, "모코우신의가호=%d\n", 모코우.신의가호);
	//어드밴스드메이린
	fprintf(savefile, "어드밴스드메이린플레이횟수=%d\n", 어드밴스드메이린.게임횟수);
	fprintf(savefile, "어드밴스드메이린승리=%d\n", 어드밴스드메이린.승수);
	fprintf(savefile, "어드밴스드메이린패배=%d\n", 어드밴스드메이린.패수);
	fprintf(savefile, "어드밴스드메이린승률=%2lf\n", 어드밴스드메이린.승률);
	fprintf(savefile, "어드밴스드메이린레이팅=%d\n", 어드밴스드메이린.레이팅);
	fprintf(savefile, "어드밴스드메이린연승=%d\n", 어드밴스드메이린.연승);
	fprintf(savefile, "어드밴스드메이린연패=%d\n", 어드밴스드메이린.연패);
	fprintf(savefile, "어드밴스드메이린킬=%d\n", 어드밴스드메이린.킬);
	fprintf(savefile, "어드밴스드메이린데스=%d\n", 어드밴스드메이린.데스);
	fprintf(savefile, "어드밴스드메이린어시스트=%d\n", 어드밴스드메이린.어시스트);
	fprintf(savefile, "어드밴스드메이린백조의부름=%d\n", 어드밴스드메이린.백조의부름);
	fprintf(savefile, "어드밴스드메이린회복의삼지창=%d\n", 어드밴스드메이린.회복의삼지창);
	fprintf(savefile, "어드밴스드메이린밤의사냥꾼=%d\n", 어드밴스드메이린.밤의사냥꾼);
	fprintf(savefile, "어드밴스드메이린비겁한고블린=%d\n", 어드밴스드메이린.비겁한고블린);
	fprintf(savefile, "어드밴스드메이린깨달음=%d\n", 어드밴스드메이린.깨달음);
	fprintf(savefile, "어드밴스드메이린흑마법=%d\n", 어드밴스드메이린.흑마법);
	fprintf(savefile, "어드밴스드메이린음과양=%d\n", 어드밴스드메이린.음과양의조화);
	fprintf(savefile, "어드밴스드메이린아레스=%d\n", 어드밴스드메이린.아레스의투구);
	fprintf(savefile, "어드밴스드메이린라식=%d\n", 어드밴스드메이린.라식);
	fprintf(savefile, "어드밴스드메이린장화=%d\n", 어드밴스드메이린.축복의장화);
	fprintf(savefile, "어드밴스드메이린반지=%d\n", 어드밴스드메이린.신비로운반지);
	fprintf(savefile, "어드밴스드메이린치명적인탄환=%d\n", 어드밴스드메이린.치명적인탄환);
	fprintf(savefile, "어드밴스드메이린깨물기=%d\n", 어드밴스드메이린.깨물기);
	fprintf(savefile, "어드밴스드메이린이동의즐거움=%d\n", 어드밴스드메이린.이동의즐거움);
	fprintf(savefile, "어드밴스드메이린판다렌=%d\n", 어드밴스드메이린.판다렌의화염작렬);
	fprintf(savefile, "어드밴스드메이린마법부스터=%d\n", 어드밴스드메이린.마법부스터);
	fprintf(savefile, "어드밴스드메이린단단한벽=%d\n", 어드밴스드메이린.단단한벽);
	fprintf(savefile, "어드밴스드메이린마법의망토=%d\n", 어드밴스드메이린.마법의망토);
	fprintf(savefile, "어드밴스드메이린고대신비마법서=%d\n", 어드밴스드메이린.고대신비의마법서);
	fprintf(savefile, "어드밴스드메이린산뜻한기분=%d\n", 어드밴스드메이린.산뜻한기분);
	fprintf(savefile, "어드밴스드메이린갈망의검=%d\n", 어드밴스드메이린.갈망의검);
	fprintf(savefile, "어드밴스드메이린지배전투의기본=%d\n", 어드밴스드메이린.지배전투의기본);
	fprintf(savefile, "어드밴스드메이린지배푸른영기=%d\n", 어드밴스드메이린.지배푸른영기);
	fprintf(savefile, "어드밴스드메이린마법전투의기본=%d\n", 어드밴스드메이린.마법전투의기본);
	fprintf(savefile, "어드밴스드메이린마법푸른영기=%d\n", 어드밴스드메이린.마법푸른영기);
	fprintf(savefile, "어드밴스드메이린강인한체력=%d\n", 어드밴스드메이린.강인한체력);
	fprintf(savefile, "어드밴스드메이린활력증진=%d\n", 어드밴스드메이린.활력증진);
	fprintf(savefile, "어드밴스드메이린저돌적인공격방식=%d\n", 어드밴스드메이린.저돌적인공격방식);
	fprintf(savefile, "어드밴스드메이린신비한공격방식=%d\n", 어드밴스드메이린.신비한공격방식);
	fprintf(savefile, "어드밴스드메이린투쟁갑옷무력화=%d\n", 어드밴스드메이린.투쟁갑옷무력화);
	fprintf(savefile, "어드밴스드메이린투쟁저항무력화=%d\n", 어드밴스드메이린.투쟁저항무력화);
	fprintf(savefile, "어드밴스드메이린지배갑옷무력화=%d\n", 어드밴스드메이린.지배갑옷무력화);
	fprintf(savefile, "어드밴스드메이린지배저항무력화=%d\n", 어드밴스드메이린.지배저항무력화);
	fprintf(savefile, "어드밴스드메이린마법갑옷무력화=%d\n", 어드밴스드메이린.마법갑옷무력화);
	fprintf(savefile, "어드밴스드메이린마법저항무력화=%d\n", 어드밴스드메이린.마법저항무력화);
	fprintf(savefile, "어드밴스드메이린신비의방패=%d\n", 어드밴스드메이린.신비의방패);
	fprintf(savefile, "어드밴스드메이린저항의방패=%d\n", 어드밴스드메이린.저항의방패);
	fprintf(savefile, "어드밴스드메이린경험치사기꾼=%d\n", 어드밴스드메이린.경험치사기꾼);
	fprintf(savefile, "어드밴스드메이린골드도둑=%d\n", 어드밴스드메이린.골드도둑);
	fprintf(savefile, "어드밴스드메이린투쟁타격용분=%d\n", 어드밴스드메이린.투쟁타격용분);
	fprintf(savefile, "어드밴스드메이린투쟁마법용분=%d\n", 어드밴스드메이린.투쟁마법용분);
	fprintf(savefile, "어드밴스드메이린지배물리용분=%d\n", 어드밴스드메이린.지배물리용분);
	fprintf(savefile, "어드밴스드메이린지배마법용분=%d\n", 어드밴스드메이린.지배마법용분);
	fprintf(savefile, "어드밴스드메이린마법물리용분=%d\n", 어드밴스드메이린.마법물리용분);
	fprintf(savefile, "어드밴스드메이린마법마법용분=%d\n", 어드밴스드메이린.마법마법용분);
	fprintf(savefile, "어드밴스드메이린긍지최후의방어=%d\n", 어드밴스드메이린.긍지최후의방어);
	fprintf(savefile, "어드밴스드메이린축복최후의방어=%d\n", 어드밴스드메이린.축복최후의방어);
	fprintf(savefile, "어드밴스드메이린집중사격=%d\n", 어드밴스드메이린.집중사격);
	fprintf(savefile, "어드밴스드메이린무자비한연사=%d\n", 어드밴스드메이린.무자비한연사);
	fprintf(savefile, "어드밴스드메이린환상적인공격=%d\n", 어드밴스드메이린.환상적인공격);
	fprintf(savefile, "어드밴스드메이린제우스의분노=%d\n", 어드밴스드메이린.제우스의분노);
	fprintf(savefile, "어드밴스드메이린오디세우스의성검=%d\n", 어드밴스드메이린.오디세우스의성검);
	fprintf(savefile, "어드밴스드메이린대마법신비로운메테오=%d\n", 어드밴스드메이린.대마법신비로운메테오);
	fprintf(savefile, "어드밴스드메이린마법펀치=%d\n", 어드밴스드메이린.마법펀치);
	fprintf(savefile, "어드밴스드메이린곰발바닥=%d\n", 어드밴스드메이린.곰발바닥);
	fprintf(savefile, "어드밴스드메이린토르의분노=%d\n", 어드밴스드메이린.토르의분노);
	fprintf(savefile, "어드밴스드메이린마법의점멸=%d\n", 어드밴스드메이린.마법의점멸);
	fprintf(savefile, "어드밴스드메이린신의가호=%d\n", 어드밴스드메이린.신의가호);
	//사나에
	fprintf(savefile, "사나에플레이횟수=%d\n", 사나에.게임횟수);
	fprintf(savefile, "사나에승리=%d\n", 사나에.승수);
	fprintf(savefile, "사나에패배=%d\n", 사나에.패수);
	fprintf(savefile, "사나에승률=%2lf\n", 사나에.승률);
	fprintf(savefile, "사나에레이팅=%d\n", 사나에.레이팅);
	fprintf(savefile, "사나에연승=%d\n", 사나에.연승);
	fprintf(savefile, "사나에연패=%d\n", 사나에.연패);
	fprintf(savefile, "사나에킬=%d\n", 사나에.킬);
	fprintf(savefile, "사나에데스=%d\n", 사나에.데스);
	fprintf(savefile, "사나에어시스트=%d\n", 사나에.어시스트);
	fprintf(savefile, "사나에백조의부름=%d\n", 사나에.백조의부름);
	fprintf(savefile, "사나에회복의삼지창=%d\n", 사나에.회복의삼지창);
	fprintf(savefile, "사나에밤의사냥꾼=%d\n", 사나에.밤의사냥꾼);
	fprintf(savefile, "사나에비겁한고블린=%d\n", 사나에.비겁한고블린);
	fprintf(savefile, "사나에깨달음=%d\n", 사나에.깨달음);
	fprintf(savefile, "사나에흑마법=%d\n", 사나에.흑마법);
	fprintf(savefile, "사나에음과양=%d\n", 사나에.음과양의조화);
	fprintf(savefile, "사나에아레스=%d\n", 사나에.아레스의투구);
	fprintf(savefile, "사나에라식=%d\n", 사나에.라식);
	fprintf(savefile, "사나에장화=%d\n", 사나에.축복의장화);
	fprintf(savefile, "사나에반지=%d\n", 사나에.신비로운반지);
	fprintf(savefile, "사나에치명적인탄환=%d\n", 사나에.치명적인탄환);
	fprintf(savefile, "사나에깨물기=%d\n", 사나에.깨물기);
	fprintf(savefile, "사나에이동의즐거움=%d\n", 사나에.이동의즐거움);
	fprintf(savefile, "사나에판다렌=%d\n", 사나에.판다렌의화염작렬);
	fprintf(savefile, "사나에마법부스터=%d\n", 사나에.마법부스터);
	fprintf(savefile, "사나에단단한벽=%d\n", 사나에.단단한벽);
	fprintf(savefile, "사나에마법의망토=%d\n", 사나에.마법의망토);
	fprintf(savefile, "사나에고대신비마법서=%d\n", 사나에.고대신비의마법서);
	fprintf(savefile, "사나에산뜻한기분=%d\n", 사나에.산뜻한기분);
	fprintf(savefile, "사나에갈망의검=%d\n", 사나에.갈망의검);
	fprintf(savefile, "사나에지배전투의기본=%d\n", 사나에.지배전투의기본);
	fprintf(savefile, "사나에지배푸른영기=%d\n", 사나에.지배푸른영기);
	fprintf(savefile, "사나에마법전투의기본=%d\n", 사나에.마법전투의기본);
	fprintf(savefile, "사나에마법푸른영기=%d\n", 사나에.마법푸른영기);
	fprintf(savefile, "사나에강인한체력=%d\n", 사나에.강인한체력);
	fprintf(savefile, "사나에활력증진=%d\n", 사나에.활력증진);
	fprintf(savefile, "사나에저돌적인공격방식=%d\n", 사나에.저돌적인공격방식);
	fprintf(savefile, "사나에신비한공격방식=%d\n", 사나에.신비한공격방식);
	fprintf(savefile, "사나에투쟁갑옷무력화=%d\n", 사나에.투쟁갑옷무력화);
	fprintf(savefile, "사나에투쟁저항무력화=%d\n", 사나에.투쟁저항무력화);
	fprintf(savefile, "사나에지배갑옷무력화=%d\n", 사나에.지배갑옷무력화);
	fprintf(savefile, "사나에지배저항무력화=%d\n", 사나에.지배저항무력화);
	fprintf(savefile, "사나에마법갑옷무력화=%d\n", 사나에.마법갑옷무력화);
	fprintf(savefile, "사나에마법저항무력화=%d\n", 사나에.마법저항무력화);
	fprintf(savefile, "사나에신비의방패=%d\n", 사나에.신비의방패);
	fprintf(savefile, "사나에저항의방패=%d\n", 사나에.저항의방패);
	fprintf(savefile, "사나에경험치사기꾼=%d\n", 사나에.경험치사기꾼);
	fprintf(savefile, "사나에골드도둑=%d\n", 사나에.골드도둑);
	fprintf(savefile, "사나에투쟁타격용분=%d\n", 사나에.투쟁타격용분);
	fprintf(savefile, "사나에투쟁마법용분=%d\n", 사나에.투쟁마법용분);
	fprintf(savefile, "사나에지배물리용분=%d\n", 사나에.지배물리용분);
	fprintf(savefile, "사나에지배마법용분=%d\n", 사나에.지배마법용분);
	fprintf(savefile, "사나에마법물리용분=%d\n", 사나에.마법물리용분);
	fprintf(savefile, "사나에마법마법용분=%d\n", 사나에.마법마법용분);
	fprintf(savefile, "사나에긍지최후의방어=%d\n", 사나에.긍지최후의방어);
	fprintf(savefile, "사나에축복최후의방어=%d\n", 사나에.축복최후의방어);
	fprintf(savefile, "사나에집중사격=%d\n", 사나에.집중사격);
	fprintf(savefile, "사나에무자비한연사=%d\n", 사나에.무자비한연사);
	fprintf(savefile, "사나에환상적인공격=%d\n", 사나에.환상적인공격);
	fprintf(savefile, "사나에제우스의분노=%d\n", 사나에.제우스의분노);
	fprintf(savefile, "사나에오디세우스의성검=%d\n", 사나에.오디세우스의성검);
	fprintf(savefile, "사나에대마법신비로운메테오=%d\n", 사나에.대마법신비로운메테오);
	fprintf(savefile, "사나에마법펀치=%d\n", 사나에.마법펀치);
	fprintf(savefile, "사나에곰발바닥=%d\n", 사나에.곰발바닥);
	fprintf(savefile, "사나에토르의분노=%d\n", 사나에.토르의분노);
	fprintf(savefile, "사나에마법의점멸=%d\n", 사나에.마법의점멸);
	fprintf(savefile, "사나에신의가호=%d\n", 사나에.신의가호);
	//레티
	fprintf(savefile, "레티플레이횟수=%d\n", 레티.게임횟수);
	fprintf(savefile, "레티승리=%d\n", 레티.승수);
	fprintf(savefile, "레티패배=%d\n", 레티.패수);
	fprintf(savefile, "레티승률=%2lf\n", 레티.승률);
	fprintf(savefile, "레티레이팅=%d\n", 레티.레이팅);
	fprintf(savefile, "레티연승=%d\n", 레티.연승);
	fprintf(savefile, "레티연패=%d\n", 레티.연패);
	fprintf(savefile, "레티킬=%d\n", 레티.킬);
	fprintf(savefile, "레티데스=%d\n", 레티.데스);
	fprintf(savefile, "레티어시스트=%d\n", 레티.어시스트);
	fprintf(savefile, "레티백조의부름=%d\n", 레티.백조의부름);
	fprintf(savefile, "레티회복의삼지창=%d\n", 레티.회복의삼지창);
	fprintf(savefile, "레티밤의사냥꾼=%d\n", 레티.밤의사냥꾼);
	fprintf(savefile, "레티비겁한고블린=%d\n", 레티.비겁한고블린);
	fprintf(savefile, "레티깨달음=%d\n", 레티.깨달음);
	fprintf(savefile, "레티흑마법=%d\n", 레티.흑마법);
	fprintf(savefile, "레티음과양=%d\n", 레티.음과양의조화);
	fprintf(savefile, "레티아레스=%d\n", 레티.아레스의투구);
	fprintf(savefile, "레티라식=%d\n", 레티.라식);
	fprintf(savefile, "레티장화=%d\n", 레티.축복의장화);
	fprintf(savefile, "레티반지=%d\n", 레티.신비로운반지);
	fprintf(savefile, "레티치명적인탄환=%d\n", 레티.치명적인탄환);
	fprintf(savefile, "레티깨물기=%d\n", 레티.깨물기);
	fprintf(savefile, "레티이동의즐거움=%d\n", 레티.이동의즐거움);
	fprintf(savefile, "레티판다렌=%d\n", 레티.판다렌의화염작렬);
	fprintf(savefile, "레티마법부스터=%d\n", 레티.마법부스터);
	fprintf(savefile, "레티단단한벽=%d\n", 레티.단단한벽);
	fprintf(savefile, "레티마법의망토=%d\n", 레티.마법의망토);
	fprintf(savefile, "레티고대신비마법서=%d\n", 레티.고대신비의마법서);
	fprintf(savefile, "레티산뜻한기분=%d\n", 레티.산뜻한기분);
	fprintf(savefile, "레티갈망의검=%d\n", 레티.갈망의검);
	fprintf(savefile, "레티지배전투의기본=%d\n", 레티.지배전투의기본);
	fprintf(savefile, "레티지배푸른영기=%d\n", 레티.지배푸른영기);
	fprintf(savefile, "레티마법전투의기본=%d\n", 레티.마법전투의기본);
	fprintf(savefile, "레티마법푸른영기=%d\n", 레티.마법푸른영기);
	fprintf(savefile, "레티강인한체력=%d\n", 레티.강인한체력);
	fprintf(savefile, "레티활력증진=%d\n", 레티.활력증진);
	fprintf(savefile, "레티저돌적인공격방식=%d\n", 레티.저돌적인공격방식);
	fprintf(savefile, "레티신비한공격방식=%d\n", 레티.신비한공격방식);
	fprintf(savefile, "레티투쟁갑옷무력화=%d\n", 레티.투쟁갑옷무력화);
	fprintf(savefile, "레티투쟁저항무력화=%d\n", 레티.투쟁저항무력화);
	fprintf(savefile, "레티지배갑옷무력화=%d\n", 레티.지배갑옷무력화);
	fprintf(savefile, "레티지배저항무력화=%d\n", 레티.지배저항무력화);
	fprintf(savefile, "레티마법갑옷무력화=%d\n", 레티.마법갑옷무력화);
	fprintf(savefile, "레티마법저항무력화=%d\n", 레티.마법저항무력화);
	fprintf(savefile, "레티신비의방패=%d\n", 레티.신비의방패);
	fprintf(savefile, "레티저항의방패=%d\n", 레티.저항의방패);
	fprintf(savefile, "레티경험치사기꾼=%d\n", 레티.경험치사기꾼);
	fprintf(savefile, "레티골드도둑=%d\n", 레티.골드도둑);
	fprintf(savefile, "레티투쟁타격용분=%d\n", 레티.투쟁타격용분);
	fprintf(savefile, "레티투쟁마법용분=%d\n", 레티.투쟁마법용분);
	fprintf(savefile, "레티지배물리용분=%d\n", 레티.지배물리용분);
	fprintf(savefile, "레티지배마법용분=%d\n", 레티.지배마법용분);
	fprintf(savefile, "레티마법물리용분=%d\n", 레티.마법물리용분);
	fprintf(savefile, "레티마법마법용분=%d\n", 레티.마법마법용분);
	fprintf(savefile, "레티긍지최후의방어=%d\n", 레티.긍지최후의방어);
	fprintf(savefile, "레티축복최후의방어=%d\n", 레티.축복최후의방어);
	fprintf(savefile, "레티집중사격=%d\n", 레티.집중사격);
	fprintf(savefile, "레티무자비한연사=%d\n", 레티.무자비한연사);
	fprintf(savefile, "레티환상적인공격=%d\n", 레티.환상적인공격);
	fprintf(savefile, "레티제우스의분노=%d\n", 레티.제우스의분노);
	fprintf(savefile, "레티오디세우스의성검=%d\n", 레티.오디세우스의성검);
	fprintf(savefile, "레티대마법신비로운메테오=%d\n", 레티.대마법신비로운메테오);
	fprintf(savefile, "레티마법펀치=%d\n", 레티.마법펀치);
	fprintf(savefile, "레티곰발바닥=%d\n", 레티.곰발바닥);
	fprintf(savefile, "레티토르의분노=%d\n", 레티.토르의분노);
	fprintf(savefile, "레티마법의점멸=%d\n", 레티.마법의점멸);
	fprintf(savefile, "레티신의가호=%d\n", 레티.신의가호);
	//유유코
	fprintf(savefile, "유유코플레이횟수=%d\n", 유유코.게임횟수);
	fprintf(savefile, "유유코승리=%d\n", 유유코.승수);
	fprintf(savefile, "유유코패배=%d\n", 유유코.패수);
	fprintf(savefile, "유유코승률=%2lf\n", 유유코.승률);
	fprintf(savefile, "유유코레이팅=%d\n", 유유코.레이팅);
	fprintf(savefile, "유유코연승=%d\n", 유유코.연승);
	fprintf(savefile, "유유코연패=%d\n", 유유코.연패);
	fprintf(savefile, "유유코킬=%d\n", 유유코.킬);
	fprintf(savefile, "유유코데스=%d\n", 유유코.데스);
	fprintf(savefile, "유유코어시스트=%d\n", 유유코.어시스트);
	fprintf(savefile, "유유코백조의부름=%d\n", 유유코.백조의부름);
	fprintf(savefile, "유유코회복의삼지창=%d\n", 유유코.회복의삼지창);
	fprintf(savefile, "유유코밤의사냥꾼=%d\n", 유유코.밤의사냥꾼);
	fprintf(savefile, "유유코비겁한고블린=%d\n", 유유코.비겁한고블린);
	fprintf(savefile, "유유코깨달음=%d\n", 유유코.깨달음);
	fprintf(savefile, "유유코흑마법=%d\n", 유유코.흑마법);
	fprintf(savefile, "유유코음과양=%d\n", 유유코.음과양의조화);
	fprintf(savefile, "유유코아레스=%d\n", 유유코.아레스의투구);
	fprintf(savefile, "유유코라식=%d\n", 유유코.라식);
	fprintf(savefile, "유유코장화=%d\n", 유유코.축복의장화);
	fprintf(savefile, "유유코반지=%d\n", 유유코.신비로운반지);
	fprintf(savefile, "유유코치명적인탄환=%d\n", 유유코.치명적인탄환);
	fprintf(savefile, "유유코깨물기=%d\n", 유유코.깨물기);
	fprintf(savefile, "유유코이동의즐거움=%d\n", 유유코.이동의즐거움);
	fprintf(savefile, "유유코판다렌=%d\n", 유유코.판다렌의화염작렬);
	fprintf(savefile, "유유코마법부스터=%d\n", 유유코.마법부스터);
	fprintf(savefile, "유유코단단한벽=%d\n", 유유코.단단한벽);
	fprintf(savefile, "유유코마법의망토=%d\n", 유유코.마법의망토);
	fprintf(savefile, "유유코고대신비마법서=%d\n", 유유코.고대신비의마법서);
	fprintf(savefile, "유유코산뜻한기분=%d\n", 유유코.산뜻한기분);
	fprintf(savefile, "유유코갈망의검=%d\n", 유유코.갈망의검);
	fprintf(savefile, "유유코지배전투의기본=%d\n", 유유코.지배전투의기본);
	fprintf(savefile, "유유코지배푸른영기=%d\n", 유유코.지배푸른영기);
	fprintf(savefile, "유유코마법전투의기본=%d\n", 유유코.마법전투의기본);
	fprintf(savefile, "유유코마법푸른영기=%d\n", 유유코.마법푸른영기);
	fprintf(savefile, "유유코강인한체력=%d\n", 유유코.강인한체력);
	fprintf(savefile, "유유코활력증진=%d\n", 유유코.활력증진);
	fprintf(savefile, "유유코저돌적인공격방식=%d\n", 유유코.저돌적인공격방식);
	fprintf(savefile, "유유코신비한공격방식=%d\n", 유유코.신비한공격방식);
	fprintf(savefile, "유유코투쟁갑옷무력화=%d\n", 유유코.투쟁갑옷무력화);
	fprintf(savefile, "유유코투쟁저항무력화=%d\n", 유유코.투쟁저항무력화);
	fprintf(savefile, "유유코지배갑옷무력화=%d\n", 유유코.지배갑옷무력화);
	fprintf(savefile, "유유코지배저항무력화=%d\n", 유유코.지배저항무력화);
	fprintf(savefile, "유유코마법갑옷무력화=%d\n", 유유코.마법갑옷무력화);
	fprintf(savefile, "유유코마법저항무력화=%d\n", 유유코.마법저항무력화);
	fprintf(savefile, "유유코신비의방패=%d\n", 유유코.신비의방패);
	fprintf(savefile, "유유코저항의방패=%d\n", 유유코.저항의방패);
	fprintf(savefile, "유유코경험치사기꾼=%d\n", 유유코.경험치사기꾼);
	fprintf(savefile, "유유코골드도둑=%d\n", 유유코.골드도둑);
	fprintf(savefile, "유유코투쟁타격용분=%d\n", 유유코.투쟁타격용분);
	fprintf(savefile, "유유코투쟁마법용분=%d\n", 유유코.투쟁마법용분);
	fprintf(savefile, "유유코지배물리용분=%d\n", 유유코.지배물리용분);
	fprintf(savefile, "유유코지배마법용분=%d\n", 유유코.지배마법용분);
	fprintf(savefile, "유유코마법물리용분=%d\n", 유유코.마법물리용분);
	fprintf(savefile, "유유코마법마법용분=%d\n", 유유코.마법마법용분);
	fprintf(savefile, "유유코긍지최후의방어=%d\n", 유유코.긍지최후의방어);
	fprintf(savefile, "유유코축복최후의방어=%d\n", 유유코.축복최후의방어);
	fprintf(savefile, "유유코집중사격=%d\n", 유유코.집중사격);
	fprintf(savefile, "유유코무자비한연사=%d\n", 유유코.무자비한연사);
	fprintf(savefile, "유유코환상적인공격=%d\n", 유유코.환상적인공격);
	fprintf(savefile, "유유코제우스의분노=%d\n", 유유코.제우스의분노);
	fprintf(savefile, "유유코오디세우스의성검=%d\n", 유유코.오디세우스의성검);
	fprintf(savefile, "유유코대마법신비로운메테오=%d\n", 유유코.대마법신비로운메테오);
	fprintf(savefile, "유유코마법펀치=%d\n", 유유코.마법펀치);
	fprintf(savefile, "유유코곰발바닥=%d\n", 유유코.곰발바닥);
	fprintf(savefile, "유유코토르의분노=%d\n", 유유코.토르의분노);
	fprintf(savefile, "유유코마법의점멸=%d\n", 유유코.마법의점멸);
	fprintf(savefile, "유유코신의가호=%d\n", 유유코.신의가호);
	//앨리스_물리
	fprintf(savefile, "앨리스_물리플레이횟수=%d\n", 앨리스_물리.게임횟수);
	fprintf(savefile, "앨리스_물리승리=%d\n", 앨리스_물리.승수);
	fprintf(savefile, "앨리스_물리패배=%d\n", 앨리스_물리.패수);
	fprintf(savefile, "앨리스_물리승률=%2lf\n", 앨리스_물리.승률);
	fprintf(savefile, "앨리스_물리레이팅=%d\n", 앨리스_물리.레이팅);
	fprintf(savefile, "앨리스_물리연승=%d\n", 앨리스_물리.연승);
	fprintf(savefile, "앨리스_물리연패=%d\n", 앨리스_물리.연패);
	fprintf(savefile, "앨리스_물리킬=%d\n", 앨리스_물리.킬);
	fprintf(savefile, "앨리스_물리데스=%d\n", 앨리스_물리.데스);
	fprintf(savefile, "앨리스_물리어시스트=%d\n", 앨리스_물리.어시스트);
	fprintf(savefile, "앨리스_물리백조의부름=%d\n", 앨리스_물리.백조의부름);
	fprintf(savefile, "앨리스_물리회복의삼지창=%d\n", 앨리스_물리.회복의삼지창);
	fprintf(savefile, "앨리스_물리밤의사냥꾼=%d\n", 앨리스_물리.밤의사냥꾼);
	fprintf(savefile, "앨리스_물리비겁한고블린=%d\n", 앨리스_물리.비겁한고블린);
	fprintf(savefile, "앨리스_물리깨달음=%d\n", 앨리스_물리.깨달음);
	fprintf(savefile, "앨리스_물리흑마법=%d\n", 앨리스_물리.흑마법);
	fprintf(savefile, "앨리스_물리음과양=%d\n", 앨리스_물리.음과양의조화);
	fprintf(savefile, "앨리스_물리아레스=%d\n", 앨리스_물리.아레스의투구);
	fprintf(savefile, "앨리스_물리라식=%d\n", 앨리스_물리.라식);
	fprintf(savefile, "앨리스_물리장화=%d\n", 앨리스_물리.축복의장화);
	fprintf(savefile, "앨리스_물리반지=%d\n", 앨리스_물리.신비로운반지);
	fprintf(savefile, "앨리스_물리치명적인탄환=%d\n", 앨리스_물리.치명적인탄환);
	fprintf(savefile, "앨리스_물리깨물기=%d\n", 앨리스_물리.깨물기);
	fprintf(savefile, "앨리스_물리이동의즐거움=%d\n", 앨리스_물리.이동의즐거움);
	fprintf(savefile, "앨리스_물리판다렌=%d\n", 앨리스_물리.판다렌의화염작렬);
	fprintf(savefile, "앨리스_물리마법부스터=%d\n", 앨리스_물리.마법부스터);
	fprintf(savefile, "앨리스_물리단단한벽=%d\n", 앨리스_물리.단단한벽);
	fprintf(savefile, "앨리스_물리마법의망토=%d\n", 앨리스_물리.마법의망토);
	fprintf(savefile, "앨리스_물리고대신비마법서=%d\n", 앨리스_물리.고대신비의마법서);
	fprintf(savefile, "앨리스_물리산뜻한기분=%d\n", 앨리스_물리.산뜻한기분);
	fprintf(savefile, "앨리스_물리갈망의검=%d\n", 앨리스_물리.갈망의검);
	fprintf(savefile, "앨리스_물리지배전투의기본=%d\n", 앨리스_물리.지배전투의기본);
	fprintf(savefile, "앨리스_물리지배푸른영기=%d\n", 앨리스_물리.지배푸른영기);
	fprintf(savefile, "앨리스_물리마법전투의기본=%d\n", 앨리스_물리.마법전투의기본);
	fprintf(savefile, "앨리스_물리마법푸른영기=%d\n", 앨리스_물리.마법푸른영기);
	fprintf(savefile, "앨리스_물리강인한체력=%d\n", 앨리스_물리.강인한체력);
	fprintf(savefile, "앨리스_물리활력증진=%d\n", 앨리스_물리.활력증진);
	fprintf(savefile, "앨리스_물리저돌적인공격방식=%d\n", 앨리스_물리.저돌적인공격방식);
	fprintf(savefile, "앨리스_물리신비한공격방식=%d\n", 앨리스_물리.신비한공격방식);
	fprintf(savefile, "앨리스_물리투쟁갑옷무력화=%d\n", 앨리스_물리.투쟁갑옷무력화);
	fprintf(savefile, "앨리스_물리투쟁저항무력화=%d\n", 앨리스_물리.투쟁저항무력화);
	fprintf(savefile, "앨리스_물리지배갑옷무력화=%d\n", 앨리스_물리.지배갑옷무력화);
	fprintf(savefile, "앨리스_물리지배저항무력화=%d\n", 앨리스_물리.지배저항무력화);
	fprintf(savefile, "앨리스_물리마법갑옷무력화=%d\n", 앨리스_물리.마법갑옷무력화);
	fprintf(savefile, "앨리스_물리마법저항무력화=%d\n", 앨리스_물리.마법저항무력화);
	fprintf(savefile, "앨리스_물리신비의방패=%d\n", 앨리스_물리.신비의방패);
	fprintf(savefile, "앨리스_물리저항의방패=%d\n", 앨리스_물리.저항의방패);
	fprintf(savefile, "앨리스_물리경험치사기꾼=%d\n", 앨리스_물리.경험치사기꾼);
	fprintf(savefile, "앨리스_물리골드도둑=%d\n", 앨리스_물리.골드도둑);
	fprintf(savefile, "앨리스_물리투쟁타격용분=%d\n", 앨리스_물리.투쟁타격용분);
	fprintf(savefile, "앨리스_물리투쟁마법용분=%d\n", 앨리스_물리.투쟁마법용분);
	fprintf(savefile, "앨리스_물리지배물리용분=%d\n", 앨리스_물리.지배물리용분);
	fprintf(savefile, "앨리스_물리지배마법용분=%d\n", 앨리스_물리.지배마법용분);
	fprintf(savefile, "앨리스_물리마법물리용분=%d\n", 앨리스_물리.마법물리용분);
	fprintf(savefile, "앨리스_물리마법마법용분=%d\n", 앨리스_물리.마법마법용분);
	fprintf(savefile, "앨리스_물리긍지최후의방어=%d\n", 앨리스_물리.긍지최후의방어);
	fprintf(savefile, "앨리스_물리축복최후의방어=%d\n", 앨리스_물리.축복최후의방어);
	fprintf(savefile, "앨리스_물리집중사격=%d\n", 앨리스_물리.집중사격);
	fprintf(savefile, "앨리스_물리무자비한연사=%d\n", 앨리스_물리.무자비한연사);
	fprintf(savefile, "앨리스_물리환상적인공격=%d\n", 앨리스_물리.환상적인공격);
	fprintf(savefile, "앨리스_물리제우스의분노=%d\n", 앨리스_물리.제우스의분노);
	fprintf(savefile, "앨리스_물리오디세우스의성검=%d\n", 앨리스_물리.오디세우스의성검);
	fprintf(savefile, "앨리스_물리대마법신비로운메테오=%d\n", 앨리스_물리.대마법신비로운메테오);
	fprintf(savefile, "앨리스_물리마법펀치=%d\n", 앨리스_물리.마법펀치);
	fprintf(savefile, "앨리스_물리곰발바닥=%d\n", 앨리스_물리.곰발바닥);
	fprintf(savefile, "앨리스_물리토르의분노=%d\n", 앨리스_물리.토르의분노);
	fprintf(savefile, "앨리스_물리마법의점멸=%d\n", 앨리스_물리.마법의점멸);
	fprintf(savefile, "앨리스_물리신의가호=%d\n", 앨리스_물리.신의가호);
	//앨리스_마법
	fprintf(savefile, "앨리스_마법플레이횟수=%d\n", 앨리스_마법.게임횟수);
	fprintf(savefile, "앨리스_마법승리=%d\n", 앨리스_마법.승수);
	fprintf(savefile, "앨리스_마법패배=%d\n", 앨리스_마법.패수);
	fprintf(savefile, "앨리스_마법승률=%2lf\n", 앨리스_마법.승률);
	fprintf(savefile, "앨리스_마법레이팅=%d\n", 앨리스_마법.레이팅);
	fprintf(savefile, "앨리스_마법연승=%d\n", 앨리스_마법.연승);
	fprintf(savefile, "앨리스_마법연패=%d\n", 앨리스_마법.연패);
	fprintf(savefile, "앨리스_마법킬=%d\n", 앨리스_마법.킬);
	fprintf(savefile, "앨리스_마법데스=%d\n", 앨리스_마법.데스);
	fprintf(savefile, "앨리스_마법어시스트=%d\n", 앨리스_마법.어시스트);
	fprintf(savefile, "앨리스_마법백조의부름=%d\n", 앨리스_마법.백조의부름);
	fprintf(savefile, "앨리스_마법회복의삼지창=%d\n", 앨리스_마법.회복의삼지창);
	fprintf(savefile, "앨리스_마법밤의사냥꾼=%d\n", 앨리스_마법.밤의사냥꾼);
	fprintf(savefile, "앨리스_마법비겁한고블린=%d\n", 앨리스_마법.비겁한고블린);
	fprintf(savefile, "앨리스_마법깨달음=%d\n", 앨리스_마법.깨달음);
	fprintf(savefile, "앨리스_마법흑마법=%d\n", 앨리스_마법.흑마법);
	fprintf(savefile, "앨리스_마법음과양=%d\n", 앨리스_마법.음과양의조화);
	fprintf(savefile, "앨리스_마법아레스=%d\n", 앨리스_마법.아레스의투구);
	fprintf(savefile, "앨리스_마법라식=%d\n", 앨리스_마법.라식);
	fprintf(savefile, "앨리스_마법장화=%d\n", 앨리스_마법.축복의장화);
	fprintf(savefile, "앨리스_마법반지=%d\n", 앨리스_마법.신비로운반지);
	fprintf(savefile, "앨리스_마법치명적인탄환=%d\n", 앨리스_마법.치명적인탄환);
	fprintf(savefile, "앨리스_마법깨물기=%d\n", 앨리스_마법.깨물기);
	fprintf(savefile, "앨리스_마법이동의즐거움=%d\n", 앨리스_마법.이동의즐거움);
	fprintf(savefile, "앨리스_마법판다렌=%d\n", 앨리스_마법.판다렌의화염작렬);
	fprintf(savefile, "앨리스_마법마법부스터=%d\n", 앨리스_마법.마법부스터);
	fprintf(savefile, "앨리스_마법단단한벽=%d\n", 앨리스_마법.단단한벽);
	fprintf(savefile, "앨리스_마법마법의망토=%d\n", 앨리스_마법.마법의망토);
	fprintf(savefile, "앨리스_마법고대신비마법서=%d\n", 앨리스_마법.고대신비의마법서);
	fprintf(savefile, "앨리스_마법산뜻한기분=%d\n", 앨리스_마법.산뜻한기분);
	fprintf(savefile, "앨리스_마법갈망의검=%d\n", 앨리스_마법.갈망의검);
	fprintf(savefile, "앨리스_마법지배전투의기본=%d\n", 앨리스_마법.지배전투의기본);
	fprintf(savefile, "앨리스_마법지배푸른영기=%d\n", 앨리스_마법.지배푸른영기);
	fprintf(savefile, "앨리스_마법마법전투의기본=%d\n", 앨리스_마법.마법전투의기본);
	fprintf(savefile, "앨리스_마법마법푸른영기=%d\n", 앨리스_마법.마법푸른영기);
	fprintf(savefile, "앨리스_마법강인한체력=%d\n", 앨리스_마법.강인한체력);
	fprintf(savefile, "앨리스_마법활력증진=%d\n", 앨리스_마법.활력증진);
	fprintf(savefile, "앨리스_마법저돌적인공격방식=%d\n", 앨리스_마법.저돌적인공격방식);
	fprintf(savefile, "앨리스_마법신비한공격방식=%d\n", 앨리스_마법.신비한공격방식);
	fprintf(savefile, "앨리스_마법투쟁갑옷무력화=%d\n", 앨리스_마법.투쟁갑옷무력화);
	fprintf(savefile, "앨리스_마법투쟁저항무력화=%d\n", 앨리스_마법.투쟁저항무력화);
	fprintf(savefile, "앨리스_마법지배갑옷무력화=%d\n", 앨리스_마법.지배갑옷무력화);
	fprintf(savefile, "앨리스_마법지배저항무력화=%d\n", 앨리스_마법.지배저항무력화);
	fprintf(savefile, "앨리스_마법마법갑옷무력화=%d\n", 앨리스_마법.마법갑옷무력화);
	fprintf(savefile, "앨리스_마법마법저항무력화=%d\n", 앨리스_마법.마법저항무력화);
	fprintf(savefile, "앨리스_마법신비의방패=%d\n", 앨리스_마법.신비의방패);
	fprintf(savefile, "앨리스_마법저항의방패=%d\n", 앨리스_마법.저항의방패);
	fprintf(savefile, "앨리스_마법경험치사기꾼=%d\n", 앨리스_마법.경험치사기꾼);
	fprintf(savefile, "앨리스_마법골드도둑=%d\n", 앨리스_마법.골드도둑);
	fprintf(savefile, "앨리스_마법투쟁타격용분=%d\n", 앨리스_마법.투쟁타격용분);
	fprintf(savefile, "앨리스_마법투쟁마법용분=%d\n", 앨리스_마법.투쟁마법용분);
	fprintf(savefile, "앨리스_마법지배물리용분=%d\n", 앨리스_마법.지배물리용분);
	fprintf(savefile, "앨리스_마법지배마법용분=%d\n", 앨리스_마법.지배마법용분);
	fprintf(savefile, "앨리스_마법마법물리용분=%d\n", 앨리스_마법.마법물리용분);
	fprintf(savefile, "앨리스_마법마법마법용분=%d\n", 앨리스_마법.마법마법용분);
	fprintf(savefile, "앨리스_마법긍지최후의방어=%d\n", 앨리스_마법.긍지최후의방어);
	fprintf(savefile, "앨리스_마법축복최후의방어=%d\n", 앨리스_마법.축복최후의방어);
	fprintf(savefile, "앨리스_마법집중사격=%d\n", 앨리스_마법.집중사격);
	fprintf(savefile, "앨리스_마법무자비한연사=%d\n", 앨리스_마법.무자비한연사);
	fprintf(savefile, "앨리스_마법환상적인공격=%d\n", 앨리스_마법.환상적인공격);
	fprintf(savefile, "앨리스_마법제우스의분노=%d\n", 앨리스_마법.제우스의분노);
	fprintf(savefile, "앨리스_마법오디세우스의성검=%d\n", 앨리스_마법.오디세우스의성검);
	fprintf(savefile, "앨리스_마법대마법신비로운메테오=%d\n", 앨리스_마법.대마법신비로운메테오);
	fprintf(savefile, "앨리스_마법마법펀치=%d\n", 앨리스_마법.마법펀치);
	fprintf(savefile, "앨리스_마법곰발바닥=%d\n", 앨리스_마법.곰발바닥);
	fprintf(savefile, "앨리스_마법토르의분노=%d\n", 앨리스_마법.토르의분노);
	fprintf(savefile, "앨리스_마법마법의점멸=%d\n", 앨리스_마법.마법의점멸);
	fprintf(savefile, "앨리스_마법신의가호=%d\n", 앨리스_마법.신의가호);
	//앨리스_하이브리드
	fprintf(savefile, "앨리스_하이브리드플레이횟수=%d\n", 앨리스_하이브리드.게임횟수);
	fprintf(savefile, "앨리스_하이브리드승리=%d\n", 앨리스_하이브리드.승수);
	fprintf(savefile, "앨리스_하이브리드패배=%d\n", 앨리스_하이브리드.패수);
	fprintf(savefile, "앨리스_하이브리드승률=%2lf\n", 앨리스_하이브리드.승률);
	fprintf(savefile, "앨리스_하이브리드레이팅=%d\n", 앨리스_하이브리드.레이팅);
	fprintf(savefile, "앨리스_하이브리드연승=%d\n", 앨리스_하이브리드.연승);
	fprintf(savefile, "앨리스_하이브리드연패=%d\n", 앨리스_하이브리드.연패);
	fprintf(savefile, "앨리스_하이브리드킬=%d\n", 앨리스_하이브리드.킬);
	fprintf(savefile, "앨리스_하이브리드데스=%d\n", 앨리스_하이브리드.데스);
	fprintf(savefile, "앨리스_하이브리드어시스트=%d\n", 앨리스_하이브리드.어시스트);
	fprintf(savefile, "앨리스_하이브리드백조의부름=%d\n", 앨리스_하이브리드.백조의부름);
	fprintf(savefile, "앨리스_하이브리드회복의삼지창=%d\n", 앨리스_하이브리드.회복의삼지창);
	fprintf(savefile, "앨리스_하이브리드밤의사냥꾼=%d\n", 앨리스_하이브리드.밤의사냥꾼);
	fprintf(savefile, "앨리스_하이브리드비겁한고블린=%d\n", 앨리스_하이브리드.비겁한고블린);
	fprintf(savefile, "앨리스_하이브리드깨달음=%d\n", 앨리스_하이브리드.깨달음);
	fprintf(savefile, "앨리스_하이브리드흑마법=%d\n", 앨리스_하이브리드.흑마법);
	fprintf(savefile, "앨리스_하이브리드음과양=%d\n", 앨리스_하이브리드.음과양의조화);
	fprintf(savefile, "앨리스_하이브리드아레스=%d\n", 앨리스_하이브리드.아레스의투구);
	fprintf(savefile, "앨리스_하이브리드라식=%d\n", 앨리스_하이브리드.라식);
	fprintf(savefile, "앨리스_하이브리드장화=%d\n", 앨리스_하이브리드.축복의장화);
	fprintf(savefile, "앨리스_하이브리드반지=%d\n", 앨리스_하이브리드.신비로운반지);
	fprintf(savefile, "앨리스_하이브리드치명적인탄환=%d\n", 앨리스_하이브리드.치명적인탄환);
	fprintf(savefile, "앨리스_하이브리드깨물기=%d\n", 앨리스_하이브리드.깨물기);
	fprintf(savefile, "앨리스_하이브리드이동의즐거움=%d\n", 앨리스_하이브리드.이동의즐거움);
	fprintf(savefile, "앨리스_하이브리드판다렌=%d\n", 앨리스_하이브리드.판다렌의화염작렬);
	fprintf(savefile, "앨리스_하이브리드마법부스터=%d\n", 앨리스_하이브리드.마법부스터);
	fprintf(savefile, "앨리스_하이브리드단단한벽=%d\n", 앨리스_하이브리드.단단한벽);
	fprintf(savefile, "앨리스_하이브리드마법의망토=%d\n", 앨리스_하이브리드.마법의망토);
	fprintf(savefile, "앨리스_하이브리드고대신비마법서=%d\n", 앨리스_하이브리드.고대신비의마법서);
	fprintf(savefile, "앨리스_하이브리드산뜻한기분=%d\n", 앨리스_하이브리드.산뜻한기분);
	fprintf(savefile, "앨리스_하이브리드갈망의검=%d\n", 앨리스_하이브리드.갈망의검);
	fprintf(savefile, "앨리스_하이브리드지배전투의기본=%d\n", 앨리스_하이브리드.지배전투의기본);
	fprintf(savefile, "앨리스_하이브리드지배푸른영기=%d\n", 앨리스_하이브리드.지배푸른영기);
	fprintf(savefile, "앨리스_하이브리드마법전투의기본=%d\n", 앨리스_하이브리드.마법전투의기본);
	fprintf(savefile, "앨리스_하이브리드마법푸른영기=%d\n", 앨리스_하이브리드.마법푸른영기);
	fprintf(savefile, "앨리스_하이브리드강인한체력=%d\n", 앨리스_하이브리드.강인한체력);
	fprintf(savefile, "앨리스_하이브리드활력증진=%d\n", 앨리스_하이브리드.활력증진);
	fprintf(savefile, "앨리스_하이브리드저돌적인공격방식=%d\n", 앨리스_하이브리드.저돌적인공격방식);
	fprintf(savefile, "앨리스_하이브리드신비한공격방식=%d\n", 앨리스_하이브리드.신비한공격방식);
	fprintf(savefile, "앨리스_하이브리드투쟁갑옷무력화=%d\n", 앨리스_하이브리드.투쟁갑옷무력화);
	fprintf(savefile, "앨리스_하이브리드투쟁저항무력화=%d\n", 앨리스_하이브리드.투쟁저항무력화);
	fprintf(savefile, "앨리스_하이브리드지배갑옷무력화=%d\n", 앨리스_하이브리드.지배갑옷무력화);
	fprintf(savefile, "앨리스_하이브리드지배저항무력화=%d\n", 앨리스_하이브리드.지배저항무력화);
	fprintf(savefile, "앨리스_하이브리드마법갑옷무력화=%d\n", 앨리스_하이브리드.마법갑옷무력화);
	fprintf(savefile, "앨리스_하이브리드마법저항무력화=%d\n", 앨리스_하이브리드.마법저항무력화);
	fprintf(savefile, "앨리스_하이브리드신비의방패=%d\n", 앨리스_하이브리드.신비의방패);
	fprintf(savefile, "앨리스_하이브리드저항의방패=%d\n", 앨리스_하이브리드.저항의방패);
	fprintf(savefile, "앨리스_하이브리드경험치사기꾼=%d\n", 앨리스_하이브리드.경험치사기꾼);
	fprintf(savefile, "앨리스_하이브리드골드도둑=%d\n", 앨리스_하이브리드.골드도둑);
	fprintf(savefile, "앨리스_하이브리드투쟁타격용분=%d\n", 앨리스_하이브리드.투쟁타격용분);
	fprintf(savefile, "앨리스_하이브리드투쟁마법용분=%d\n", 앨리스_하이브리드.투쟁마법용분);
	fprintf(savefile, "앨리스_하이브리드지배물리용분=%d\n", 앨리스_하이브리드.지배물리용분);
	fprintf(savefile, "앨리스_하이브리드지배마법용분=%d\n", 앨리스_하이브리드.지배마법용분);
	fprintf(savefile, "앨리스_하이브리드마법물리용분=%d\n", 앨리스_하이브리드.마법물리용분);
	fprintf(savefile, "앨리스_하이브리드마법마법용분=%d\n", 앨리스_하이브리드.마법마법용분);
	fprintf(savefile, "앨리스_하이브리드긍지최후의방어=%d\n", 앨리스_하이브리드.긍지최후의방어);
	fprintf(savefile, "앨리스_하이브리드축복최후의방어=%d\n", 앨리스_하이브리드.축복최후의방어);
	fprintf(savefile, "앨리스_하이브리드집중사격=%d\n", 앨리스_하이브리드.집중사격);
	fprintf(savefile, "앨리스_하이브리드무자비한연사=%d\n", 앨리스_하이브리드.무자비한연사);
	fprintf(savefile, "앨리스_하이브리드환상적인공격=%d\n", 앨리스_하이브리드.환상적인공격);
	fprintf(savefile, "앨리스_하이브리드제우스의분노=%d\n", 앨리스_하이브리드.제우스의분노);
	fprintf(savefile, "앨리스_하이브리드오디세우스의성검=%d\n", 앨리스_하이브리드.오디세우스의성검);
	fprintf(savefile, "앨리스_하이브리드대마법신비로운메테오=%d\n", 앨리스_하이브리드.대마법신비로운메테오);
	fprintf(savefile, "앨리스_하이브리드마법펀치=%d\n", 앨리스_하이브리드.마법펀치);
	fprintf(savefile, "앨리스_하이브리드곰발바닥=%d\n", 앨리스_하이브리드.곰발바닥);
	fprintf(savefile, "앨리스_하이브리드토르의분노=%d\n", 앨리스_하이브리드.토르의분노);
	fprintf(savefile, "앨리스_하이브리드마법의점멸=%d\n", 앨리스_하이브리드.마법의점멸);
	fprintf(savefile, "앨리스_하이브리드신의가호=%d\n", 앨리스_하이브리드.신의가호);
	//에이린
	fprintf(savefile, "에이린플레이횟수=%d\n", 에이린.게임횟수);
	fprintf(savefile, "에이린승리=%d\n", 에이린.승수);
	fprintf(savefile, "에이린패배=%d\n", 에이린.패수);
	fprintf(savefile, "에이린승률=%2lf\n", 에이린.승률);
	fprintf(savefile, "에이린레이팅=%d\n", 에이린.레이팅);
	fprintf(savefile, "에이린연승=%d\n", 에이린.연승);
	fprintf(savefile, "에이린연패=%d\n", 에이린.연패);
	fprintf(savefile, "에이린킬=%d\n", 에이린.킬);
	fprintf(savefile, "에이린데스=%d\n", 에이린.데스);
	fprintf(savefile, "에이린어시스트=%d\n", 에이린.어시스트);
	fprintf(savefile, "에이린백조의부름=%d\n", 에이린.백조의부름);
	fprintf(savefile, "에이린회복의삼지창=%d\n", 에이린.회복의삼지창);
	fprintf(savefile, "에이린밤의사냥꾼=%d\n", 에이린.밤의사냥꾼);
	fprintf(savefile, "에이린비겁한고블린=%d\n", 에이린.비겁한고블린);
	fprintf(savefile, "에이린깨달음=%d\n", 에이린.깨달음);
	fprintf(savefile, "에이린흑마법=%d\n", 에이린.흑마법);
	fprintf(savefile, "에이린음과양=%d\n", 에이린.음과양의조화);
	fprintf(savefile, "에이린아레스=%d\n", 에이린.아레스의투구);
	fprintf(savefile, "에이린라식=%d\n", 에이린.라식);
	fprintf(savefile, "에이린장화=%d\n", 에이린.축복의장화);
	fprintf(savefile, "에이린반지=%d\n", 에이린.신비로운반지);
	fprintf(savefile, "에이린치명적인탄환=%d\n", 에이린.치명적인탄환);
	fprintf(savefile, "에이린깨물기=%d\n", 에이린.깨물기);
	fprintf(savefile, "에이린이동의즐거움=%d\n", 에이린.이동의즐거움);
	fprintf(savefile, "에이린판다렌=%d\n", 에이린.판다렌의화염작렬);
	fprintf(savefile, "에이린마법부스터=%d\n", 에이린.마법부스터);
	fprintf(savefile, "에이린단단한벽=%d\n", 에이린.단단한벽);
	fprintf(savefile, "에이린마법의망토=%d\n", 에이린.마법의망토);
	fprintf(savefile, "에이린고대신비마법서=%d\n", 에이린.고대신비의마법서);
	fprintf(savefile, "에이린산뜻한기분=%d\n", 에이린.산뜻한기분);
	fprintf(savefile, "에이린갈망의검=%d\n", 에이린.갈망의검);
	fprintf(savefile, "에이린지배전투의기본=%d\n", 에이린.지배전투의기본);
	fprintf(savefile, "에이린지배푸른영기=%d\n", 에이린.지배푸른영기);
	fprintf(savefile, "에이린마법전투의기본=%d\n", 에이린.마법전투의기본);
	fprintf(savefile, "에이린마법푸른영기=%d\n", 에이린.마법푸른영기);
	fprintf(savefile, "에이린강인한체력=%d\n", 에이린.강인한체력);
	fprintf(savefile, "에이린활력증진=%d\n", 에이린.활력증진);
	fprintf(savefile, "에이린저돌적인공격방식=%d\n", 에이린.저돌적인공격방식);
	fprintf(savefile, "에이린신비한공격방식=%d\n", 에이린.신비한공격방식);
	fprintf(savefile, "에이린투쟁갑옷무력화=%d\n", 에이린.투쟁갑옷무력화);
	fprintf(savefile, "에이린투쟁저항무력화=%d\n", 에이린.투쟁저항무력화);
	fprintf(savefile, "에이린지배갑옷무력화=%d\n", 에이린.지배갑옷무력화);
	fprintf(savefile, "에이린지배저항무력화=%d\n", 에이린.지배저항무력화);
	fprintf(savefile, "에이린마법갑옷무력화=%d\n", 에이린.마법갑옷무력화);
	fprintf(savefile, "에이린마법저항무력화=%d\n", 에이린.마법저항무력화);
	fprintf(savefile, "에이린신비의방패=%d\n", 에이린.신비의방패);
	fprintf(savefile, "에이린저항의방패=%d\n", 에이린.저항의방패);
	fprintf(savefile, "에이린경험치사기꾼=%d\n", 에이린.경험치사기꾼);
	fprintf(savefile, "에이린골드도둑=%d\n", 에이린.골드도둑);
	fprintf(savefile, "에이린투쟁타격용분=%d\n", 에이린.투쟁타격용분);
	fprintf(savefile, "에이린투쟁마법용분=%d\n", 에이린.투쟁마법용분);
	fprintf(savefile, "에이린지배물리용분=%d\n", 에이린.지배물리용분);
	fprintf(savefile, "에이린지배마법용분=%d\n", 에이린.지배마법용분);
	fprintf(savefile, "에이린마법물리용분=%d\n", 에이린.마법물리용분);
	fprintf(savefile, "에이린마법마법용분=%d\n", 에이린.마법마법용분);
	fprintf(savefile, "에이린긍지최후의방어=%d\n", 에이린.긍지최후의방어);
	fprintf(savefile, "에이린축복최후의방어=%d\n", 에이린.축복최후의방어);
	fprintf(savefile, "에이린집중사격=%d\n", 에이린.집중사격);
	fprintf(savefile, "에이린무자비한연사=%d\n", 에이린.무자비한연사);
	fprintf(savefile, "에이린환상적인공격=%d\n", 에이린.환상적인공격);
	fprintf(savefile, "에이린제우스의분노=%d\n", 에이린.제우스의분노);
	fprintf(savefile, "에이린오디세우스의성검=%d\n", 에이린.오디세우스의성검);
	fprintf(savefile, "에이린대마법신비로운메테오=%d\n", 에이린.대마법신비로운메테오);
	fprintf(savefile, "에이린마법펀치=%d\n", 에이린.마법펀치);
	fprintf(savefile, "에이린곰발바닥=%d\n", 에이린.곰발바닥);
	fprintf(savefile, "에이린토르의분노=%d\n", 에이린.토르의분노);
	fprintf(savefile, "에이린마법의점멸=%d\n", 에이린.마법의점멸);
	fprintf(savefile, "에이린신의가호=%d\n", 에이린.신의가호);
	//사토리
	fprintf(savefile, "사토리플레이횟수=%d\n", 사토리.게임횟수);
	fprintf(savefile, "사토리승리=%d\n", 사토리.승수);
	fprintf(savefile, "사토리패배=%d\n", 사토리.패수);
	fprintf(savefile, "사토리승률=%2lf\n", 사토리.승률);
	fprintf(savefile, "사토리레이팅=%d\n", 사토리.레이팅);
	fprintf(savefile, "사토리연승=%d\n", 사토리.연승);
	fprintf(savefile, "사토리연패=%d\n", 사토리.연패);
	fprintf(savefile, "사토리킬=%d\n", 사토리.킬);
	fprintf(savefile, "사토리데스=%d\n", 사토리.데스);
	fprintf(savefile, "사토리어시스트=%d\n", 사토리.어시스트);
	fprintf(savefile, "사토리백조의부름=%d\n", 사토리.백조의부름);
	fprintf(savefile, "사토리회복의삼지창=%d\n", 사토리.회복의삼지창);
	fprintf(savefile, "사토리밤의사냥꾼=%d\n", 사토리.밤의사냥꾼);
	fprintf(savefile, "사토리비겁한고블린=%d\n", 사토리.비겁한고블린);
	fprintf(savefile, "사토리깨달음=%d\n", 사토리.깨달음);
	fprintf(savefile, "사토리흑마법=%d\n", 사토리.흑마법);
	fprintf(savefile, "사토리음과양=%d\n", 사토리.음과양의조화);
	fprintf(savefile, "사토리아레스=%d\n", 사토리.아레스의투구);
	fprintf(savefile, "사토리라식=%d\n", 사토리.라식);
	fprintf(savefile, "사토리장화=%d\n", 사토리.축복의장화);
	fprintf(savefile, "사토리반지=%d\n", 사토리.신비로운반지);
	fprintf(savefile, "사토리치명적인탄환=%d\n", 사토리.치명적인탄환);
	fprintf(savefile, "사토리깨물기=%d\n", 사토리.깨물기);
	fprintf(savefile, "사토리이동의즐거움=%d\n", 사토리.이동의즐거움);
	fprintf(savefile, "사토리판다렌=%d\n", 사토리.판다렌의화염작렬);
	fprintf(savefile, "사토리마법부스터=%d\n", 사토리.마법부스터);
	fprintf(savefile, "사토리단단한벽=%d\n", 사토리.단단한벽);
	fprintf(savefile, "사토리마법의망토=%d\n", 사토리.마법의망토);
	fprintf(savefile, "사토리고대신비마법서=%d\n", 사토리.고대신비의마법서);
	fprintf(savefile, "사토리산뜻한기분=%d\n", 사토리.산뜻한기분);
	fprintf(savefile, "사토리갈망의검=%d\n", 사토리.갈망의검);
	fprintf(savefile, "사토리지배전투의기본=%d\n", 사토리.지배전투의기본);
	fprintf(savefile, "사토리지배푸른영기=%d\n", 사토리.지배푸른영기);
	fprintf(savefile, "사토리마법전투의기본=%d\n", 사토리.마법전투의기본);
	fprintf(savefile, "사토리마법푸른영기=%d\n", 사토리.마법푸른영기);
	fprintf(savefile, "사토리강인한체력=%d\n", 사토리.강인한체력);
	fprintf(savefile, "사토리활력증진=%d\n", 사토리.활력증진);
	fprintf(savefile, "사토리저돌적인공격방식=%d\n", 사토리.저돌적인공격방식);
	fprintf(savefile, "사토리신비한공격방식=%d\n", 사토리.신비한공격방식);
	fprintf(savefile, "사토리투쟁갑옷무력화=%d\n", 사토리.투쟁갑옷무력화);
	fprintf(savefile, "사토리투쟁저항무력화=%d\n", 사토리.투쟁저항무력화);
	fprintf(savefile, "사토리지배갑옷무력화=%d\n", 사토리.지배갑옷무력화);
	fprintf(savefile, "사토리지배저항무력화=%d\n", 사토리.지배저항무력화);
	fprintf(savefile, "사토리마법갑옷무력화=%d\n", 사토리.마법갑옷무력화);
	fprintf(savefile, "사토리마법저항무력화=%d\n", 사토리.마법저항무력화);
	fprintf(savefile, "사토리신비의방패=%d\n", 사토리.신비의방패);
	fprintf(savefile, "사토리저항의방패=%d\n", 사토리.저항의방패);
	fprintf(savefile, "사토리경험치사기꾼=%d\n", 사토리.경험치사기꾼);
	fprintf(savefile, "사토리골드도둑=%d\n", 사토리.골드도둑);
	fprintf(savefile, "사토리투쟁타격용분=%d\n", 사토리.투쟁타격용분);
	fprintf(savefile, "사토리투쟁마법용분=%d\n", 사토리.투쟁마법용분);
	fprintf(savefile, "사토리지배물리용분=%d\n", 사토리.지배물리용분);
	fprintf(savefile, "사토리지배마법용분=%d\n", 사토리.지배마법용분);
	fprintf(savefile, "사토리마법물리용분=%d\n", 사토리.마법물리용분);
	fprintf(savefile, "사토리마법마법용분=%d\n", 사토리.마법마법용분);
	fprintf(savefile, "사토리긍지최후의방어=%d\n", 사토리.긍지최후의방어);
	fprintf(savefile, "사토리축복최후의방어=%d\n", 사토리.축복최후의방어);
	fprintf(savefile, "사토리집중사격=%d\n", 사토리.집중사격);
	fprintf(savefile, "사토리무자비한연사=%d\n", 사토리.무자비한연사);
	fprintf(savefile, "사토리환상적인공격=%d\n", 사토리.환상적인공격);
	fprintf(savefile, "사토리제우스의분노=%d\n", 사토리.제우스의분노);
	fprintf(savefile, "사토리오디세우스의성검=%d\n", 사토리.오디세우스의성검);
	fprintf(savefile, "사토리대마법신비로운메테오=%d\n", 사토리.대마법신비로운메테오);
	fprintf(savefile, "사토리마법펀치=%d\n", 사토리.마법펀치);
	fprintf(savefile, "사토리곰발바닥=%d\n", 사토리.곰발바닥);
	fprintf(savefile, "사토리토르의분노=%d\n", 사토리.토르의분노);
	fprintf(savefile, "사토리마법의점멸=%d\n", 사토리.마법의점멸);
	fprintf(savefile, "사토리신의가호=%d\n", 사토리.신의가호);
	//바쿠렌
	fprintf(savefile, "바쿠렌플레이횟수=%d\n", 바쿠렌.게임횟수);
	fprintf(savefile, "바쿠렌승리=%d\n", 바쿠렌.승수);
	fprintf(savefile, "바쿠렌패배=%d\n", 바쿠렌.패수);
	fprintf(savefile, "바쿠렌승률=%2lf\n", 바쿠렌.승률);
	fprintf(savefile, "바쿠렌레이팅=%d\n", 바쿠렌.레이팅);
	fprintf(savefile, "바쿠렌연승=%d\n", 바쿠렌.연승);
	fprintf(savefile, "바쿠렌연패=%d\n", 바쿠렌.연패);
	fprintf(savefile, "바쿠렌킬=%d\n", 바쿠렌.킬);
	fprintf(savefile, "바쿠렌데스=%d\n", 바쿠렌.데스);
	fprintf(savefile, "바쿠렌어시스트=%d\n", 바쿠렌.어시스트);
	fprintf(savefile, "바쿠렌백조의부름=%d\n", 바쿠렌.백조의부름);
	fprintf(savefile, "바쿠렌회복의삼지창=%d\n", 바쿠렌.회복의삼지창);
	fprintf(savefile, "바쿠렌밤의사냥꾼=%d\n", 바쿠렌.밤의사냥꾼);
	fprintf(savefile, "바쿠렌비겁한고블린=%d\n", 바쿠렌.비겁한고블린);
	fprintf(savefile, "바쿠렌깨달음=%d\n", 바쿠렌.깨달음);
	fprintf(savefile, "바쿠렌흑마법=%d\n", 바쿠렌.흑마법);
	fprintf(savefile, "바쿠렌음과양=%d\n", 바쿠렌.음과양의조화);
	fprintf(savefile, "바쿠렌아레스=%d\n", 바쿠렌.아레스의투구);
	fprintf(savefile, "바쿠렌라식=%d\n", 바쿠렌.라식);
	fprintf(savefile, "바쿠렌장화=%d\n", 바쿠렌.축복의장화);
	fprintf(savefile, "바쿠렌반지=%d\n", 바쿠렌.신비로운반지);
	fprintf(savefile, "바쿠렌치명적인탄환=%d\n", 바쿠렌.치명적인탄환);
	fprintf(savefile, "바쿠렌깨물기=%d\n", 바쿠렌.깨물기);
	fprintf(savefile, "바쿠렌이동의즐거움=%d\n", 바쿠렌.이동의즐거움);
	fprintf(savefile, "바쿠렌판다렌=%d\n", 바쿠렌.판다렌의화염작렬);
	fprintf(savefile, "바쿠렌마법부스터=%d\n", 바쿠렌.마법부스터);
	fprintf(savefile, "바쿠렌단단한벽=%d\n", 바쿠렌.단단한벽);
	fprintf(savefile, "바쿠렌마법의망토=%d\n", 바쿠렌.마법의망토);
	fprintf(savefile, "바쿠렌고대신비마법서=%d\n", 바쿠렌.고대신비의마법서);
	fprintf(savefile, "바쿠렌산뜻한기분=%d\n", 바쿠렌.산뜻한기분);
	fprintf(savefile, "바쿠렌갈망의검=%d\n", 바쿠렌.갈망의검);
	fprintf(savefile, "바쿠렌지배전투의기본=%d\n", 바쿠렌.지배전투의기본);
	fprintf(savefile, "바쿠렌지배푸른영기=%d\n", 바쿠렌.지배푸른영기);
	fprintf(savefile, "바쿠렌마법전투의기본=%d\n", 바쿠렌.마법전투의기본);
	fprintf(savefile, "바쿠렌마법푸른영기=%d\n", 바쿠렌.마법푸른영기);
	fprintf(savefile, "바쿠렌강인한체력=%d\n", 바쿠렌.강인한체력);
	fprintf(savefile, "바쿠렌활력증진=%d\n", 바쿠렌.활력증진);
	fprintf(savefile, "바쿠렌저돌적인공격방식=%d\n", 바쿠렌.저돌적인공격방식);
	fprintf(savefile, "바쿠렌신비한공격방식=%d\n", 바쿠렌.신비한공격방식);
	fprintf(savefile, "바쿠렌투쟁갑옷무력화=%d\n", 바쿠렌.투쟁갑옷무력화);
	fprintf(savefile, "바쿠렌투쟁저항무력화=%d\n", 바쿠렌.투쟁저항무력화);
	fprintf(savefile, "바쿠렌지배갑옷무력화=%d\n", 바쿠렌.지배갑옷무력화);
	fprintf(savefile, "바쿠렌지배저항무력화=%d\n", 바쿠렌.지배저항무력화);
	fprintf(savefile, "바쿠렌마법갑옷무력화=%d\n", 바쿠렌.마법갑옷무력화);
	fprintf(savefile, "바쿠렌마법저항무력화=%d\n", 바쿠렌.마법저항무력화);
	fprintf(savefile, "바쿠렌신비의방패=%d\n", 바쿠렌.신비의방패);
	fprintf(savefile, "바쿠렌저항의방패=%d\n", 바쿠렌.저항의방패);
	fprintf(savefile, "바쿠렌경험치사기꾼=%d\n", 바쿠렌.경험치사기꾼);
	fprintf(savefile, "바쿠렌골드도둑=%d\n", 바쿠렌.골드도둑);
	fprintf(savefile, "바쿠렌투쟁타격용분=%d\n", 바쿠렌.투쟁타격용분);
	fprintf(savefile, "바쿠렌투쟁마법용분=%d\n", 바쿠렌.투쟁마법용분);
	fprintf(savefile, "바쿠렌지배물리용분=%d\n", 바쿠렌.지배물리용분);
	fprintf(savefile, "바쿠렌지배마법용분=%d\n", 바쿠렌.지배마법용분);
	fprintf(savefile, "바쿠렌마법물리용분=%d\n", 바쿠렌.마법물리용분);
	fprintf(savefile, "바쿠렌마법마법용분=%d\n", 바쿠렌.마법마법용분);
	fprintf(savefile, "바쿠렌긍지최후의방어=%d\n", 바쿠렌.긍지최후의방어);
	fprintf(savefile, "바쿠렌축복최후의방어=%d\n", 바쿠렌.축복최후의방어);
	fprintf(savefile, "바쿠렌집중사격=%d\n", 바쿠렌.집중사격);
	fprintf(savefile, "바쿠렌무자비한연사=%d\n", 바쿠렌.무자비한연사);
	fprintf(savefile, "바쿠렌환상적인공격=%d\n", 바쿠렌.환상적인공격);
	fprintf(savefile, "바쿠렌제우스의분노=%d\n", 바쿠렌.제우스의분노);
	fprintf(savefile, "바쿠렌오디세우스의성검=%d\n", 바쿠렌.오디세우스의성검);
	fprintf(savefile, "바쿠렌대마법신비로운메테오=%d\n", 바쿠렌.대마법신비로운메테오);
	fprintf(savefile, "바쿠렌마법펀치=%d\n", 바쿠렌.마법펀치);
	fprintf(savefile, "바쿠렌곰발바닥=%d\n", 바쿠렌.곰발바닥);
	fprintf(savefile, "바쿠렌토르의분노=%d\n", 바쿠렌.토르의분노);
	fprintf(savefile, "바쿠렌마법의점멸=%d\n", 바쿠렌.마법의점멸);
	fprintf(savefile, "바쿠렌신의가호=%d\n", 바쿠렌.신의가호);
	//카구야
	fprintf(savefile, "카구야플레이횟수=%d\n", 카구야.게임횟수);
	fprintf(savefile, "카구야승리=%d\n", 카구야.승수);
	fprintf(savefile, "카구야패배=%d\n", 카구야.패수);
	fprintf(savefile, "카구야승률=%2lf\n", 카구야.승률);
	fprintf(savefile, "카구야레이팅=%d\n", 카구야.레이팅);
	fprintf(savefile, "카구야연승=%d\n", 카구야.연승);
	fprintf(savefile, "카구야연패=%d\n", 카구야.연패);
	fprintf(savefile, "카구야킬=%d\n", 카구야.킬);
	fprintf(savefile, "카구야데스=%d\n", 카구야.데스);
	fprintf(savefile, "카구야어시스트=%d\n", 카구야.어시스트);
	fprintf(savefile, "카구야백조의부름=%d\n", 카구야.백조의부름);
	fprintf(savefile, "카구야회복의삼지창=%d\n", 카구야.회복의삼지창);
	fprintf(savefile, "카구야밤의사냥꾼=%d\n", 카구야.밤의사냥꾼);
	fprintf(savefile, "카구야비겁한고블린=%d\n", 카구야.비겁한고블린);
	fprintf(savefile, "카구야깨달음=%d\n", 카구야.깨달음);
	fprintf(savefile, "카구야흑마법=%d\n", 카구야.흑마법);
	fprintf(savefile, "카구야음과양=%d\n", 카구야.음과양의조화);
	fprintf(savefile, "카구야아레스=%d\n", 카구야.아레스의투구);
	fprintf(savefile, "카구야라식=%d\n", 카구야.라식);
	fprintf(savefile, "카구야장화=%d\n", 카구야.축복의장화);
	fprintf(savefile, "카구야반지=%d\n", 카구야.신비로운반지);
	fprintf(savefile, "카구야치명적인탄환=%d\n", 카구야.치명적인탄환);
	fprintf(savefile, "카구야깨물기=%d\n", 카구야.깨물기);
	fprintf(savefile, "카구야이동의즐거움=%d\n", 카구야.이동의즐거움);
	fprintf(savefile, "카구야판다렌=%d\n", 카구야.판다렌의화염작렬);
	fprintf(savefile, "카구야마법부스터=%d\n", 카구야.마법부스터);
	fprintf(savefile, "카구야단단한벽=%d\n", 카구야.단단한벽);
	fprintf(savefile, "카구야마법의망토=%d\n", 카구야.마법의망토);
	fprintf(savefile, "카구야고대신비마법서=%d\n", 카구야.고대신비의마법서);
	fprintf(savefile, "카구야산뜻한기분=%d\n", 카구야.산뜻한기분);
	fprintf(savefile, "카구야갈망의검=%d\n", 카구야.갈망의검);
	fprintf(savefile, "카구야지배전투의기본=%d\n", 카구야.지배전투의기본);
	fprintf(savefile, "카구야지배푸른영기=%d\n", 카구야.지배푸른영기);
	fprintf(savefile, "카구야마법전투의기본=%d\n", 카구야.마법전투의기본);
	fprintf(savefile, "카구야마법푸른영기=%d\n", 카구야.마법푸른영기);
	fprintf(savefile, "카구야강인한체력=%d\n", 카구야.강인한체력);
	fprintf(savefile, "카구야활력증진=%d\n", 카구야.활력증진);
	fprintf(savefile, "카구야저돌적인공격방식=%d\n", 카구야.저돌적인공격방식);
	fprintf(savefile, "카구야신비한공격방식=%d\n", 카구야.신비한공격방식);
	fprintf(savefile, "카구야투쟁갑옷무력화=%d\n", 카구야.투쟁갑옷무력화);
	fprintf(savefile, "카구야투쟁저항무력화=%d\n", 카구야.투쟁저항무력화);
	fprintf(savefile, "카구야지배갑옷무력화=%d\n", 카구야.지배갑옷무력화);
	fprintf(savefile, "카구야지배저항무력화=%d\n", 카구야.지배저항무력화);
	fprintf(savefile, "카구야마법갑옷무력화=%d\n", 카구야.마법갑옷무력화);
	fprintf(savefile, "카구야마법저항무력화=%d\n", 카구야.마법저항무력화);
	fprintf(savefile, "카구야신비의방패=%d\n", 카구야.신비의방패);
	fprintf(savefile, "카구야저항의방패=%d\n", 카구야.저항의방패);
	fprintf(savefile, "카구야경험치사기꾼=%d\n", 카구야.경험치사기꾼);
	fprintf(savefile, "카구야골드도둑=%d\n", 카구야.골드도둑);
	fprintf(savefile, "카구야투쟁타격용분=%d\n", 카구야.투쟁타격용분);
	fprintf(savefile, "카구야투쟁마법용분=%d\n", 카구야.투쟁마법용분);
	fprintf(savefile, "카구야지배물리용분=%d\n", 카구야.지배물리용분);
	fprintf(savefile, "카구야지배마법용분=%d\n", 카구야.지배마법용분);
	fprintf(savefile, "카구야마법물리용분=%d\n", 카구야.마법물리용분);
	fprintf(savefile, "카구야마법마법용분=%d\n", 카구야.마법마법용분);
	fprintf(savefile, "카구야긍지최후의방어=%d\n", 카구야.긍지최후의방어);
	fprintf(savefile, "카구야축복최후의방어=%d\n", 카구야.축복최후의방어);
	fprintf(savefile, "카구야집중사격=%d\n", 카구야.집중사격);
	fprintf(savefile, "카구야무자비한연사=%d\n", 카구야.무자비한연사);
	fprintf(savefile, "카구야환상적인공격=%d\n", 카구야.환상적인공격);
	fprintf(savefile, "카구야제우스의분노=%d\n", 카구야.제우스의분노);
	fprintf(savefile, "카구야오디세우스의성검=%d\n", 카구야.오디세우스의성검);
	fprintf(savefile, "카구야대마법신비로운메테오=%d\n", 카구야.대마법신비로운메테오);
	fprintf(savefile, "카구야마법펀치=%d\n", 카구야.마법펀치);
	fprintf(savefile, "카구야곰발바닥=%d\n", 카구야.곰발바닥);
	fprintf(savefile, "카구야토르의분노=%d\n", 카구야.토르의분노);
	fprintf(savefile, "카구야마법의점멸=%d\n", 카구야.마법의점멸);
	fprintf(savefile, "카구야신의가호=%d\n", 카구야.신의가호);
	//미코
	fprintf(savefile, "미코플레이횟수=%d\n", 미코.게임횟수);
	fprintf(savefile, "미코승리=%d\n", 미코.승수);
	fprintf(savefile, "미코패배=%d\n", 미코.패수);
	fprintf(savefile, "미코승률=%2lf\n", 미코.승률);
	fprintf(savefile, "미코레이팅=%d\n", 미코.레이팅);
	fprintf(savefile, "미코연승=%d\n", 미코.연승);
	fprintf(savefile, "미코연패=%d\n", 미코.연패);
	fprintf(savefile, "미코킬=%d\n", 미코.킬);
	fprintf(savefile, "미코데스=%d\n", 미코.데스);
	fprintf(savefile, "미코어시스트=%d\n", 미코.어시스트);
	fprintf(savefile, "미코백조의부름=%d\n", 미코.백조의부름);
	fprintf(savefile, "미코회복의삼지창=%d\n", 미코.회복의삼지창);
	fprintf(savefile, "미코밤의사냥꾼=%d\n", 미코.밤의사냥꾼);
	fprintf(savefile, "미코비겁한고블린=%d\n", 미코.비겁한고블린);
	fprintf(savefile, "미코깨달음=%d\n", 미코.깨달음);
	fprintf(savefile, "미코흑마법=%d\n", 미코.흑마법);
	fprintf(savefile, "미코음과양=%d\n", 미코.음과양의조화);
	fprintf(savefile, "미코아레스=%d\n", 미코.아레스의투구);
	fprintf(savefile, "미코라식=%d\n", 미코.라식);
	fprintf(savefile, "미코장화=%d\n", 미코.축복의장화);
	fprintf(savefile, "미코반지=%d\n", 미코.신비로운반지);
	fprintf(savefile, "미코치명적인탄환=%d\n", 미코.치명적인탄환);
	fprintf(savefile, "미코깨물기=%d\n", 미코.깨물기);
	fprintf(savefile, "미코이동의즐거움=%d\n", 미코.이동의즐거움);
	fprintf(savefile, "미코판다렌=%d\n", 미코.판다렌의화염작렬);
	fprintf(savefile, "미코마법부스터=%d\n", 미코.마법부스터);
	fprintf(savefile, "미코단단한벽=%d\n", 미코.단단한벽);
	fprintf(savefile, "미코마법의망토=%d\n", 미코.마법의망토);
	fprintf(savefile, "미코고대신비마법서=%d\n", 미코.고대신비의마법서);
	fprintf(savefile, "미코산뜻한기분=%d\n", 미코.산뜻한기분);
	fprintf(savefile, "미코갈망의검=%d\n", 미코.갈망의검);
	fprintf(savefile, "미코지배전투의기본=%d\n", 미코.지배전투의기본);
	fprintf(savefile, "미코지배푸른영기=%d\n", 미코.지배푸른영기);
	fprintf(savefile, "미코마법전투의기본=%d\n", 미코.마법전투의기본);
	fprintf(savefile, "미코마법푸른영기=%d\n", 미코.마법푸른영기);
	fprintf(savefile, "미코강인한체력=%d\n", 미코.강인한체력);
	fprintf(savefile, "미코활력증진=%d\n", 미코.활력증진);
	fprintf(savefile, "미코저돌적인공격방식=%d\n", 미코.저돌적인공격방식);
	fprintf(savefile, "미코신비한공격방식=%d\n", 미코.신비한공격방식);
	fprintf(savefile, "미코투쟁갑옷무력화=%d\n", 미코.투쟁갑옷무력화);
	fprintf(savefile, "미코투쟁저항무력화=%d\n", 미코.투쟁저항무력화);
	fprintf(savefile, "미코지배갑옷무력화=%d\n", 미코.지배갑옷무력화);
	fprintf(savefile, "미코지배저항무력화=%d\n", 미코.지배저항무력화);
	fprintf(savefile, "미코마법갑옷무력화=%d\n", 미코.마법갑옷무력화);
	fprintf(savefile, "미코마법저항무력화=%d\n", 미코.마법저항무력화);
	fprintf(savefile, "미코신비의방패=%d\n", 미코.신비의방패);
	fprintf(savefile, "미코저항의방패=%d\n", 미코.저항의방패);
	fprintf(savefile, "미코경험치사기꾼=%d\n", 미코.경험치사기꾼);
	fprintf(savefile, "미코골드도둑=%d\n", 미코.골드도둑);
	fprintf(savefile, "미코투쟁타격용분=%d\n", 미코.투쟁타격용분);
	fprintf(savefile, "미코투쟁마법용분=%d\n", 미코.투쟁마법용분);
	fprintf(savefile, "미코지배물리용분=%d\n", 미코.지배물리용분);
	fprintf(savefile, "미코지배마법용분=%d\n", 미코.지배마법용분);
	fprintf(savefile, "미코마법물리용분=%d\n", 미코.마법물리용분);
	fprintf(savefile, "미코마법마법용분=%d\n", 미코.마법마법용분);
	fprintf(savefile, "미코긍지최후의방어=%d\n", 미코.긍지최후의방어);
	fprintf(savefile, "미코축복최후의방어=%d\n", 미코.축복최후의방어);
	fprintf(savefile, "미코집중사격=%d\n", 미코.집중사격);
	fprintf(savefile, "미코무자비한연사=%d\n", 미코.무자비한연사);
	fprintf(savefile, "미코환상적인공격=%d\n", 미코.환상적인공격);
	fprintf(savefile, "미코제우스의분노=%d\n", 미코.제우스의분노);
	fprintf(savefile, "미코오디세우스의성검=%d\n", 미코.오디세우스의성검);
	fprintf(savefile, "미코대마법신비로운메테오=%d\n", 미코.대마법신비로운메테오);
	fprintf(savefile, "미코마법펀치=%d\n", 미코.마법펀치);
	fprintf(savefile, "미코곰발바닥=%d\n", 미코.곰발바닥);
	fprintf(savefile, "미코토르의분노=%d\n", 미코.토르의분노);
	fprintf(savefile, "미코마법의점멸=%d\n", 미코.마법의점멸);
	fprintf(savefile, "미코신의가호=%d\n", 미코.신의가호);
	//누에
	fprintf(savefile, "누에플레이횟수=%d\n", 누에.게임횟수);
	fprintf(savefile, "누에승리=%d\n", 누에.승수);
	fprintf(savefile, "누에패배=%d\n", 누에.패수);
	fprintf(savefile, "누에승률=%2lf\n", 누에.승률);
	fprintf(savefile, "누에레이팅=%d\n", 누에.레이팅);
	fprintf(savefile, "누에연승=%d\n", 누에.연승);
	fprintf(savefile, "누에연패=%d\n", 누에.연패);
	fprintf(savefile, "누에킬=%d\n", 누에.킬);
	fprintf(savefile, "누에데스=%d\n", 누에.데스);
	fprintf(savefile, "누에어시스트=%d\n", 누에.어시스트);
	fprintf(savefile, "누에백조의부름=%d\n", 누에.백조의부름);
	fprintf(savefile, "누에회복의삼지창=%d\n", 누에.회복의삼지창);
	fprintf(savefile, "누에밤의사냥꾼=%d\n", 누에.밤의사냥꾼);
	fprintf(savefile, "누에비겁한고블린=%d\n", 누에.비겁한고블린);
	fprintf(savefile, "누에깨달음=%d\n", 누에.깨달음);
	fprintf(savefile, "누에흑마법=%d\n", 누에.흑마법);
	fprintf(savefile, "누에음과양=%d\n", 누에.음과양의조화);
	fprintf(savefile, "누에아레스=%d\n", 누에.아레스의투구);
	fprintf(savefile, "누에라식=%d\n", 누에.라식);
	fprintf(savefile, "누에장화=%d\n", 누에.축복의장화);
	fprintf(savefile, "누에반지=%d\n", 누에.신비로운반지);
	fprintf(savefile, "누에치명적인탄환=%d\n", 누에.치명적인탄환);
	fprintf(savefile, "누에깨물기=%d\n", 누에.깨물기);
	fprintf(savefile, "누에이동의즐거움=%d\n", 누에.이동의즐거움);
	fprintf(savefile, "누에판다렌=%d\n", 누에.판다렌의화염작렬);
	fprintf(savefile, "누에마법부스터=%d\n", 누에.마법부스터);
	fprintf(savefile, "누에단단한벽=%d\n", 누에.단단한벽);
	fprintf(savefile, "누에마법의망토=%d\n", 누에.마법의망토);
	fprintf(savefile, "누에고대신비마법서=%d\n", 누에.고대신비의마법서);
	fprintf(savefile, "누에산뜻한기분=%d\n", 누에.산뜻한기분);
	fprintf(savefile, "누에갈망의검=%d\n", 누에.갈망의검);
	fprintf(savefile, "누에지배전투의기본=%d\n", 누에.지배전투의기본);
	fprintf(savefile, "누에지배푸른영기=%d\n", 누에.지배푸른영기);
	fprintf(savefile, "누에마법전투의기본=%d\n", 누에.마법전투의기본);
	fprintf(savefile, "누에마법푸른영기=%d\n", 누에.마법푸른영기);
	fprintf(savefile, "누에강인한체력=%d\n", 누에.강인한체력);
	fprintf(savefile, "누에활력증진=%d\n", 누에.활력증진);
	fprintf(savefile, "누에저돌적인공격방식=%d\n", 누에.저돌적인공격방식);
	fprintf(savefile, "누에신비한공격방식=%d\n", 누에.신비한공격방식);
	fprintf(savefile, "누에투쟁갑옷무력화=%d\n", 누에.투쟁갑옷무력화);
	fprintf(savefile, "누에투쟁저항무력화=%d\n", 누에.투쟁저항무력화);
	fprintf(savefile, "누에지배갑옷무력화=%d\n", 누에.지배갑옷무력화);
	fprintf(savefile, "누에지배저항무력화=%d\n", 누에.지배저항무력화);
	fprintf(savefile, "누에마법갑옷무력화=%d\n", 누에.마법갑옷무력화);
	fprintf(savefile, "누에마법저항무력화=%d\n", 누에.마법저항무력화);
	fprintf(savefile, "누에신비의방패=%d\n", 누에.신비의방패);
	fprintf(savefile, "누에저항의방패=%d\n", 누에.저항의방패);
	fprintf(savefile, "누에경험치사기꾼=%d\n", 누에.경험치사기꾼);
	fprintf(savefile, "누에골드도둑=%d\n", 누에.골드도둑);
	fprintf(savefile, "누에투쟁타격용분=%d\n", 누에.투쟁타격용분);
	fprintf(savefile, "누에투쟁마법용분=%d\n", 누에.투쟁마법용분);
	fprintf(savefile, "누에지배물리용분=%d\n", 누에.지배물리용분);
	fprintf(savefile, "누에지배마법용분=%d\n", 누에.지배마법용분);
	fprintf(savefile, "누에마법물리용분=%d\n", 누에.마법물리용분);
	fprintf(savefile, "누에마법마법용분=%d\n", 누에.마법마법용분);
	fprintf(savefile, "누에긍지최후의방어=%d\n", 누에.긍지최후의방어);
	fprintf(savefile, "누에축복최후의방어=%d\n", 누에.축복최후의방어);
	fprintf(savefile, "누에집중사격=%d\n", 누에.집중사격);
	fprintf(savefile, "누에무자비한연사=%d\n", 누에.무자비한연사);
	fprintf(savefile, "누에환상적인공격=%d\n", 누에.환상적인공격);
	fprintf(savefile, "누에제우스의분노=%d\n", 누에.제우스의분노);
	fprintf(savefile, "누에오디세우스의성검=%d\n", 누에.오디세우스의성검);
	fprintf(savefile, "누에대마법신비로운메테오=%d\n", 누에.대마법신비로운메테오);
	fprintf(savefile, "누에마법펀치=%d\n", 누에.마법펀치);
	fprintf(savefile, "누에곰발바닥=%d\n", 누에.곰발바닥);
	fprintf(savefile, "누에토르의분노=%d\n", 누에.토르의분노);
	fprintf(savefile, "누에마법의점멸=%d\n", 누에.마법의점멸);
	fprintf(savefile, "누에신의가호=%d\n", 누에.신의가호);
	//스이카
	fprintf(savefile, "스이카플레이횟수=%d\n", 스이카.게임횟수);
	fprintf(savefile, "스이카승리=%d\n", 스이카.승수);
	fprintf(savefile, "스이카패배=%d\n", 스이카.패수);
	fprintf(savefile, "스이카승률=%2lf\n", 스이카.승률);
	fprintf(savefile, "스이카레이팅=%d\n", 스이카.레이팅);
	fprintf(savefile, "스이카연승=%d\n", 스이카.연승);
	fprintf(savefile, "스이카연패=%d\n", 스이카.연패);
	fprintf(savefile, "스이카킬=%d\n", 스이카.킬);
	fprintf(savefile, "스이카데스=%d\n", 스이카.데스);
	fprintf(savefile, "스이카어시스트=%d\n", 스이카.어시스트);
	fprintf(savefile, "스이카백조의부름=%d\n", 스이카.백조의부름);
	fprintf(savefile, "스이카회복의삼지창=%d\n", 스이카.회복의삼지창);
	fprintf(savefile, "스이카밤의사냥꾼=%d\n", 스이카.밤의사냥꾼);
	fprintf(savefile, "스이카비겁한고블린=%d\n", 스이카.비겁한고블린);
	fprintf(savefile, "스이카깨달음=%d\n", 스이카.깨달음);
	fprintf(savefile, "스이카흑마법=%d\n", 스이카.흑마법);
	fprintf(savefile, "스이카음과양=%d\n", 스이카.음과양의조화);
	fprintf(savefile, "스이카아레스=%d\n", 스이카.아레스의투구);
	fprintf(savefile, "스이카라식=%d\n", 스이카.라식);
	fprintf(savefile, "스이카장화=%d\n", 스이카.축복의장화);
	fprintf(savefile, "스이카반지=%d\n", 스이카.신비로운반지);
	fprintf(savefile, "스이카치명적인탄환=%d\n", 스이카.치명적인탄환);
	fprintf(savefile, "스이카깨물기=%d\n", 스이카.깨물기);
	fprintf(savefile, "스이카이동의즐거움=%d\n", 스이카.이동의즐거움);
	fprintf(savefile, "스이카판다렌=%d\n", 스이카.판다렌의화염작렬);
	fprintf(savefile, "스이카마법부스터=%d\n", 스이카.마법부스터);
	fprintf(savefile, "스이카단단한벽=%d\n", 스이카.단단한벽);
	fprintf(savefile, "스이카마법의망토=%d\n", 스이카.마법의망토);
	fprintf(savefile, "스이카고대신비마법서=%d\n", 스이카.고대신비의마법서);
	fprintf(savefile, "스이카산뜻한기분=%d\n", 스이카.산뜻한기분);
	fprintf(savefile, "스이카갈망의검=%d\n", 스이카.갈망의검);
	fprintf(savefile, "스이카지배전투의기본=%d\n", 스이카.지배전투의기본);
	fprintf(savefile, "스이카지배푸른영기=%d\n", 스이카.지배푸른영기);
	fprintf(savefile, "스이카마법전투의기본=%d\n", 스이카.마법전투의기본);
	fprintf(savefile, "스이카마법푸른영기=%d\n", 스이카.마법푸른영기);
	fprintf(savefile, "스이카강인한체력=%d\n", 스이카.강인한체력);
	fprintf(savefile, "스이카활력증진=%d\n", 스이카.활력증진);
	fprintf(savefile, "스이카저돌적인공격방식=%d\n", 스이카.저돌적인공격방식);
	fprintf(savefile, "스이카신비한공격방식=%d\n", 스이카.신비한공격방식);
	fprintf(savefile, "스이카투쟁갑옷무력화=%d\n", 스이카.투쟁갑옷무력화);
	fprintf(savefile, "스이카투쟁저항무력화=%d\n", 스이카.투쟁저항무력화);
	fprintf(savefile, "스이카지배갑옷무력화=%d\n", 스이카.지배갑옷무력화);
	fprintf(savefile, "스이카지배저항무력화=%d\n", 스이카.지배저항무력화);
	fprintf(savefile, "스이카마법갑옷무력화=%d\n", 스이카.마법갑옷무력화);
	fprintf(savefile, "스이카마법저항무력화=%d\n", 스이카.마법저항무력화);
	fprintf(savefile, "스이카신비의방패=%d\n", 스이카.신비의방패);
	fprintf(savefile, "스이카저항의방패=%d\n", 스이카.저항의방패);
	fprintf(savefile, "스이카경험치사기꾼=%d\n", 스이카.경험치사기꾼);
	fprintf(savefile, "스이카골드도둑=%d\n", 스이카.골드도둑);
	fprintf(savefile, "스이카투쟁타격용분=%d\n", 스이카.투쟁타격용분);
	fprintf(savefile, "스이카투쟁마법용분=%d\n", 스이카.투쟁마법용분);
	fprintf(savefile, "스이카지배물리용분=%d\n", 스이카.지배물리용분);
	fprintf(savefile, "스이카지배마법용분=%d\n", 스이카.지배마법용분);
	fprintf(savefile, "스이카마법물리용분=%d\n", 스이카.마법물리용분);
	fprintf(savefile, "스이카마법마법용분=%d\n", 스이카.마법마법용분);
	fprintf(savefile, "스이카긍지최후의방어=%d\n", 스이카.긍지최후의방어);
	fprintf(savefile, "스이카축복최후의방어=%d\n", 스이카.축복최후의방어);
	fprintf(savefile, "스이카집중사격=%d\n", 스이카.집중사격);
	fprintf(savefile, "스이카무자비한연사=%d\n", 스이카.무자비한연사);
	fprintf(savefile, "스이카환상적인공격=%d\n", 스이카.환상적인공격);
	fprintf(savefile, "스이카제우스의분노=%d\n", 스이카.제우스의분노);
	fprintf(savefile, "스이카오디세우스의성검=%d\n", 스이카.오디세우스의성검);
	fprintf(savefile, "스이카대마법신비로운메테오=%d\n", 스이카.대마법신비로운메테오);
	fprintf(savefile, "스이카마법펀치=%d\n", 스이카.마법펀치);
	fprintf(savefile, "스이카곰발바닥=%d\n", 스이카.곰발바닥);
	fprintf(savefile, "스이카토르의분노=%d\n", 스이카.토르의분노);
	fprintf(savefile, "스이카마법의점멸=%d\n", 스이카.마법의점멸);
	fprintf(savefile, "스이카신의가호=%d\n", 스이카.신의가호);
	//시키
	fprintf(savefile, "시키플레이횟수=%d\n", 시키.게임횟수);
	fprintf(savefile, "시키승리=%d\n", 시키.승수);
	fprintf(savefile, "시키패배=%d\n", 시키.패수);
	fprintf(savefile, "시키승률=%2lf\n", 시키.승률);
	fprintf(savefile, "시키레이팅=%d\n", 시키.레이팅);
	fprintf(savefile, "시키연승=%d\n", 시키.연승);
	fprintf(savefile, "시키연패=%d\n", 시키.연패);
	fprintf(savefile, "시키킬=%d\n", 시키.킬);
	fprintf(savefile, "시키데스=%d\n", 시키.데스);
	fprintf(savefile, "시키어시스트=%d\n", 시키.어시스트);
	fprintf(savefile, "시키백조의부름=%d\n", 시키.백조의부름);
	fprintf(savefile, "시키회복의삼지창=%d\n", 시키.회복의삼지창);
	fprintf(savefile, "시키밤의사냥꾼=%d\n", 시키.밤의사냥꾼);
	fprintf(savefile, "시키비겁한고블린=%d\n", 시키.비겁한고블린);
	fprintf(savefile, "시키깨달음=%d\n", 시키.깨달음);
	fprintf(savefile, "시키흑마법=%d\n", 시키.흑마법);
	fprintf(savefile, "시키음과양=%d\n", 시키.음과양의조화);
	fprintf(savefile, "시키아레스=%d\n", 시키.아레스의투구);
	fprintf(savefile, "시키라식=%d\n", 시키.라식);
	fprintf(savefile, "시키장화=%d\n", 시키.축복의장화);
	fprintf(savefile, "시키반지=%d\n", 시키.신비로운반지);
	fprintf(savefile, "시키치명적인탄환=%d\n", 시키.치명적인탄환);
	fprintf(savefile, "시키깨물기=%d\n", 시키.깨물기);
	fprintf(savefile, "시키이동의즐거움=%d\n", 시키.이동의즐거움);
	fprintf(savefile, "시키판다렌=%d\n", 시키.판다렌의화염작렬);
	fprintf(savefile, "시키마법부스터=%d\n", 시키.마법부스터);
	fprintf(savefile, "시키단단한벽=%d\n", 시키.단단한벽);
	fprintf(savefile, "시키마법의망토=%d\n", 시키.마법의망토);
	fprintf(savefile, "시키고대신비마법서=%d\n", 시키.고대신비의마법서);
	fprintf(savefile, "시키산뜻한기분=%d\n", 시키.산뜻한기분);
	fprintf(savefile, "시키갈망의검=%d\n", 시키.갈망의검);
	fprintf(savefile, "시키지배전투의기본=%d\n", 시키.지배전투의기본);
	fprintf(savefile, "시키지배푸른영기=%d\n", 시키.지배푸른영기);
	fprintf(savefile, "시키마법전투의기본=%d\n", 시키.마법전투의기본);
	fprintf(savefile, "시키마법푸른영기=%d\n", 시키.마법푸른영기);
	fprintf(savefile, "시키강인한체력=%d\n", 시키.강인한체력);
	fprintf(savefile, "시키활력증진=%d\n", 시키.활력증진);
	fprintf(savefile, "시키저돌적인공격방식=%d\n", 시키.저돌적인공격방식);
	fprintf(savefile, "시키신비한공격방식=%d\n", 시키.신비한공격방식);
	fprintf(savefile, "시키투쟁갑옷무력화=%d\n", 시키.투쟁갑옷무력화);
	fprintf(savefile, "시키투쟁저항무력화=%d\n", 시키.투쟁저항무력화);
	fprintf(savefile, "시키지배갑옷무력화=%d\n", 시키.지배갑옷무력화);
	fprintf(savefile, "시키지배저항무력화=%d\n", 시키.지배저항무력화);
	fprintf(savefile, "시키마법갑옷무력화=%d\n", 시키.마법갑옷무력화);
	fprintf(savefile, "시키마법저항무력화=%d\n", 시키.마법저항무력화);
	fprintf(savefile, "시키신비의방패=%d\n", 시키.신비의방패);
	fprintf(savefile, "시키저항의방패=%d\n", 시키.저항의방패);
	fprintf(savefile, "시키경험치사기꾼=%d\n", 시키.경험치사기꾼);
	fprintf(savefile, "시키골드도둑=%d\n", 시키.골드도둑);
	fprintf(savefile, "시키투쟁타격용분=%d\n", 시키.투쟁타격용분);
	fprintf(savefile, "시키투쟁마법용분=%d\n", 시키.투쟁마법용분);
	fprintf(savefile, "시키지배물리용분=%d\n", 시키.지배물리용분);
	fprintf(savefile, "시키지배마법용분=%d\n", 시키.지배마법용분);
	fprintf(savefile, "시키마법물리용분=%d\n", 시키.마법물리용분);
	fprintf(savefile, "시키마법마법용분=%d\n", 시키.마법마법용분);
	fprintf(savefile, "시키긍지최후의방어=%d\n", 시키.긍지최후의방어);
	fprintf(savefile, "시키축복최후의방어=%d\n", 시키.축복최후의방어);
	fprintf(savefile, "시키집중사격=%d\n", 시키.집중사격);
	fprintf(savefile, "시키무자비한연사=%d\n", 시키.무자비한연사);
	fprintf(savefile, "시키환상적인공격=%d\n", 시키.환상적인공격);
	fprintf(savefile, "시키제우스의분노=%d\n", 시키.제우스의분노);
	fprintf(savefile, "시키오디세우스의성검=%d\n", 시키.오디세우스의성검);
	fprintf(savefile, "시키대마법신비로운메테오=%d\n", 시키.대마법신비로운메테오);
	fprintf(savefile, "시키마법펀치=%d\n", 시키.마법펀치);
	fprintf(savefile, "시키곰발바닥=%d\n", 시키.곰발바닥);
	fprintf(savefile, "시키토르의분노=%d\n", 시키.토르의분노);
	fprintf(savefile, "시키마법의점멸=%d\n", 시키.마법의점멸);
	fprintf(savefile, "시키신의가호=%d\n", 시키.신의가호);
	//유카
	fprintf(savefile, "유카플레이횟수=%d\n", 유카.게임횟수);
	fprintf(savefile, "유카승리=%d\n", 유카.승수);
	fprintf(savefile, "유카패배=%d\n", 유카.패수);
	fprintf(savefile, "유카승률=%2lf\n", 유카.승률);
	fprintf(savefile, "유카레이팅=%d\n", 유카.레이팅);
	fprintf(savefile, "유카연승=%d\n", 유카.연승);
	fprintf(savefile, "유카연패=%d\n", 유카.연패);
	fprintf(savefile, "유카킬=%d\n", 유카.킬);
	fprintf(savefile, "유카데스=%d\n", 유카.데스);
	fprintf(savefile, "유카어시스트=%d\n", 유카.어시스트);
	fprintf(savefile, "유카백조의부름=%d\n", 유카.백조의부름);
	fprintf(savefile, "유카회복의삼지창=%d\n", 유카.회복의삼지창);
	fprintf(savefile, "유카밤의사냥꾼=%d\n", 유카.밤의사냥꾼);
	fprintf(savefile, "유카비겁한고블린=%d\n", 유카.비겁한고블린);
	fprintf(savefile, "유카깨달음=%d\n", 유카.깨달음);
	fprintf(savefile, "유카흑마법=%d\n", 유카.흑마법);
	fprintf(savefile, "유카음과양=%d\n", 유카.음과양의조화);
	fprintf(savefile, "유카아레스=%d\n", 유카.아레스의투구);
	fprintf(savefile, "유카라식=%d\n", 유카.라식);
	fprintf(savefile, "유카장화=%d\n", 유카.축복의장화);
	fprintf(savefile, "유카반지=%d\n", 유카.신비로운반지);
	fprintf(savefile, "유카치명적인탄환=%d\n", 유카.치명적인탄환);
	fprintf(savefile, "유카깨물기=%d\n", 유카.깨물기);
	fprintf(savefile, "유카이동의즐거움=%d\n", 유카.이동의즐거움);
	fprintf(savefile, "유카판다렌=%d\n", 유카.판다렌의화염작렬);
	fprintf(savefile, "유카마법부스터=%d\n", 유카.마법부스터);
	fprintf(savefile, "유카단단한벽=%d\n", 유카.단단한벽);
	fprintf(savefile, "유카마법의망토=%d\n", 유카.마법의망토);
	fprintf(savefile, "유카고대신비마법서=%d\n", 유카.고대신비의마법서);
	fprintf(savefile, "유카산뜻한기분=%d\n", 유카.산뜻한기분);
	fprintf(savefile, "유카갈망의검=%d\n", 유카.갈망의검);
	fprintf(savefile, "유카지배전투의기본=%d\n", 유카.지배전투의기본);
	fprintf(savefile, "유카지배푸른영기=%d\n", 유카.지배푸른영기);
	fprintf(savefile, "유카마법전투의기본=%d\n", 유카.마법전투의기본);
	fprintf(savefile, "유카마법푸른영기=%d\n", 유카.마법푸른영기);
	fprintf(savefile, "유카강인한체력=%d\n", 유카.강인한체력);
	fprintf(savefile, "유카활력증진=%d\n", 유카.활력증진);
	fprintf(savefile, "유카저돌적인공격방식=%d\n", 유카.저돌적인공격방식);
	fprintf(savefile, "유카신비한공격방식=%d\n", 유카.신비한공격방식);
	fprintf(savefile, "유카투쟁갑옷무력화=%d\n", 유카.투쟁갑옷무력화);
	fprintf(savefile, "유카투쟁저항무력화=%d\n", 유카.투쟁저항무력화);
	fprintf(savefile, "유카지배갑옷무력화=%d\n", 유카.지배갑옷무력화);
	fprintf(savefile, "유카지배저항무력화=%d\n", 유카.지배저항무력화);
	fprintf(savefile, "유카마법갑옷무력화=%d\n", 유카.마법갑옷무력화);
	fprintf(savefile, "유카마법저항무력화=%d\n", 유카.마법저항무력화);
	fprintf(savefile, "유카신비의방패=%d\n", 유카.신비의방패);
	fprintf(savefile, "유카저항의방패=%d\n", 유카.저항의방패);
	fprintf(savefile, "유카경험치사기꾼=%d\n", 유카.경험치사기꾼);
	fprintf(savefile, "유카골드도둑=%d\n", 유카.골드도둑);
	fprintf(savefile, "유카투쟁타격용분=%d\n", 유카.투쟁타격용분);
	fprintf(savefile, "유카투쟁마법용분=%d\n", 유카.투쟁마법용분);
	fprintf(savefile, "유카지배물리용분=%d\n", 유카.지배물리용분);
	fprintf(savefile, "유카지배마법용분=%d\n", 유카.지배마법용분);
	fprintf(savefile, "유카마법물리용분=%d\n", 유카.마법물리용분);
	fprintf(savefile, "유카마법마법용분=%d\n", 유카.마법마법용분);
	fprintf(savefile, "유카긍지최후의방어=%d\n", 유카.긍지최후의방어);
	fprintf(savefile, "유카축복최후의방어=%d\n", 유카.축복최후의방어);
	fprintf(savefile, "유카집중사격=%d\n", 유카.집중사격);
	fprintf(savefile, "유카무자비한연사=%d\n", 유카.무자비한연사);
	fprintf(savefile, "유카환상적인공격=%d\n", 유카.환상적인공격);
	fprintf(savefile, "유카제우스의분노=%d\n", 유카.제우스의분노);
	fprintf(savefile, "유카오디세우스의성검=%d\n", 유카.오디세우스의성검);
	fprintf(savefile, "유카대마법신비로운메테오=%d\n", 유카.대마법신비로운메테오);
	fprintf(savefile, "유카마법펀치=%d\n", 유카.마법펀치);
	fprintf(savefile, "유카곰발바닥=%d\n", 유카.곰발바닥);
	fprintf(savefile, "유카토르의분노=%d\n", 유카.토르의분노);
	fprintf(savefile, "유카마법의점멸=%d\n", 유카.마법의점멸);
	fprintf(savefile, "유카신의가호=%d\n", 유카.신의가호);
	//흑화요우무
	fprintf(savefile, "흑화요우무플레이횟수=%d\n", 흑화요우무.게임횟수);
	fprintf(savefile, "흑화요우무승리=%d\n", 흑화요우무.승수);
	fprintf(savefile, "흑화요우무패배=%d\n", 흑화요우무.패수);
	fprintf(savefile, "흑화요우무승률=%2lf\n", 흑화요우무.승률);
	fprintf(savefile, "흑화요우무레이팅=%d\n", 흑화요우무.레이팅);
	fprintf(savefile, "흑화요우무연승=%d\n", 흑화요우무.연승);
	fprintf(savefile, "흑화요우무연패=%d\n", 흑화요우무.연패);
	fprintf(savefile, "흑화요우무킬=%d\n", 흑화요우무.킬);
	fprintf(savefile, "흑화요우무데스=%d\n", 흑화요우무.데스);
	fprintf(savefile, "흑화요우무어시스트=%d\n", 흑화요우무.어시스트);
	fprintf(savefile, "흑화요우무백조의부름=%d\n", 흑화요우무.백조의부름);
	fprintf(savefile, "흑화요우무회복의삼지창=%d\n", 흑화요우무.회복의삼지창);
	fprintf(savefile, "흑화요우무밤의사냥꾼=%d\n", 흑화요우무.밤의사냥꾼);
	fprintf(savefile, "흑화요우무비겁한고블린=%d\n", 흑화요우무.비겁한고블린);
	fprintf(savefile, "흑화요우무깨달음=%d\n", 흑화요우무.깨달음);
	fprintf(savefile, "흑화요우무흑마법=%d\n", 흑화요우무.흑마법);
	fprintf(savefile, "흑화요우무음과양=%d\n", 흑화요우무.음과양의조화);
	fprintf(savefile, "흑화요우무아레스=%d\n", 흑화요우무.아레스의투구);
	fprintf(savefile, "흑화요우무라식=%d\n", 흑화요우무.라식);
	fprintf(savefile, "흑화요우무장화=%d\n", 흑화요우무.축복의장화);
	fprintf(savefile, "흑화요우무반지=%d\n", 흑화요우무.신비로운반지);
	fprintf(savefile, "흑화요우무치명적인탄환=%d\n", 흑화요우무.치명적인탄환);
	fprintf(savefile, "흑화요우무깨물기=%d\n", 흑화요우무.깨물기);
	fprintf(savefile, "흑화요우무이동의즐거움=%d\n", 흑화요우무.이동의즐거움);
	fprintf(savefile, "흑화요우무판다렌=%d\n", 흑화요우무.판다렌의화염작렬);
	fprintf(savefile, "흑화요우무마법부스터=%d\n", 흑화요우무.마법부스터);
	fprintf(savefile, "흑화요우무단단한벽=%d\n", 흑화요우무.단단한벽);
	fprintf(savefile, "흑화요우무마법의망토=%d\n", 흑화요우무.마법의망토);
	fprintf(savefile, "흑화요우무고대신비마법서=%d\n", 흑화요우무.고대신비의마법서);
	fprintf(savefile, "흑화요우무산뜻한기분=%d\n", 흑화요우무.산뜻한기분);
	fprintf(savefile, "흑화요우무갈망의검=%d\n", 흑화요우무.갈망의검);
	fprintf(savefile, "흑화요우무지배전투의기본=%d\n", 흑화요우무.지배전투의기본);
	fprintf(savefile, "흑화요우무지배푸른영기=%d\n", 흑화요우무.지배푸른영기);
	fprintf(savefile, "흑화요우무마법전투의기본=%d\n", 흑화요우무.마법전투의기본);
	fprintf(savefile, "흑화요우무마법푸른영기=%d\n", 흑화요우무.마법푸른영기);
	fprintf(savefile, "흑화요우무강인한체력=%d\n", 흑화요우무.강인한체력);
	fprintf(savefile, "흑화요우무활력증진=%d\n", 흑화요우무.활력증진);
	fprintf(savefile, "흑화요우무저돌적인공격방식=%d\n", 흑화요우무.저돌적인공격방식);
	fprintf(savefile, "흑화요우무신비한공격방식=%d\n", 흑화요우무.신비한공격방식);
	fprintf(savefile, "흑화요우무투쟁갑옷무력화=%d\n", 흑화요우무.투쟁갑옷무력화);
	fprintf(savefile, "흑화요우무투쟁저항무력화=%d\n", 흑화요우무.투쟁저항무력화);
	fprintf(savefile, "흑화요우무지배갑옷무력화=%d\n", 흑화요우무.지배갑옷무력화);
	fprintf(savefile, "흑화요우무지배저항무력화=%d\n", 흑화요우무.지배저항무력화);
	fprintf(savefile, "흑화요우무마법갑옷무력화=%d\n", 흑화요우무.마법갑옷무력화);
	fprintf(savefile, "흑화요우무마법저항무력화=%d\n", 흑화요우무.마법저항무력화);
	fprintf(savefile, "흑화요우무신비의방패=%d\n", 흑화요우무.신비의방패);
	fprintf(savefile, "흑화요우무저항의방패=%d\n", 흑화요우무.저항의방패);
	fprintf(savefile, "흑화요우무경험치사기꾼=%d\n", 흑화요우무.경험치사기꾼);
	fprintf(savefile, "흑화요우무골드도둑=%d\n", 흑화요우무.골드도둑);
	fprintf(savefile, "흑화요우무투쟁타격용분=%d\n", 흑화요우무.투쟁타격용분);
	fprintf(savefile, "흑화요우무투쟁마법용분=%d\n", 흑화요우무.투쟁마법용분);
	fprintf(savefile, "흑화요우무지배물리용분=%d\n", 흑화요우무.지배물리용분);
	fprintf(savefile, "흑화요우무지배마법용분=%d\n", 흑화요우무.지배마법용분);
	fprintf(savefile, "흑화요우무마법물리용분=%d\n", 흑화요우무.마법물리용분);
	fprintf(savefile, "흑화요우무마법마법용분=%d\n", 흑화요우무.마법마법용분);
	fprintf(savefile, "흑화요우무긍지최후의방어=%d\n", 흑화요우무.긍지최후의방어);
	fprintf(savefile, "흑화요우무축복최후의방어=%d\n", 흑화요우무.축복최후의방어);
	fprintf(savefile, "흑화요우무집중사격=%d\n", 흑화요우무.집중사격);
	fprintf(savefile, "흑화요우무무자비한연사=%d\n", 흑화요우무.무자비한연사);
	fprintf(savefile, "흑화요우무환상적인공격=%d\n", 흑화요우무.환상적인공격);
	fprintf(savefile, "흑화요우무제우스의분노=%d\n", 흑화요우무.제우스의분노);
	fprintf(savefile, "흑화요우무오디세우스의성검=%d\n", 흑화요우무.오디세우스의성검);
	fprintf(savefile, "흑화요우무대마법신비로운메테오=%d\n", 흑화요우무.대마법신비로운메테오);
	fprintf(savefile, "흑화요우무마법펀치=%d\n", 흑화요우무.마법펀치);
	fprintf(savefile, "흑화요우무곰발바닥=%d\n", 흑화요우무.곰발바닥);
	fprintf(savefile, "흑화요우무토르의분노=%d\n", 흑화요우무.토르의분노);
	fprintf(savefile, "흑화요우무마법의점멸=%d\n", 흑화요우무.마법의점멸);
	fprintf(savefile, "흑화요우무신의가호=%d\n", 흑화요우무.신의가호);
	//어플
	fprintf(savefile, "어드밴트플랑플레이횟수=%d\n", 어드밴트플랑.게임횟수);
	fprintf(savefile, "어드밴트플랑승리=%d\n", 어드밴트플랑.승수);
	fprintf(savefile, "어드밴트플랑패배=%d\n", 어드밴트플랑.패수);
	fprintf(savefile, "어드밴트플랑승률=%2lf\n", 어드밴트플랑.승률);
	fprintf(savefile, "어드밴트플랑레이팅=%d\n", 어드밴트플랑.레이팅);
	fprintf(savefile, "어드밴트플랑연승=%d\n", 어드밴트플랑.연승);
	fprintf(savefile, "어드밴트플랑연패=%d\n", 어드밴트플랑.연패);
	fprintf(savefile, "어드밴트플랑킬=%d\n", 어드밴트플랑.킬);
	fprintf(savefile, "어드밴트플랑데스=%d\n", 어드밴트플랑.데스);
	fprintf(savefile, "어드밴트플랑어시스트=%d\n", 어드밴트플랑.어시스트);
	fprintf(savefile, "어드밴트플랑백조의부름=%d\n", 어드밴트플랑.백조의부름);
	fprintf(savefile, "어드밴트플랑회복의삼지창=%d\n", 어드밴트플랑.회복의삼지창);
	fprintf(savefile, "어드밴트플랑밤의사냥꾼=%d\n", 어드밴트플랑.밤의사냥꾼);
	fprintf(savefile, "어드밴트플랑비겁한고블린=%d\n", 어드밴트플랑.비겁한고블린);
	fprintf(savefile, "어드밴트플랑깨달음=%d\n", 어드밴트플랑.깨달음);
	fprintf(savefile, "어드밴트플랑흑마법=%d\n", 어드밴트플랑.흑마법);
	fprintf(savefile, "어드밴트플랑음과양=%d\n", 어드밴트플랑.음과양의조화);
	fprintf(savefile, "어드밴트플랑아레스=%d\n", 어드밴트플랑.아레스의투구);
	fprintf(savefile, "어드밴트플랑라식=%d\n", 어드밴트플랑.라식);
	fprintf(savefile, "어드밴트플랑장화=%d\n", 어드밴트플랑.축복의장화);
	fprintf(savefile, "어드밴트플랑반지=%d\n", 어드밴트플랑.신비로운반지);
	fprintf(savefile, "어드밴트플랑치명적인탄환=%d\n", 어드밴트플랑.치명적인탄환);
	fprintf(savefile, "어드밴트플랑깨물기=%d\n", 어드밴트플랑.깨물기);
	fprintf(savefile, "어드밴트플랑이동의즐거움=%d\n", 어드밴트플랑.이동의즐거움);
	fprintf(savefile, "어드밴트플랑판다렌=%d\n", 어드밴트플랑.판다렌의화염작렬);
	fprintf(savefile, "어드밴트플랑마법부스터=%d\n", 어드밴트플랑.마법부스터);
	fprintf(savefile, "어드밴트플랑단단한벽=%d\n", 어드밴트플랑.단단한벽);
	fprintf(savefile, "어드밴트플랑마법의망토=%d\n", 어드밴트플랑.마법의망토);
	fprintf(savefile, "어드밴트플랑고대신비마법서=%d\n", 어드밴트플랑.고대신비의마법서);
	fprintf(savefile, "어드밴트플랑산뜻한기분=%d\n", 어드밴트플랑.산뜻한기분);
	fprintf(savefile, "어드밴트플랑갈망의검=%d\n", 어드밴트플랑.갈망의검);
	fprintf(savefile, "어드밴트플랑지배전투의기본=%d\n", 어드밴트플랑.지배전투의기본);
	fprintf(savefile, "어드밴트플랑지배푸른영기=%d\n", 어드밴트플랑.지배푸른영기);
	fprintf(savefile, "어드밴트플랑마법전투의기본=%d\n", 어드밴트플랑.마법전투의기본);
	fprintf(savefile, "어드밴트플랑마법푸른영기=%d\n", 어드밴트플랑.마법푸른영기);
	fprintf(savefile, "어드밴트플랑강인한체력=%d\n", 어드밴트플랑.강인한체력);
	fprintf(savefile, "어드밴트플랑활력증진=%d\n", 어드밴트플랑.활력증진);
	fprintf(savefile, "어드밴트플랑저돌적인공격방식=%d\n", 어드밴트플랑.저돌적인공격방식);
	fprintf(savefile, "어드밴트플랑신비한공격방식=%d\n", 어드밴트플랑.신비한공격방식);
	fprintf(savefile, "어드밴트플랑투쟁갑옷무력화=%d\n", 어드밴트플랑.투쟁갑옷무력화);
	fprintf(savefile, "어드밴트플랑투쟁저항무력화=%d\n", 어드밴트플랑.투쟁저항무력화);
	fprintf(savefile, "어드밴트플랑지배갑옷무력화=%d\n", 어드밴트플랑.지배갑옷무력화);
	fprintf(savefile, "어드밴트플랑지배저항무력화=%d\n", 어드밴트플랑.지배저항무력화);
	fprintf(savefile, "어드밴트플랑마법갑옷무력화=%d\n", 어드밴트플랑.마법갑옷무력화);
	fprintf(savefile, "어드밴트플랑마법저항무력화=%d\n", 어드밴트플랑.마법저항무력화);
	fprintf(savefile, "어드밴트플랑신비의방패=%d\n", 어드밴트플랑.신비의방패);
	fprintf(savefile, "어드밴트플랑저항의방패=%d\n", 어드밴트플랑.저항의방패);
	fprintf(savefile, "어드밴트플랑경험치사기꾼=%d\n", 어드밴트플랑.경험치사기꾼);
	fprintf(savefile, "어드밴트플랑골드도둑=%d\n", 어드밴트플랑.골드도둑);
	fprintf(savefile, "어드밴트플랑투쟁타격용분=%d\n", 어드밴트플랑.투쟁타격용분);
	fprintf(savefile, "어드밴트플랑투쟁마법용분=%d\n", 어드밴트플랑.투쟁마법용분);
	fprintf(savefile, "어드밴트플랑지배물리용분=%d\n", 어드밴트플랑.지배물리용분);
	fprintf(savefile, "어드밴트플랑지배마법용분=%d\n", 어드밴트플랑.지배마법용분);
	fprintf(savefile, "어드밴트플랑마법물리용분=%d\n", 어드밴트플랑.마법물리용분);
	fprintf(savefile, "어드밴트플랑마법마법용분=%d\n", 어드밴트플랑.마법마법용분);
	fprintf(savefile, "어드밴트플랑긍지최후의방어=%d\n", 어드밴트플랑.긍지최후의방어);
	fprintf(savefile, "어드밴트플랑축복최후의방어=%d\n", 어드밴트플랑.축복최후의방어);
	fprintf(savefile, "어드밴트플랑집중사격=%d\n", 어드밴트플랑.집중사격);
	fprintf(savefile, "어드밴트플랑무자비한연사=%d\n", 어드밴트플랑.무자비한연사);
	fprintf(savefile, "어드밴트플랑환상적인공격=%d\n", 어드밴트플랑.환상적인공격);
	fprintf(savefile, "어드밴트플랑제우스의분노=%d\n", 어드밴트플랑.제우스의분노);
	fprintf(savefile, "어드밴트플랑오디세우스의성검=%d\n", 어드밴트플랑.오디세우스의성검);
	fprintf(savefile, "어드밴트플랑대마법신비로운메테오=%d\n", 어드밴트플랑.대마법신비로운메테오);
	fprintf(savefile, "어드밴트플랑마법펀치=%d\n", 어드밴트플랑.마법펀치);
	fprintf(savefile, "어드밴트플랑곰발바닥=%d\n", 어드밴트플랑.곰발바닥);
	fprintf(savefile, "어드밴트플랑토르의분노=%d\n", 어드밴트플랑.토르의분노);
	fprintf(savefile, "어드밴트플랑마법의점멸=%d\n", 어드밴트플랑.마법의점멸);
	fprintf(savefile, "어드밴트플랑신의가호=%d\n", 어드밴트플랑.신의가호);
	//헤메
	fprintf(savefile, "헤이메이린플레이횟수=%d\n", 헤이메이린.게임횟수);
	fprintf(savefile, "헤이메이린승리=%d\n", 헤이메이린.승수);
	fprintf(savefile, "헤이메이린패배=%d\n", 헤이메이린.패수);
	fprintf(savefile, "헤이메이린승률=%2lf\n", 헤이메이린.승률);
	fprintf(savefile, "헤이메이린레이팅=%d\n", 헤이메이린.레이팅);
	fprintf(savefile, "헤이메이린연승=%d\n", 헤이메이린.연승);
	fprintf(savefile, "헤이메이린연패=%d\n", 헤이메이린.연패);
	fprintf(savefile, "헤이메이린킬=%d\n", 헤이메이린.킬);
	fprintf(savefile, "헤이메이린데스=%d\n", 헤이메이린.데스);
	fprintf(savefile, "헤이메이린어시스트=%d\n", 헤이메이린.어시스트);
	fprintf(savefile, "헤이메이린백조의부름=%d\n", 헤이메이린.백조의부름);
	fprintf(savefile, "헤이메이린회복의삼지창=%d\n", 헤이메이린.회복의삼지창);
	fprintf(savefile, "헤이메이린밤의사냥꾼=%d\n", 헤이메이린.밤의사냥꾼);
	fprintf(savefile, "헤이메이린비겁한고블린=%d\n", 헤이메이린.비겁한고블린);
	fprintf(savefile, "헤이메이린깨달음=%d\n", 헤이메이린.깨달음);
	fprintf(savefile, "헤이메이린흑마법=%d\n", 헤이메이린.흑마법);
	fprintf(savefile, "헤이메이린음과양=%d\n", 헤이메이린.음과양의조화);
	fprintf(savefile, "헤이메이린아레스=%d\n", 헤이메이린.아레스의투구);
	fprintf(savefile, "헤이메이린라식=%d\n", 헤이메이린.라식);
	fprintf(savefile, "헤이메이린장화=%d\n", 헤이메이린.축복의장화);
	fprintf(savefile, "헤이메이린반지=%d\n", 헤이메이린.신비로운반지);
	fprintf(savefile, "헤이메이린치명적인탄환=%d\n", 헤이메이린.치명적인탄환);
	fprintf(savefile, "헤이메이린깨물기=%d\n", 헤이메이린.깨물기);
	fprintf(savefile, "헤이메이린이동의즐거움=%d\n", 헤이메이린.이동의즐거움);
	fprintf(savefile, "헤이메이린판다렌=%d\n", 헤이메이린.판다렌의화염작렬);
	fprintf(savefile, "헤이메이린마법부스터=%d\n", 헤이메이린.마법부스터);
	fprintf(savefile, "헤이메이린단단한벽=%d\n", 헤이메이린.단단한벽);
	fprintf(savefile, "헤이메이린마법의망토=%d\n", 헤이메이린.마법의망토);
	fprintf(savefile, "헤이메이린고대신비마법서=%d\n", 헤이메이린.고대신비의마법서);
	fprintf(savefile, "헤이메이린산뜻한기분=%d\n", 헤이메이린.산뜻한기분);
	fprintf(savefile, "헤이메이린갈망의검=%d\n", 헤이메이린.갈망의검);
	fprintf(savefile, "헤이메이린지배전투의기본=%d\n", 헤이메이린.지배전투의기본);
	fprintf(savefile, "헤이메이린지배푸른영기=%d\n", 헤이메이린.지배푸른영기);
	fprintf(savefile, "헤이메이린마법전투의기본=%d\n", 헤이메이린.마법전투의기본);
	fprintf(savefile, "헤이메이린마법푸른영기=%d\n", 헤이메이린.마법푸른영기);
	fprintf(savefile, "헤이메이린강인한체력=%d\n", 헤이메이린.강인한체력);
	fprintf(savefile, "헤이메이린활력증진=%d\n", 헤이메이린.활력증진);
	fprintf(savefile, "헤이메이린저돌적인공격방식=%d\n", 헤이메이린.저돌적인공격방식);
	fprintf(savefile, "헤이메이린신비한공격방식=%d\n", 헤이메이린.신비한공격방식);
	fprintf(savefile, "헤이메이린투쟁갑옷무력화=%d\n", 헤이메이린.투쟁갑옷무력화);
	fprintf(savefile, "헤이메이린투쟁저항무력화=%d\n", 헤이메이린.투쟁저항무력화);
	fprintf(savefile, "헤이메이린지배갑옷무력화=%d\n", 헤이메이린.지배갑옷무력화);
	fprintf(savefile, "헤이메이린지배저항무력화=%d\n", 헤이메이린.지배저항무력화);
	fprintf(savefile, "헤이메이린마법갑옷무력화=%d\n", 헤이메이린.마법갑옷무력화);
	fprintf(savefile, "헤이메이린마법저항무력화=%d\n", 헤이메이린.마법저항무력화);
	fprintf(savefile, "헤이메이린신비의방패=%d\n", 헤이메이린.신비의방패);
	fprintf(savefile, "헤이메이린저항의방패=%d\n", 헤이메이린.저항의방패);
	fprintf(savefile, "헤이메이린경험치사기꾼=%d\n", 헤이메이린.경험치사기꾼);
	fprintf(savefile, "헤이메이린골드도둑=%d\n", 헤이메이린.골드도둑);
	fprintf(savefile, "헤이메이린투쟁타격용분=%d\n", 헤이메이린.투쟁타격용분);
	fprintf(savefile, "헤이메이린투쟁마법용분=%d\n", 헤이메이린.투쟁마법용분);
	fprintf(savefile, "헤이메이린지배물리용분=%d\n", 헤이메이린.지배물리용분);
	fprintf(savefile, "헤이메이린지배마법용분=%d\n", 헤이메이린.지배마법용분);
	fprintf(savefile, "헤이메이린마법물리용분=%d\n", 헤이메이린.마법물리용분);
	fprintf(savefile, "헤이메이린마법마법용분=%d\n", 헤이메이린.마법마법용분);
	fprintf(savefile, "헤이메이린긍지최후의방어=%d\n", 헤이메이린.긍지최후의방어);
	fprintf(savefile, "헤이메이린축복최후의방어=%d\n", 헤이메이린.축복최후의방어);
	fprintf(savefile, "헤이메이린집중사격=%d\n", 헤이메이린.집중사격);
	fprintf(savefile, "헤이메이린무자비한연사=%d\n", 헤이메이린.무자비한연사);
	fprintf(savefile, "헤이메이린환상적인공격=%d\n", 헤이메이린.환상적인공격);
	fprintf(savefile, "헤이메이린제우스의분노=%d\n", 헤이메이린.제우스의분노);
	fprintf(savefile, "헤이메이린오디세우스의성검=%d\n", 헤이메이린.오디세우스의성검);
	fprintf(savefile, "헤이메이린대마법신비로운메테오=%d\n", 헤이메이린.대마법신비로운메테오);
	fprintf(savefile, "헤이메이린마법펀치=%d\n", 헤이메이린.마법펀치);
	fprintf(savefile, "헤이메이린곰발바닥=%d\n", 헤이메이린.곰발바닥);
	fprintf(savefile, "헤이메이린토르의분노=%d\n", 헤이메이린.토르의분노);
	fprintf(savefile, "헤이메이린마법의점멸=%d\n", 헤이메이린.마법의점멸);
	fprintf(savefile, "헤이메이린신의가호=%d\n", 헤이메이린.신의가호);
	//홍메
	fprintf(savefile, "홍메이린플레이횟수=%d\n", 홍메이린.게임횟수);
	fprintf(savefile, "홍메이린승리=%d\n", 홍메이린.승수);
	fprintf(savefile, "홍메이린패배=%d\n", 홍메이린.패수);
	fprintf(savefile, "홍메이린승률=%2lf\n", 홍메이린.승률);
	fprintf(savefile, "홍메이린레이팅=%d\n", 홍메이린.레이팅);
	fprintf(savefile, "홍메이린연승=%d\n", 홍메이린.연승);
	fprintf(savefile, "홍메이린연패=%d\n", 홍메이린.연패);
	fprintf(savefile, "홍메이린킬=%d\n", 홍메이린.킬);
	fprintf(savefile, "홍메이린데스=%d\n", 홍메이린.데스);
	fprintf(savefile, "홍메이린어시스트=%d\n", 홍메이린.어시스트);
	fprintf(savefile, "홍메이린백조의부름=%d\n", 홍메이린.백조의부름);
	fprintf(savefile, "홍메이린회복의삼지창=%d\n", 홍메이린.회복의삼지창);
	fprintf(savefile, "홍메이린밤의사냥꾼=%d\n", 홍메이린.밤의사냥꾼);
	fprintf(savefile, "홍메이린비겁한고블린=%d\n", 홍메이린.비겁한고블린);
	fprintf(savefile, "홍메이린깨달음=%d\n", 홍메이린.깨달음);
	fprintf(savefile, "홍메이린흑마법=%d\n", 홍메이린.흑마법);
	fprintf(savefile, "홍메이린음과양=%d\n", 홍메이린.음과양의조화);
	fprintf(savefile, "홍메이린아레스=%d\n", 홍메이린.아레스의투구);
	fprintf(savefile, "홍메이린라식=%d\n", 홍메이린.라식);
	fprintf(savefile, "홍메이린장화=%d\n", 홍메이린.축복의장화);
	fprintf(savefile, "홍메이린반지=%d\n", 홍메이린.신비로운반지);
	fprintf(savefile, "홍메이린치명적인탄환=%d\n", 홍메이린.치명적인탄환);
	fprintf(savefile, "홍메이린깨물기=%d\n", 홍메이린.깨물기);
	fprintf(savefile, "홍메이린이동의즐거움=%d\n", 홍메이린.이동의즐거움);
	fprintf(savefile, "홍메이린판다렌=%d\n", 홍메이린.판다렌의화염작렬);
	fprintf(savefile, "홍메이린마법부스터=%d\n", 홍메이린.마법부스터);
	fprintf(savefile, "홍메이린단단한벽=%d\n", 홍메이린.단단한벽);
	fprintf(savefile, "홍메이린마법의망토=%d\n", 홍메이린.마법의망토);
	fprintf(savefile, "홍메이린고대신비마법서=%d\n", 홍메이린.고대신비의마법서);
	fprintf(savefile, "홍메이린산뜻한기분=%d\n", 홍메이린.산뜻한기분);
	fprintf(savefile, "홍메이린갈망의검=%d\n", 홍메이린.갈망의검);
	fprintf(savefile, "홍메이린지배전투의기본=%d\n", 홍메이린.지배전투의기본);
	fprintf(savefile, "홍메이린지배푸른영기=%d\n", 홍메이린.지배푸른영기);
	fprintf(savefile, "홍메이린마법전투의기본=%d\n", 홍메이린.마법전투의기본);
	fprintf(savefile, "홍메이린마법푸른영기=%d\n", 홍메이린.마법푸른영기);
	fprintf(savefile, "홍메이린강인한체력=%d\n", 홍메이린.강인한체력);
	fprintf(savefile, "홍메이린활력증진=%d\n", 홍메이린.활력증진);
	fprintf(savefile, "홍메이린저돌적인공격방식=%d\n", 홍메이린.저돌적인공격방식);
	fprintf(savefile, "홍메이린신비한공격방식=%d\n", 홍메이린.신비한공격방식);
	fprintf(savefile, "홍메이린투쟁갑옷무력화=%d\n", 홍메이린.투쟁갑옷무력화);
	fprintf(savefile, "홍메이린투쟁저항무력화=%d\n", 홍메이린.투쟁저항무력화);
	fprintf(savefile, "홍메이린지배갑옷무력화=%d\n", 홍메이린.지배갑옷무력화);
	fprintf(savefile, "홍메이린지배저항무력화=%d\n", 홍메이린.지배저항무력화);
	fprintf(savefile, "홍메이린마법갑옷무력화=%d\n", 홍메이린.마법갑옷무력화);
	fprintf(savefile, "홍메이린마법저항무력화=%d\n", 홍메이린.마법저항무력화);
	fprintf(savefile, "홍메이린신비의방패=%d\n", 홍메이린.신비의방패);
	fprintf(savefile, "홍메이린저항의방패=%d\n", 홍메이린.저항의방패);
	fprintf(savefile, "홍메이린경험치사기꾼=%d\n", 홍메이린.경험치사기꾼);
	fprintf(savefile, "홍메이린골드도둑=%d\n", 홍메이린.골드도둑);
	fprintf(savefile, "홍메이린투쟁타격용분=%d\n", 홍메이린.투쟁타격용분);
	fprintf(savefile, "홍메이린투쟁마법용분=%d\n", 홍메이린.투쟁마법용분);
	fprintf(savefile, "홍메이린지배물리용분=%d\n", 홍메이린.지배물리용분);
	fprintf(savefile, "홍메이린지배마법용분=%d\n", 홍메이린.지배마법용분);
	fprintf(savefile, "홍메이린마법물리용분=%d\n", 홍메이린.마법물리용분);
	fprintf(savefile, "홍메이린마법마법용분=%d\n", 홍메이린.마법마법용분);
	fprintf(savefile, "홍메이린긍지최후의방어=%d\n", 홍메이린.긍지최후의방어);
	fprintf(savefile, "홍메이린축복최후의방어=%d\n", 홍메이린.축복최후의방어);
	fprintf(savefile, "홍메이린집중사격=%d\n", 홍메이린.집중사격);
	fprintf(savefile, "홍메이린무자비한연사=%d\n", 홍메이린.무자비한연사);
	fprintf(savefile, "홍메이린환상적인공격=%d\n", 홍메이린.환상적인공격);
	fprintf(savefile, "홍메이린제우스의분노=%d\n", 홍메이린.제우스의분노);
	fprintf(savefile, "홍메이린오디세우스의성검=%d\n", 홍메이린.오디세우스의성검);
	fprintf(savefile, "홍메이린대마법신비로운메테오=%d\n", 홍메이린.대마법신비로운메테오);
	fprintf(savefile, "홍메이린마법펀치=%d\n", 홍메이린.마법펀치);
	fprintf(savefile, "홍메이린곰발바닥=%d\n", 홍메이린.곰발바닥);
	fprintf(savefile, "홍메이린토르의분노=%d\n", 홍메이린.토르의분노);
	fprintf(savefile, "홍메이린마법의점멸=%d\n", 홍메이린.마법의점멸);
	fprintf(savefile, "홍메이린신의가호=%d\n", 홍메이린.신의가호);
	//흑구야
	fprintf(savefile, "흑화카구야플레이횟수=%d\n", 흑화카구야.게임횟수);
	fprintf(savefile, "흑화카구야승리=%d\n", 흑화카구야.승수);
	fprintf(savefile, "흑화카구야패배=%d\n", 흑화카구야.패수);
	fprintf(savefile, "흑화카구야승률=%2lf\n", 흑화카구야.승률);
	fprintf(savefile, "흑화카구야레이팅=%d\n", 흑화카구야.레이팅);
	fprintf(savefile, "흑화카구야연승=%d\n", 흑화카구야.연승);
	fprintf(savefile, "흑화카구야연패=%d\n", 흑화카구야.연패);
	fprintf(savefile, "흑화카구야킬=%d\n", 흑화카구야.킬);
	fprintf(savefile, "흑화카구야데스=%d\n", 흑화카구야.데스);
	fprintf(savefile, "흑화카구야어시스트=%d\n", 흑화카구야.어시스트);
	fprintf(savefile, "흑화카구야백조의부름=%d\n", 흑화카구야.백조의부름);
	fprintf(savefile, "흑화카구야회복의삼지창=%d\n", 흑화카구야.회복의삼지창);
	fprintf(savefile, "흑화카구야밤의사냥꾼=%d\n", 흑화카구야.밤의사냥꾼);
	fprintf(savefile, "흑화카구야비겁한고블린=%d\n", 흑화카구야.비겁한고블린);
	fprintf(savefile, "흑화카구야깨달음=%d\n", 흑화카구야.깨달음);
	fprintf(savefile, "흑화카구야흑마법=%d\n", 흑화카구야.흑마법);
	fprintf(savefile, "흑화카구야음과양=%d\n", 흑화카구야.음과양의조화);
	fprintf(savefile, "흑화카구야아레스=%d\n", 흑화카구야.아레스의투구);
	fprintf(savefile, "흑화카구야라식=%d\n", 흑화카구야.라식);
	fprintf(savefile, "흑화카구야장화=%d\n", 흑화카구야.축복의장화);
	fprintf(savefile, "흑화카구야반지=%d\n", 흑화카구야.신비로운반지);
	fprintf(savefile, "흑화카구야치명적인탄환=%d\n", 흑화카구야.치명적인탄환);
	fprintf(savefile, "흑화카구야깨물기=%d\n", 흑화카구야.깨물기);
	fprintf(savefile, "흑화카구야이동의즐거움=%d\n", 흑화카구야.이동의즐거움);
	fprintf(savefile, "흑화카구야판다렌=%d\n", 흑화카구야.판다렌의화염작렬);
	fprintf(savefile, "흑화카구야마법부스터=%d\n", 흑화카구야.마법부스터);
	fprintf(savefile, "흑화카구야단단한벽=%d\n", 흑화카구야.단단한벽);
	fprintf(savefile, "흑화카구야마법의망토=%d\n", 흑화카구야.마법의망토);
	fprintf(savefile, "흑화카구야고대신비마법서=%d\n", 흑화카구야.고대신비의마법서);
	fprintf(savefile, "흑화카구야산뜻한기분=%d\n", 흑화카구야.산뜻한기분);
	fprintf(savefile, "흑화카구야갈망의검=%d\n", 흑화카구야.갈망의검);
	fprintf(savefile, "흑화카구야지배전투의기본=%d\n", 흑화카구야.지배전투의기본);
	fprintf(savefile, "흑화카구야지배푸른영기=%d\n", 흑화카구야.지배푸른영기);
	fprintf(savefile, "흑화카구야마법전투의기본=%d\n", 흑화카구야.마법전투의기본);
	fprintf(savefile, "흑화카구야마법푸른영기=%d\n", 흑화카구야.마법푸른영기);
	fprintf(savefile, "흑화카구야강인한체력=%d\n", 흑화카구야.강인한체력);
	fprintf(savefile, "흑화카구야활력증진=%d\n", 흑화카구야.활력증진);
	fprintf(savefile, "흑화카구야저돌적인공격방식=%d\n", 흑화카구야.저돌적인공격방식);
	fprintf(savefile, "흑화카구야신비한공격방식=%d\n", 흑화카구야.신비한공격방식);
	fprintf(savefile, "흑화카구야투쟁갑옷무력화=%d\n", 흑화카구야.투쟁갑옷무력화);
	fprintf(savefile, "흑화카구야투쟁저항무력화=%d\n", 흑화카구야.투쟁저항무력화);
	fprintf(savefile, "흑화카구야지배갑옷무력화=%d\n", 흑화카구야.지배갑옷무력화);
	fprintf(savefile, "흑화카구야지배저항무력화=%d\n", 흑화카구야.지배저항무력화);
	fprintf(savefile, "흑화카구야마법갑옷무력화=%d\n", 흑화카구야.마법갑옷무력화);
	fprintf(savefile, "흑화카구야마법저항무력화=%d\n", 흑화카구야.마법저항무력화);
	fprintf(savefile, "흑화카구야신비의방패=%d\n", 흑화카구야.신비의방패);
	fprintf(savefile, "흑화카구야저항의방패=%d\n", 흑화카구야.저항의방패);
	fprintf(savefile, "흑화카구야경험치사기꾼=%d\n", 흑화카구야.경험치사기꾼);
	fprintf(savefile, "흑화카구야골드도둑=%d\n", 흑화카구야.골드도둑);
	fprintf(savefile, "흑화카구야투쟁타격용분=%d\n", 흑화카구야.투쟁타격용분);
	fprintf(savefile, "흑화카구야투쟁마법용분=%d\n", 흑화카구야.투쟁마법용분);
	fprintf(savefile, "흑화카구야지배물리용분=%d\n", 흑화카구야.지배물리용분);
	fprintf(savefile, "흑화카구야지배마법용분=%d\n", 흑화카구야.지배마법용분);
	fprintf(savefile, "흑화카구야마법물리용분=%d\n", 흑화카구야.마법물리용분);
	fprintf(savefile, "흑화카구야마법마법용분=%d\n", 흑화카구야.마법마법용분);
	fprintf(savefile, "흑화카구야긍지최후의방어=%d\n", 흑화카구야.긍지최후의방어);
	fprintf(savefile, "흑화카구야축복최후의방어=%d\n", 흑화카구야.축복최후의방어);
	fprintf(savefile, "흑화카구야집중사격=%d\n", 흑화카구야.집중사격);
	fprintf(savefile, "흑화카구야무자비한연사=%d\n", 흑화카구야.무자비한연사);
	fprintf(savefile, "흑화카구야환상적인공격=%d\n", 흑화카구야.환상적인공격);
	fprintf(savefile, "흑화카구야제우스의분노=%d\n", 흑화카구야.제우스의분노);
	fprintf(savefile, "흑화카구야오디세우스의성검=%d\n", 흑화카구야.오디세우스의성검);
	fprintf(savefile, "흑화카구야대마법신비로운메테오=%d\n", 흑화카구야.대마법신비로운메테오);
	fprintf(savefile, "흑화카구야마법펀치=%d\n", 흑화카구야.마법펀치);
	fprintf(savefile, "흑화카구야곰발바닥=%d\n", 흑화카구야.곰발바닥);
	fprintf(savefile, "흑화카구야토르의분노=%d\n", 흑화카구야.토르의분노);
	fprintf(savefile, "흑화카구야마법의점멸=%d\n", 흑화카구야.마법의점멸);
	fprintf(savefile, "흑화카구야신의가호=%d\n", 흑화카구야.신의가호);
	//모미지
	fprintf(savefile, "모미지플레이횟수=%d\n", 모미지.게임횟수);
	fprintf(savefile, "모미지승리=%d\n", 모미지.승수);
	fprintf(savefile, "모미지패배=%d\n", 모미지.패수);
	fprintf(savefile, "모미지승률=%2lf\n", 모미지.승률);
	fprintf(savefile, "모미지레이팅=%d\n", 모미지.레이팅);
	fprintf(savefile, "모미지연승=%d\n", 모미지.연승);
	fprintf(savefile, "모미지연패=%d\n", 모미지.연패);
	fprintf(savefile, "모미지킬=%d\n", 모미지.킬);
	fprintf(savefile, "모미지데스=%d\n", 모미지.데스);
	fprintf(savefile, "모미지어시스트=%d\n", 모미지.어시스트);
	fprintf(savefile, "모미지백조의부름=%d\n", 모미지.백조의부름);
	fprintf(savefile, "모미지회복의삼지창=%d\n", 모미지.회복의삼지창);
	fprintf(savefile, "모미지밤의사냥꾼=%d\n", 모미지.밤의사냥꾼);
	fprintf(savefile, "모미지비겁한고블린=%d\n", 모미지.비겁한고블린);
	fprintf(savefile, "모미지깨달음=%d\n", 모미지.깨달음);
	fprintf(savefile, "모미지흑마법=%d\n", 모미지.흑마법);
	fprintf(savefile, "모미지음과양=%d\n", 모미지.음과양의조화);
	fprintf(savefile, "모미지아레스=%d\n", 모미지.아레스의투구);
	fprintf(savefile, "모미지라식=%d\n", 모미지.라식);
	fprintf(savefile, "모미지장화=%d\n", 모미지.축복의장화);
	fprintf(savefile, "모미지반지=%d\n", 모미지.신비로운반지);
	fprintf(savefile, "모미지치명적인탄환=%d\n", 모미지.치명적인탄환);
	fprintf(savefile, "모미지깨물기=%d\n", 모미지.깨물기);
	fprintf(savefile, "모미지이동의즐거움=%d\n", 모미지.이동의즐거움);
	fprintf(savefile, "모미지판다렌=%d\n", 모미지.판다렌의화염작렬);
	fprintf(savefile, "모미지마법부스터=%d\n", 모미지.마법부스터);
	fprintf(savefile, "모미지단단한벽=%d\n", 모미지.단단한벽);
	fprintf(savefile, "모미지마법의망토=%d\n", 모미지.마법의망토);
	fprintf(savefile, "모미지고대신비마법서=%d\n", 모미지.고대신비의마법서);
	fprintf(savefile, "모미지산뜻한기분=%d\n", 모미지.산뜻한기분);
	fprintf(savefile, "모미지갈망의검=%d\n", 모미지.갈망의검);
	fprintf(savefile, "모미지지배전투의기본=%d\n", 모미지.지배전투의기본);
	fprintf(savefile, "모미지지배푸른영기=%d\n", 모미지.지배푸른영기);
	fprintf(savefile, "모미지마법전투의기본=%d\n", 모미지.마법전투의기본);
	fprintf(savefile, "모미지마법푸른영기=%d\n", 모미지.마법푸른영기);
	fprintf(savefile, "모미지강인한체력=%d\n", 모미지.강인한체력);
	fprintf(savefile, "모미지활력증진=%d\n", 모미지.활력증진);
	fprintf(savefile, "모미지저돌적인공격방식=%d\n", 모미지.저돌적인공격방식);
	fprintf(savefile, "모미지신비한공격방식=%d\n", 모미지.신비한공격방식);
	fprintf(savefile, "모미지투쟁갑옷무력화=%d\n", 모미지.투쟁갑옷무력화);
	fprintf(savefile, "모미지투쟁저항무력화=%d\n", 모미지.투쟁저항무력화);
	fprintf(savefile, "모미지지배갑옷무력화=%d\n", 모미지.지배갑옷무력화);
	fprintf(savefile, "모미지지배저항무력화=%d\n", 모미지.지배저항무력화);
	fprintf(savefile, "모미지마법갑옷무력화=%d\n", 모미지.마법갑옷무력화);
	fprintf(savefile, "모미지마법저항무력화=%d\n", 모미지.마법저항무력화);
	fprintf(savefile, "모미지신비의방패=%d\n", 모미지.신비의방패);
	fprintf(savefile, "모미지저항의방패=%d\n", 모미지.저항의방패);
	fprintf(savefile, "모미지경험치사기꾼=%d\n", 모미지.경험치사기꾼);
	fprintf(savefile, "모미지골드도둑=%d\n", 모미지.골드도둑);
	fprintf(savefile, "모미지투쟁타격용분=%d\n", 모미지.투쟁타격용분);
	fprintf(savefile, "모미지투쟁마법용분=%d\n", 모미지.투쟁마법용분);
	fprintf(savefile, "모미지지배물리용분=%d\n", 모미지.지배물리용분);
	fprintf(savefile, "모미지지배마법용분=%d\n", 모미지.지배마법용분);
	fprintf(savefile, "모미지마법물리용분=%d\n", 모미지.마법물리용분);
	fprintf(savefile, "모미지마법마법용분=%d\n", 모미지.마법마법용분);
	fprintf(savefile, "모미지긍지최후의방어=%d\n", 모미지.긍지최후의방어);
	fprintf(savefile, "모미지축복최후의방어=%d\n", 모미지.축복최후의방어);
	fprintf(savefile, "모미지집중사격=%d\n", 모미지.집중사격);
	fprintf(savefile, "모미지무자비한연사=%d\n", 모미지.무자비한연사);
	fprintf(savefile, "모미지환상적인공격=%d\n", 모미지.환상적인공격);
	fprintf(savefile, "모미지제우스의분노=%d\n", 모미지.제우스의분노);
	fprintf(savefile, "모미지오디세우스의성검=%d\n", 모미지.오디세우스의성검);
	fprintf(savefile, "모미지대마법신비로운메테오=%d\n", 모미지.대마법신비로운메테오);
	fprintf(savefile, "모미지마법펀치=%d\n", 모미지.마법펀치);
	fprintf(savefile, "모미지곰발바닥=%d\n", 모미지.곰발바닥);
	fprintf(savefile, "모미지토르의분노=%d\n", 모미지.토르의분노);
	fprintf(savefile, "모미지마법의점멸=%d\n", 모미지.마법의점멸);
	fprintf(savefile, "모미지신의가호=%d\n", 모미지.신의가호);
	//흑무라
	fprintf(savefile, "흑화무라사플레이횟수=%d\n", 흑화무라사.게임횟수);
	fprintf(savefile, "흑화무라사승리=%d\n", 흑화무라사.승수);
	fprintf(savefile, "흑화무라사패배=%d\n", 흑화무라사.패수);
	fprintf(savefile, "흑화무라사승률=%2lf\n", 흑화무라사.승률);
	fprintf(savefile, "흑화무라사레이팅=%d\n", 흑화무라사.레이팅);
	fprintf(savefile, "흑화무라사연승=%d\n", 흑화무라사.연승);
	fprintf(savefile, "흑화무라사연패=%d\n", 흑화무라사.연패);
	fprintf(savefile, "흑화무라사킬=%d\n", 흑화무라사.킬);
	fprintf(savefile, "흑화무라사데스=%d\n", 흑화무라사.데스);
	fprintf(savefile, "흑화무라사어시스트=%d\n", 흑화무라사.어시스트);
	fprintf(savefile, "흑화무라사백조의부름=%d\n", 흑화무라사.백조의부름);
	fprintf(savefile, "흑화무라사회복의삼지창=%d\n", 흑화무라사.회복의삼지창);
	fprintf(savefile, "흑화무라사밤의사냥꾼=%d\n", 흑화무라사.밤의사냥꾼);
	fprintf(savefile, "흑화무라사비겁한고블린=%d\n", 흑화무라사.비겁한고블린);
	fprintf(savefile, "흑화무라사깨달음=%d\n", 흑화무라사.깨달음);
	fprintf(savefile, "흑화무라사흑마법=%d\n", 흑화무라사.흑마법);
	fprintf(savefile, "흑화무라사음과양=%d\n", 흑화무라사.음과양의조화);
	fprintf(savefile, "흑화무라사아레스=%d\n", 흑화무라사.아레스의투구);
	fprintf(savefile, "흑화무라사라식=%d\n", 흑화무라사.라식);
	fprintf(savefile, "흑화무라사장화=%d\n", 흑화무라사.축복의장화);
	fprintf(savefile, "흑화무라사반지=%d\n", 흑화무라사.신비로운반지);
	fprintf(savefile, "흑화무라사치명적인탄환=%d\n", 흑화무라사.치명적인탄환);
	fprintf(savefile, "흑화무라사깨물기=%d\n", 흑화무라사.깨물기);
	fprintf(savefile, "흑화무라사이동의즐거움=%d\n", 흑화무라사.이동의즐거움);
	fprintf(savefile, "흑화무라사판다렌=%d\n", 흑화무라사.판다렌의화염작렬);
	fprintf(savefile, "흑화무라사마법부스터=%d\n", 흑화무라사.마법부스터);
	fprintf(savefile, "흑화무라사단단한벽=%d\n", 흑화무라사.단단한벽);
	fprintf(savefile, "흑화무라사마법의망토=%d\n", 흑화무라사.마법의망토);
	fprintf(savefile, "흑화무라사고대신비마법서=%d\n", 흑화무라사.고대신비의마법서);
	fprintf(savefile, "흑화무라사산뜻한기분=%d\n", 흑화무라사.산뜻한기분);
	fprintf(savefile, "흑화무라사갈망의검=%d\n", 흑화무라사.갈망의검);
	fprintf(savefile, "흑화무라사지배전투의기본=%d\n", 흑화무라사.지배전투의기본);
	fprintf(savefile, "흑화무라사지배푸른영기=%d\n", 흑화무라사.지배푸른영기);
	fprintf(savefile, "흑화무라사마법전투의기본=%d\n", 흑화무라사.마법전투의기본);
	fprintf(savefile, "흑화무라사마법푸른영기=%d\n", 흑화무라사.마법푸른영기);
	fprintf(savefile, "흑화무라사강인한체력=%d\n", 흑화무라사.강인한체력);
	fprintf(savefile, "흑화무라사활력증진=%d\n", 흑화무라사.활력증진);
	fprintf(savefile, "흑화무라사저돌적인공격방식=%d\n", 흑화무라사.저돌적인공격방식);
	fprintf(savefile, "흑화무라사신비한공격방식=%d\n", 흑화무라사.신비한공격방식);
	fprintf(savefile, "흑화무라사투쟁갑옷무력화=%d\n", 흑화무라사.투쟁갑옷무력화);
	fprintf(savefile, "흑화무라사투쟁저항무력화=%d\n", 흑화무라사.투쟁저항무력화);
	fprintf(savefile, "흑화무라사지배갑옷무력화=%d\n", 흑화무라사.지배갑옷무력화);
	fprintf(savefile, "흑화무라사지배저항무력화=%d\n", 흑화무라사.지배저항무력화);
	fprintf(savefile, "흑화무라사마법갑옷무력화=%d\n", 흑화무라사.마법갑옷무력화);
	fprintf(savefile, "흑화무라사마법저항무력화=%d\n", 흑화무라사.마법저항무력화);
	fprintf(savefile, "흑화무라사신비의방패=%d\n", 흑화무라사.신비의방패);
	fprintf(savefile, "흑화무라사저항의방패=%d\n", 흑화무라사.저항의방패);
	fprintf(savefile, "흑화무라사경험치사기꾼=%d\n", 흑화무라사.경험치사기꾼);
	fprintf(savefile, "흑화무라사골드도둑=%d\n", 흑화무라사.골드도둑);
	fprintf(savefile, "흑화무라사투쟁타격용분=%d\n", 흑화무라사.투쟁타격용분);
	fprintf(savefile, "흑화무라사투쟁마법용분=%d\n", 흑화무라사.투쟁마법용분);
	fprintf(savefile, "흑화무라사지배물리용분=%d\n", 흑화무라사.지배물리용분);
	fprintf(savefile, "흑화무라사지배마법용분=%d\n", 흑화무라사.지배마법용분);
	fprintf(savefile, "흑화무라사마법물리용분=%d\n", 흑화무라사.마법물리용분);
	fprintf(savefile, "흑화무라사마법마법용분=%d\n", 흑화무라사.마법마법용분);
	fprintf(savefile, "흑화무라사긍지최후의방어=%d\n", 흑화무라사.긍지최후의방어);
	fprintf(savefile, "흑화무라사축복최후의방어=%d\n", 흑화무라사.축복최후의방어);
	fprintf(savefile, "흑화무라사집중사격=%d\n", 흑화무라사.집중사격);
	fprintf(savefile, "흑화무라사무자비한연사=%d\n", 흑화무라사.무자비한연사);
	fprintf(savefile, "흑화무라사환상적인공격=%d\n", 흑화무라사.환상적인공격);
	fprintf(savefile, "흑화무라사제우스의분노=%d\n", 흑화무라사.제우스의분노);
	fprintf(savefile, "흑화무라사오디세우스의성검=%d\n", 흑화무라사.오디세우스의성검);
	fprintf(savefile, "흑화무라사대마법신비로운메테오=%d\n", 흑화무라사.대마법신비로운메테오);
	fprintf(savefile, "흑화무라사마법펀치=%d\n", 흑화무라사.마법펀치);
	fprintf(savefile, "흑화무라사곰발바닥=%d\n", 흑화무라사.곰발바닥);
	fprintf(savefile, "흑화무라사토르의분노=%d\n", 흑화무라사.토르의분노);
	fprintf(savefile, "흑화무라사마법의점멸=%d\n", 흑화무라사.마법의점멸);
	fprintf(savefile, "흑화무라사신의가호=%d\n", 흑화무라사.신의가호);
	//조온
	fprintf(savefile, "조온플레이횟수=%d\n", 조온.게임횟수);
	fprintf(savefile, "조온승리=%d\n", 조온.승수);
	fprintf(savefile, "조온패배=%d\n", 조온.패수);
	fprintf(savefile, "조온승률=%2lf\n", 조온.승률);
	fprintf(savefile, "조온레이팅=%d\n", 조온.레이팅);
	fprintf(savefile, "조온연승=%d\n", 조온.연승);
	fprintf(savefile, "조온연패=%d\n", 조온.연패);
	fprintf(savefile, "조온킬=%d\n", 조온.킬);
	fprintf(savefile, "조온데스=%d\n", 조온.데스);
	fprintf(savefile, "조온어시스트=%d\n", 조온.어시스트);
	fprintf(savefile, "조온백조의부름=%d\n", 조온.백조의부름);
	fprintf(savefile, "조온회복의삼지창=%d\n", 조온.회복의삼지창);
	fprintf(savefile, "조온밤의사냥꾼=%d\n", 조온.밤의사냥꾼);
	fprintf(savefile, "조온비겁한고블린=%d\n", 조온.비겁한고블린);
	fprintf(savefile, "조온깨달음=%d\n", 조온.깨달음);
	fprintf(savefile, "조온흑마법=%d\n", 조온.흑마법);
	fprintf(savefile, "조온음과양=%d\n", 조온.음과양의조화);
	fprintf(savefile, "조온아레스=%d\n", 조온.아레스의투구);
	fprintf(savefile, "조온라식=%d\n", 조온.라식);
	fprintf(savefile, "조온장화=%d\n", 조온.축복의장화);
	fprintf(savefile, "조온반지=%d\n", 조온.신비로운반지);
	fprintf(savefile, "조온치명적인탄환=%d\n", 조온.치명적인탄환);
	fprintf(savefile, "조온깨물기=%d\n", 조온.깨물기);
	fprintf(savefile, "조온이동의즐거움=%d\n", 조온.이동의즐거움);
	fprintf(savefile, "조온판다렌=%d\n", 조온.판다렌의화염작렬);
	fprintf(savefile, "조온마법부스터=%d\n", 조온.마법부스터);
	fprintf(savefile, "조온단단한벽=%d\n", 조온.단단한벽);
	fprintf(savefile, "조온마법의망토=%d\n", 조온.마법의망토);
	fprintf(savefile, "조온고대신비마법서=%d\n", 조온.고대신비의마법서);
	fprintf(savefile, "조온산뜻한기분=%d\n", 조온.산뜻한기분);
	fprintf(savefile, "조온갈망의검=%d\n", 조온.갈망의검);
	fprintf(savefile, "조온지배전투의기본=%d\n", 조온.지배전투의기본);
	fprintf(savefile, "조온지배푸른영기=%d\n", 조온.지배푸른영기);
	fprintf(savefile, "조온마법전투의기본=%d\n", 조온.마법전투의기본);
	fprintf(savefile, "조온마법푸른영기=%d\n", 조온.마법푸른영기);
	fprintf(savefile, "조온강인한체력=%d\n", 조온.강인한체력);
	fprintf(savefile, "조온활력증진=%d\n", 조온.활력증진);
	fprintf(savefile, "조온저돌적인공격방식=%d\n", 조온.저돌적인공격방식);
	fprintf(savefile, "조온신비한공격방식=%d\n", 조온.신비한공격방식);
	fprintf(savefile, "조온투쟁갑옷무력화=%d\n", 조온.투쟁갑옷무력화);
	fprintf(savefile, "조온투쟁저항무력화=%d\n", 조온.투쟁저항무력화);
	fprintf(savefile, "조온지배갑옷무력화=%d\n", 조온.지배갑옷무력화);
	fprintf(savefile, "조온지배저항무력화=%d\n", 조온.지배저항무력화);
	fprintf(savefile, "조온마법갑옷무력화=%d\n", 조온.마법갑옷무력화);
	fprintf(savefile, "조온마법저항무력화=%d\n", 조온.마법저항무력화);
	fprintf(savefile, "조온신비의방패=%d\n", 조온.신비의방패);
	fprintf(savefile, "조온저항의방패=%d\n", 조온.저항의방패);
	fprintf(savefile, "조온경험치사기꾼=%d\n", 조온.경험치사기꾼);
	fprintf(savefile, "조온골드도둑=%d\n", 조온.골드도둑);
	fprintf(savefile, "조온투쟁타격용분=%d\n", 조온.투쟁타격용분);
	fprintf(savefile, "조온투쟁마법용분=%d\n", 조온.투쟁마법용분);
	fprintf(savefile, "조온지배물리용분=%d\n", 조온.지배물리용분);
	fprintf(savefile, "조온지배마법용분=%d\n", 조온.지배마법용분);
	fprintf(savefile, "조온마법물리용분=%d\n", 조온.마법물리용분);
	fprintf(savefile, "조온마법마법용분=%d\n", 조온.마법마법용분);
	fprintf(savefile, "조온긍지최후의방어=%d\n", 조온.긍지최후의방어);
	fprintf(savefile, "조온축복최후의방어=%d\n", 조온.축복최후의방어);
	fprintf(savefile, "조온집중사격=%d\n", 조온.집중사격);
	fprintf(savefile, "조온무자비한연사=%d\n", 조온.무자비한연사);
	fprintf(savefile, "조온환상적인공격=%d\n", 조온.환상적인공격);
	fprintf(savefile, "조온제우스의분노=%d\n", 조온.제우스의분노);
	fprintf(savefile, "조온오디세우스의성검=%d\n", 조온.오디세우스의성검);
	fprintf(savefile, "조온대마법신비로운메테오=%d\n", 조온.대마법신비로운메테오);
	fprintf(savefile, "조온마법펀치=%d\n", 조온.마법펀치);
	fprintf(savefile, "조온곰발바닥=%d\n", 조온.곰발바닥);
	fprintf(savefile, "조온토르의분노=%d\n", 조온.토르의분노);
	fprintf(savefile, "조온마법의점멸=%d\n", 조온.마법의점멸);
	fprintf(savefile, "조온신의가호=%d\n", 조온.신의가호);
	//악레
	fprintf(savefile, "악마레이무플레이횟수=%d\n", 악마레이무.게임횟수);
	fprintf(savefile, "악마레이무승리=%d\n", 악마레이무.승수);
	fprintf(savefile, "악마레이무패배=%d\n", 악마레이무.패수);
	fprintf(savefile, "악마레이무승률=%2lf\n", 악마레이무.승률);
	fprintf(savefile, "악마레이무레이팅=%d\n", 악마레이무.레이팅);
	fprintf(savefile, "악마레이무연승=%d\n", 악마레이무.연승);
	fprintf(savefile, "악마레이무연패=%d\n", 악마레이무.연패);
	fprintf(savefile, "악마레이무킬=%d\n", 악마레이무.킬);
	fprintf(savefile, "악마레이무데스=%d\n", 악마레이무.데스);
	fprintf(savefile, "악마레이무어시스트=%d\n", 악마레이무.어시스트);
	fprintf(savefile, "악마레이무백조의부름=%d\n", 악마레이무.백조의부름);
	fprintf(savefile, "악마레이무회복의삼지창=%d\n", 악마레이무.회복의삼지창);
	fprintf(savefile, "악마레이무밤의사냥꾼=%d\n", 악마레이무.밤의사냥꾼);
	fprintf(savefile, "악마레이무비겁한고블린=%d\n", 악마레이무.비겁한고블린);
	fprintf(savefile, "악마레이무깨달음=%d\n", 악마레이무.깨달음);
	fprintf(savefile, "악마레이무흑마법=%d\n", 악마레이무.흑마법);
	fprintf(savefile, "악마레이무음과양=%d\n", 악마레이무.음과양의조화);
	fprintf(savefile, "악마레이무아레스=%d\n", 악마레이무.아레스의투구);
	fprintf(savefile, "악마레이무라식=%d\n", 악마레이무.라식);
	fprintf(savefile, "악마레이무장화=%d\n", 악마레이무.축복의장화);
	fprintf(savefile, "악마레이무반지=%d\n", 악마레이무.신비로운반지);
	fprintf(savefile, "악마레이무치명적인탄환=%d\n", 악마레이무.치명적인탄환);
	fprintf(savefile, "악마레이무깨물기=%d\n", 악마레이무.깨물기);
	fprintf(savefile, "악마레이무이동의즐거움=%d\n", 악마레이무.이동의즐거움);
	fprintf(savefile, "악마레이무판다렌=%d\n", 악마레이무.판다렌의화염작렬);
	fprintf(savefile, "악마레이무마법부스터=%d\n", 악마레이무.마법부스터);
	fprintf(savefile, "악마레이무단단한벽=%d\n", 악마레이무.단단한벽);
	fprintf(savefile, "악마레이무마법의망토=%d\n", 악마레이무.마법의망토);
	fprintf(savefile, "악마레이무고대신비마법서=%d\n", 악마레이무.고대신비의마법서);
	fprintf(savefile, "악마레이무산뜻한기분=%d\n", 악마레이무.산뜻한기분);
	fprintf(savefile, "악마레이무갈망의검=%d\n", 악마레이무.갈망의검);
	fprintf(savefile, "악마레이무지배전투의기본=%d\n", 악마레이무.지배전투의기본);
	fprintf(savefile, "악마레이무지배푸른영기=%d\n", 악마레이무.지배푸른영기);
	fprintf(savefile, "악마레이무마법전투의기본=%d\n", 악마레이무.마법전투의기본);
	fprintf(savefile, "악마레이무마법푸른영기=%d\n", 악마레이무.마법푸른영기);
	fprintf(savefile, "악마레이무강인한체력=%d\n", 악마레이무.강인한체력);
	fprintf(savefile, "악마레이무활력증진=%d\n", 악마레이무.활력증진);
	fprintf(savefile, "악마레이무저돌적인공격방식=%d\n", 악마레이무.저돌적인공격방식);
	fprintf(savefile, "악마레이무신비한공격방식=%d\n", 악마레이무.신비한공격방식);
	fprintf(savefile, "악마레이무투쟁갑옷무력화=%d\n", 악마레이무.투쟁갑옷무력화);
	fprintf(savefile, "악마레이무투쟁저항무력화=%d\n", 악마레이무.투쟁저항무력화);
	fprintf(savefile, "악마레이무지배갑옷무력화=%d\n", 악마레이무.지배갑옷무력화);
	fprintf(savefile, "악마레이무지배저항무력화=%d\n", 악마레이무.지배저항무력화);
	fprintf(savefile, "악마레이무마법갑옷무력화=%d\n", 악마레이무.마법갑옷무력화);
	fprintf(savefile, "악마레이무마법저항무력화=%d\n", 악마레이무.마법저항무력화);
	fprintf(savefile, "악마레이무신비의방패=%d\n", 악마레이무.신비의방패);
	fprintf(savefile, "악마레이무저항의방패=%d\n", 악마레이무.저항의방패);
	fprintf(savefile, "악마레이무경험치사기꾼=%d\n", 악마레이무.경험치사기꾼);
	fprintf(savefile, "악마레이무골드도둑=%d\n", 악마레이무.골드도둑);
	fprintf(savefile, "악마레이무투쟁타격용분=%d\n", 악마레이무.투쟁타격용분);
	fprintf(savefile, "악마레이무투쟁마법용분=%d\n", 악마레이무.투쟁마법용분);
	fprintf(savefile, "악마레이무지배물리용분=%d\n", 악마레이무.지배물리용분);
	fprintf(savefile, "악마레이무지배마법용분=%d\n", 악마레이무.지배마법용분);
	fprintf(savefile, "악마레이무마법물리용분=%d\n", 악마레이무.마법물리용분);
	fprintf(savefile, "악마레이무마법마법용분=%d\n", 악마레이무.마법마법용분);
	fprintf(savefile, "악마레이무긍지최후의방어=%d\n", 악마레이무.긍지최후의방어);
	fprintf(savefile, "악마레이무축복최후의방어=%d\n", 악마레이무.축복최후의방어);
	fprintf(savefile, "악마레이무집중사격=%d\n", 악마레이무.집중사격);
	fprintf(savefile, "악마레이무무자비한연사=%d\n", 악마레이무.무자비한연사);
	fprintf(savefile, "악마레이무환상적인공격=%d\n", 악마레이무.환상적인공격);
	fprintf(savefile, "악마레이무제우스의분노=%d\n", 악마레이무.제우스의분노);
	fprintf(savefile, "악마레이무오디세우스의성검=%d\n", 악마레이무.오디세우스의성검);
	fprintf(savefile, "악마레이무대마법신비로운메테오=%d\n", 악마레이무.대마법신비로운메테오);
	fprintf(savefile, "악마레이무마법펀치=%d\n", 악마레이무.마법펀치);
	fprintf(savefile, "악마레이무곰발바닥=%d\n", 악마레이무.곰발바닥);
	fprintf(savefile, "악마레이무토르의분노=%d\n", 악마레이무.토르의분노);
	fprintf(savefile, "악마레이무마법의점멸=%d\n", 악마레이무.마법의점멸);
	fprintf(savefile, "악마레이무신의가호=%d\n", 악마레이무.신의가호);
	//흑텐
	fprintf(savefile, "흑화텐시플레이횟수=%d\n", 흑화텐시.게임횟수);
	fprintf(savefile, "흑화텐시승리=%d\n", 흑화텐시.승수);
	fprintf(savefile, "흑화텐시패배=%d\n", 흑화텐시.패수);
	fprintf(savefile, "흑화텐시승률=%2lf\n", 흑화텐시.승률);
	fprintf(savefile, "흑화텐시레이팅=%d\n", 흑화텐시.레이팅);
	fprintf(savefile, "흑화텐시연승=%d\n", 흑화텐시.연승);
	fprintf(savefile, "흑화텐시연패=%d\n", 흑화텐시.연패);
	fprintf(savefile, "흑화텐시킬=%d\n", 흑화텐시.킬);
	fprintf(savefile, "흑화텐시데스=%d\n", 흑화텐시.데스);
	fprintf(savefile, "흑화텐시어시스트=%d\n", 흑화텐시.어시스트);
	fprintf(savefile, "흑화텐시백조의부름=%d\n", 흑화텐시.백조의부름);
	fprintf(savefile, "흑화텐시회복의삼지창=%d\n", 흑화텐시.회복의삼지창);
	fprintf(savefile, "흑화텐시밤의사냥꾼=%d\n", 흑화텐시.밤의사냥꾼);
	fprintf(savefile, "흑화텐시비겁한고블린=%d\n", 흑화텐시.비겁한고블린);
	fprintf(savefile, "흑화텐시깨달음=%d\n", 흑화텐시.깨달음);
	fprintf(savefile, "흑화텐시흑마법=%d\n", 흑화텐시.흑마법);
	fprintf(savefile, "흑화텐시음과양=%d\n", 흑화텐시.음과양의조화);
	fprintf(savefile, "흑화텐시아레스=%d\n", 흑화텐시.아레스의투구);
	fprintf(savefile, "흑화텐시라식=%d\n", 흑화텐시.라식);
	fprintf(savefile, "흑화텐시장화=%d\n", 흑화텐시.축복의장화);
	fprintf(savefile, "흑화텐시반지=%d\n", 흑화텐시.신비로운반지);
	fprintf(savefile, "흑화텐시치명적인탄환=%d\n", 흑화텐시.치명적인탄환);
	fprintf(savefile, "흑화텐시깨물기=%d\n", 흑화텐시.깨물기);
	fprintf(savefile, "흑화텐시이동의즐거움=%d\n", 흑화텐시.이동의즐거움);
	fprintf(savefile, "흑화텐시판다렌=%d\n", 흑화텐시.판다렌의화염작렬);
	fprintf(savefile, "흑화텐시마법부스터=%d\n", 흑화텐시.마법부스터);
	fprintf(savefile, "흑화텐시단단한벽=%d\n", 흑화텐시.단단한벽);
	fprintf(savefile, "흑화텐시마법의망토=%d\n", 흑화텐시.마법의망토);
	fprintf(savefile, "흑화텐시고대신비마법서=%d\n", 흑화텐시.고대신비의마법서);
	fprintf(savefile, "흑화텐시산뜻한기분=%d\n", 흑화텐시.산뜻한기분);
	fprintf(savefile, "흑화텐시갈망의검=%d\n", 흑화텐시.갈망의검);
	fprintf(savefile, "흑화텐시지배전투의기본=%d\n", 흑화텐시.지배전투의기본);
	fprintf(savefile, "흑화텐시지배푸른영기=%d\n", 흑화텐시.지배푸른영기);
	fprintf(savefile, "흑화텐시마법전투의기본=%d\n", 흑화텐시.마법전투의기본);
	fprintf(savefile, "흑화텐시마법푸른영기=%d\n", 흑화텐시.마법푸른영기);
	fprintf(savefile, "흑화텐시강인한체력=%d\n", 흑화텐시.강인한체력);
	fprintf(savefile, "흑화텐시활력증진=%d\n", 흑화텐시.활력증진);
	fprintf(savefile, "흑화텐시저돌적인공격방식=%d\n", 흑화텐시.저돌적인공격방식);
	fprintf(savefile, "흑화텐시신비한공격방식=%d\n", 흑화텐시.신비한공격방식);
	fprintf(savefile, "흑화텐시투쟁갑옷무력화=%d\n", 흑화텐시.투쟁갑옷무력화);
	fprintf(savefile, "흑화텐시투쟁저항무력화=%d\n", 흑화텐시.투쟁저항무력화);
	fprintf(savefile, "흑화텐시지배갑옷무력화=%d\n", 흑화텐시.지배갑옷무력화);
	fprintf(savefile, "흑화텐시지배저항무력화=%d\n", 흑화텐시.지배저항무력화);
	fprintf(savefile, "흑화텐시마법갑옷무력화=%d\n", 흑화텐시.마법갑옷무력화);
	fprintf(savefile, "흑화텐시마법저항무력화=%d\n", 흑화텐시.마법저항무력화);
	fprintf(savefile, "흑화텐시신비의방패=%d\n", 흑화텐시.신비의방패);
	fprintf(savefile, "흑화텐시저항의방패=%d\n", 흑화텐시.저항의방패);
	fprintf(savefile, "흑화텐시경험치사기꾼=%d\n", 흑화텐시.경험치사기꾼);
	fprintf(savefile, "흑화텐시골드도둑=%d\n", 흑화텐시.골드도둑);
	fprintf(savefile, "흑화텐시투쟁타격용분=%d\n", 흑화텐시.투쟁타격용분);
	fprintf(savefile, "흑화텐시투쟁마법용분=%d\n", 흑화텐시.투쟁마법용분);
	fprintf(savefile, "흑화텐시지배물리용분=%d\n", 흑화텐시.지배물리용분);
	fprintf(savefile, "흑화텐시지배마법용분=%d\n", 흑화텐시.지배마법용분);
	fprintf(savefile, "흑화텐시마법물리용분=%d\n", 흑화텐시.마법물리용분);
	fprintf(savefile, "흑화텐시마법마법용분=%d\n", 흑화텐시.마법마법용분);
	fprintf(savefile, "흑화텐시긍지최후의방어=%d\n", 흑화텐시.긍지최후의방어);
	fprintf(savefile, "흑화텐시축복최후의방어=%d\n", 흑화텐시.축복최후의방어);
	fprintf(savefile, "흑화텐시집중사격=%d\n", 흑화텐시.집중사격);
	fprintf(savefile, "흑화텐시무자비한연사=%d\n", 흑화텐시.무자비한연사);
	fprintf(savefile, "흑화텐시환상적인공격=%d\n", 흑화텐시.환상적인공격);
	fprintf(savefile, "흑화텐시제우스의분노=%d\n", 흑화텐시.제우스의분노);
	fprintf(savefile, "흑화텐시오디세우스의성검=%d\n", 흑화텐시.오디세우스의성검);
	fprintf(savefile, "흑화텐시대마법신비로운메테오=%d\n", 흑화텐시.대마법신비로운메테오);
	fprintf(savefile, "흑화텐시마법펀치=%d\n", 흑화텐시.마법펀치);
	fprintf(savefile, "흑화텐시곰발바닥=%d\n", 흑화텐시.곰발바닥);
	fprintf(savefile, "흑화텐시토르의분노=%d\n", 흑화텐시.토르의분노);
	fprintf(savefile, "흑화텐시마법의점멸=%d\n", 흑화텐시.마법의점멸);
	fprintf(savefile, "흑화텐시신의가호=%d\n", 흑화텐시.신의가호);
	//

	//함수종료
	TRACE("입력함수 종료\n");
	fclose(savefile);
}
//뉴우 영역

//레거시 영역(구조체 활용)
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
//레거시임