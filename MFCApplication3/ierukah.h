
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
	//요우무r2
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