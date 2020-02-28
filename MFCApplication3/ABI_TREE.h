#pragma once



// ABI_TREE 대화 상자

class ABI_TREE : public CDialog
{
	DECLARE_DYNAMIC(ABI_TREE)

public:
	ABI_TREE(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~ABI_TREE();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TREE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString point_buf;
	int point = 7;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	//검사용 변수
	int TRE_a = 0;
	int TRE_b = 0;
	int TRE_c = 0;
	int TRE_d = 0;
	int TRE_e = 0;
	int TRE_count = 0;
	//
	bool a_1 = FALSE;
	bool a_2 = FALSE;
	bool a_3 = FALSE;
	bool a_4 = FALSE;
	bool a_5 = FALSE;
	bool b_1 = FALSE;
	bool b_2 = FALSE;
	bool b_3 = FALSE;
	bool b_4 = FALSE;
	bool b_5 = FALSE;
	bool c_1 = FALSE;
	bool c_2 = FALSE;
	bool c_3 = FALSE;
	bool c_4 = FALSE;
	bool c_5 = FALSE;
	bool d_1 = FALSE;
	bool d_2 = FALSE;
	bool d_3 = FALSE;
	bool d_4 = FALSE;
	bool d_5 = FALSE;
	bool e_1 = FALSE;
	bool e_2 = FALSE;
	bool e_3 = FALSE;
	bool e_4 = FALSE;
	bool e_5 = FALSE;
	 bool a_1_1;//백조
	 bool a_1_2;//삼지창
	 bool a_2_1;//반지
	 bool a_2_2;//탄환
	 bool a_3_1;//갈망의검
	 bool a_4_1;//갑옷무력화(투쟁)
	 bool a_4_2;//저항무력화(투쟁)
	 bool a_5_1;//물리 용분(투쟁)
	 bool a_5_2;//마법용분(투쟁)
	 bool a_6_1;//집중사격
	 bool a_6_2;//연사
	 bool a_6_3;//환공
	 bool b_1_1;//밤사
	 bool b_1_2;//고블린
	 bool b_2_1;//깨물기
	 bool b_2_2;//이동의즐거움
	 bool b_3_1;//전투의기본(지배)
	 bool b_3_2;//푸른영기(지배)
	 bool b_4_1;//갑옷무력화(지배)
	 bool b_4_2;//저항무력화(지배)
	 bool b_5_1;//물리용분(지배)
	 bool b_5_2;//마법용분(지배)
	 bool b_6_1;//제우스
	 bool b_6_2;//성검
	 bool c_1_1;//깨달음
	 bool c_1_2;//흑마법
	 bool c_2_1;//판다렌
	 bool c_2_2;//마법부스터
	 bool c_3_1;//전투의기본(마법)
	 bool c_3_2;//푸른영기(마법)
	 bool c_4_1;//갑옷무력화(마법)
	 bool c_4_2;//저항무력화(마법)
	 bool c_5_1;//물리용분(마법)
	 bool c_5_2;//마법용분(마법)
	 bool c_6_1;//메테오
	 bool c_6_2;//마펀
	 bool d_1_1;//음양조화
	 bool d_1_2;//아레스
	 bool d_2_1;//단단벽
	 bool d_2_2;//마법망토
	 bool d_3_1;//강인체력
	 bool d_4_1;//신비방패
	 bool d_4_2;//저항방패
	 bool d_5_1;//최후방어
	 bool d_6_1;//곰발
	 bool d_6_2;//토르의분노
	 bool e_1_1;//라식
	 bool e_1_2;//장화
	 bool e_2_1;//마법서
	 bool e_2_2;//기분
	 bool e_3_1;//활력
	 bool e_3_2;//저돌적공격
	 bool e_3_3;//신비공격
	 bool e_4_1;//경사
	 bool e_4_2;//골드도둑
	 bool e_5_1;//최후방어
	 bool e_6_1;//마법점멸
	 bool e_6_2;//가호
	//a=투쟁,b=지배,c=마법,d=긍지,e=축복
	//1,2,3,4,5..=줄 개수
	// 이상의 변수는 특성을 찍을수 있는 요구조건을 구별하기 위함임

	

	//이하는 특성의 선택여부임
	//앞 두자리는 위에거랑 같음/1=좌,2=우
	
	afx_msg void OnBnClickedButton32();
	afx_msg void OnBnClickedButton1();
	CStatic dis_point;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton23();
	afx_msg void OnBnClickedButton24();
	afx_msg void OnBnClickedButton25();
	afx_msg void OnBnClickedButton26();
	afx_msg void OnBnClickedButton28();
	afx_msg void OnBnClickedButton29();
	afx_msg void OnBnClickedButton30();
	afx_msg void OnBnClickedButton27();
	afx_msg void OnBnClickedButton31();
	void enabling()
	{
		TRACE("COUNT:%d\n",TRE_count);
		TRACE("A:%d\n",TRE_a);
		TRACE("B:%d\n",TRE_b);
		TRACE("C:%d\n",TRE_c);
		TRACE("D:%d\n",TRE_d);
		TRACE("E:%d\n",TRE_e);
		if (TRE_count == 2)
		{
			if (TRE_a == 0)
			{
				백조의부름.EnableWindow(FALSE);
				회복의삼지창.EnableWindow(FALSE);
				신비로운반지.EnableWindow(FALSE);
				치명적인탄환.EnableWindow(FALSE);
				갈망의검.EnableWindow(FALSE);
				투쟁갑옷무력화.EnableWindow(FALSE);
				투쟁저항무력화.EnableWindow(FALSE);
				투쟁타격용분.EnableWindow(FALSE);
				투쟁마법용분.EnableWindow(FALSE);
				집중사격.EnableWindow(FALSE);
				무자비한연사.EnableWindow(FALSE);
				환상적인공격.EnableWindow(FALSE);
			}
			if (TRE_b == 0)
			{
				밤의사냥꾼.EnableWindow(FALSE);
				비겁한고블린.EnableWindow(FALSE);
				깨물기.EnableWindow(FALSE);
				이동의즐거움.EnableWindow(FALSE);
				지배전투의기본.EnableWindow(FALSE);
				지배푸른영기.EnableWindow(FALSE);
				지배갑옷무력화.EnableWindow(FALSE);
				지배저항무력화.EnableWindow(FALSE);
				지배물리용분.EnableWindow(FALSE);
				지배마법용분.EnableWindow(FALSE);
				제우스의분노.EnableWindow(FALSE);
				오디세우스의성검.EnableWindow(FALSE);

			}
			if (TRE_c == 0)
			{
				깨달음.EnableWindow(FALSE);
				흑마법.EnableWindow(FALSE);
				판다렌의화염작렬.EnableWindow(FALSE);
				마법부스터.EnableWindow(FALSE);
				마법전투의기본.EnableWindow(FALSE);
				마법푸른영기.EnableWindow(FALSE);
				마법갑옷무력화.EnableWindow(FALSE);
				마법저항무력화.EnableWindow(FALSE);
				마법물리용분.EnableWindow(FALSE);
				마법마법용분.EnableWindow(FALSE);
				대마법신비로운메테오.EnableWindow(FALSE);
				마법펀치.EnableWindow(FALSE);
			}
			if (TRE_d == 0)
			{
				음과양의조화.EnableWindow(FALSE);
				아레스의투구.EnableWindow(FALSE);
				단단한벽.EnableWindow(FALSE);
				마법의망토.EnableWindow(FALSE);
				강인한체력.EnableWindow(FALSE);
				신비의방패.EnableWindow(FALSE);
				저항의방패.EnableWindow(FALSE);
				긍지최후의방어.EnableWindow(FALSE);
				곰발바닥.EnableWindow(FALSE);
				토르의분노.EnableWindow(FALSE);
			}
			if (TRE_e == 0)
			{
				라식.EnableWindow(FALSE);
				축복의장화.EnableWindow(FALSE);
				고대신비의마법서.EnableWindow(FALSE);
				산뜻한기분.EnableWindow(FALSE);
				활력증진.EnableWindow(FALSE);
				저돌적인공격방식.EnableWindow(FALSE);
				신비한공격방식.EnableWindow(FALSE);
				경험치사기꾼.EnableWindow(FALSE);
				골드도둑.EnableWindow(FALSE);
				축복최후의방어.EnableWindow(FALSE);
				마법의점멸.EnableWindow(FALSE);
				신의가호.EnableWindow(FALSE);
			}
			if ((TRE_a == 2) | (TRE_b == 2) | (TRE_c == 2) | (TRE_d == 2) | (TRE_e == 2))
			{
				if (TRE_a == 1)
				{
					if (a_1_1 == TRUE)
					{
						회복의삼지창.EnableWindow(FALSE);
						신비로운반지.EnableWindow(FALSE);
						치명적인탄환.EnableWindow(FALSE);
					}
					if (a_1_2 == TRUE)
					{
						백조의부름.EnableWindow(FALSE);
						신비로운반지.EnableWindow(FALSE);
						치명적인탄환.EnableWindow(FALSE);
					}
					if (a_2_1 == TRUE)
					{
						백조의부름.EnableWindow(FALSE);
						회복의삼지창.EnableWindow(FALSE);
						치명적인탄환.EnableWindow(FALSE);
					}
					if (a_2_2 == TRUE)
					{
						백조의부름.EnableWindow(FALSE);
						회복의삼지창.EnableWindow(FALSE);
						신비로운반지.EnableWindow(FALSE);
					}
				}
				if (TRE_b == 1)
				{
					if (b_1_1 == TRUE)
					{
						비겁한고블린.EnableWindow(FALSE);
						깨물기.EnableWindow(FALSE);
						이동의즐거움.EnableWindow(FALSE);
					}
					if (b_1_2 == TRUE)
					{
						밤의사냥꾼.EnableWindow(FALSE);
						깨물기.EnableWindow(FALSE);
						이동의즐거움.EnableWindow(FALSE);
					}
					if (b_2_1 == TRUE)
					{
						밤의사냥꾼.EnableWindow(FALSE);
						비겁한고블린.EnableWindow(FALSE);
						이동의즐거움.EnableWindow(FALSE);
					}
					if (b_2_2 == TRUE)
					{
						밤의사냥꾼.EnableWindow(FALSE);
						비겁한고블린.EnableWindow(FALSE);
						깨물기.EnableWindow(FALSE);
					}
				}
				if (TRE_c == 1)
				{
					if (c_1_1 == TRUE)
					{
						흑마법.EnableWindow(FALSE);
						판다렌의화염작렬.EnableWindow(FALSE);
						마법부스터.EnableWindow(FALSE);
					}
					if (c_1_2 == TRUE)
					{
						깨달음.EnableWindow(FALSE);
						판다렌의화염작렬.EnableWindow(FALSE);
						마법부스터.EnableWindow(FALSE);
					}
					if (c_2_1 == TRUE)
					{
						깨달음.EnableWindow(FALSE);
						흑마법.EnableWindow(FALSE);
						마법부스터.EnableWindow(FALSE);
					}
					if (c_2_2 == TRUE)
					{
						깨달음.EnableWindow(FALSE);
						흑마법.EnableWindow(FALSE);
						판다렌의화염작렬.EnableWindow(FALSE);
					}
				}
				if (TRE_d == 1)
				{
					if (d_1_1 == TRUE)
					{
						아레스의투구.EnableWindow(FALSE);
						단단한벽.EnableWindow(FALSE);
						마법의망토.EnableWindow(FALSE);
					}
					if (d_1_2 == TRUE)
					{
						음과양의조화.EnableWindow(FALSE);
						단단한벽.EnableWindow(FALSE);
						마법의망토.EnableWindow(FALSE);
					}
					if (d_2_1 == TRUE)
					{
						음과양의조화.EnableWindow(FALSE);
						아레스의투구.EnableWindow(FALSE);
						마법의망토.EnableWindow(FALSE);
					}
					if (d_2_2 == TRUE)
					{
						음과양의조화.EnableWindow(FALSE);
						아레스의투구.EnableWindow(FALSE);
						단단한벽.EnableWindow(FALSE);
					}
				}
				if (TRE_e == 1)
				{
					if (e_1_1 == TRUE)
					{
						축복의장화.EnableWindow(FALSE);
						고대신비의마법서.EnableWindow(FALSE);
						산뜻한기분.EnableWindow(FALSE);
					}
					if (e_1_2 == TRUE)
					{
						라식.EnableWindow(FALSE);
						고대신비의마법서.EnableWindow(FALSE);
						산뜻한기분.EnableWindow(FALSE);
					}
					if (e_2_1 == TRUE)
					{
						라식.EnableWindow(FALSE);
						축복의장화.EnableWindow(FALSE);
						산뜻한기분.EnableWindow(FALSE);
					}
					if (e_2_2 == TRUE)
					{
						라식.EnableWindow(FALSE);
						축복의장화.EnableWindow(FALSE);
						고대신비의마법서.EnableWindow(FALSE);
					}
				}
			}
		}
		if ((a_2 == TRUE)&(a_1==TRUE))
		{
			갈망의검.EnableWindow(TRUE);
		}
		if ((b_2 == TRUE) & (b_1 == TRUE))
		{
			지배전투의기본.EnableWindow(TRUE);
			지배푸른영기.EnableWindow(TRUE);
		}
		if ((c_2 == TRUE) & (c_1 == TRUE))
		{
			마법전투의기본.EnableWindow(TRUE);
			마법푸른영기.EnableWindow(TRUE);
		}
		if ((d_2 == TRUE) & (d_1 == TRUE))
		{
			강인한체력.EnableWindow(TRUE);
		}
		if ((e_2 == TRUE) & (e_1 == TRUE))
		{
			활력증진.EnableWindow(TRUE);
			저돌적인공격방식.EnableWindow(TRUE);
			신비한공격방식.EnableWindow(TRUE);
		}
		if (a_3 == TRUE)
		{
			투쟁갑옷무력화.EnableWindow(TRUE);
			투쟁저항무력화.EnableWindow(TRUE);
		}
		if (b_3 == TRUE)
		{
			지배갑옷무력화.EnableWindow(TRUE);
			지배저항무력화.EnableWindow(TRUE);
		}
		if (c_3 == TRUE)
		{
			마법갑옷무력화.EnableWindow(TRUE);
			마법저항무력화.EnableWindow(TRUE);
		}
		if (d_3 == TRUE)
		{
			신비의방패.EnableWindow(TRUE);
			저항의방패.EnableWindow(TRUE);
		}
		if (e_3 == TRUE)
		{
			경험치사기꾼.EnableWindow(TRUE);
			골드도둑.EnableWindow(TRUE);
		}
		if (a_4 == TRUE)
		{
			투쟁타격용분.EnableWindow(TRUE);
			투쟁마법용분.EnableWindow(TRUE);
		}
		if (b_4 == TRUE)
		{
			지배물리용분.EnableWindow(TRUE);
			지배마법용분.EnableWindow(TRUE);
		}
		if (c_4 == TRUE)
		{
			마법물리용분.EnableWindow(TRUE);
			마법마법용분.EnableWindow(TRUE);
		}
		if (d_4 == TRUE)
		{
			긍지최후의방어.EnableWindow(TRUE);
		}
		if (e_4 == TRUE)
		{
			축복최후의방어.EnableWindow(TRUE);
		}
		if (a_5 == TRUE)
		{
			집중사격.EnableWindow(TRUE);
			무자비한연사.EnableWindow(TRUE);
			환상적인공격.EnableWindow(TRUE);
		}
		if (b_5 == TRUE)
		{
			제우스의분노.EnableWindow(TRUE);
			오디세우스의성검.EnableWindow(TRUE);
		}
		if (c_5 == TRUE)
		{
			대마법신비로운메테오.EnableWindow(TRUE);
			마법펀치.EnableWindow(TRUE);
		}
		if (d_5 == TRUE)
		{
			곰발바닥.EnableWindow(TRUE);
			토르의분노.EnableWindow(TRUE);
		}
		if (e_5 == TRUE)
		{
			마법의점멸.EnableWindow(TRUE);
			신의가호.EnableWindow(TRUE);
		}
	}
	CButton 백조의부름;
	CButton 회복의삼지창;
	CButton 밤의사냥꾼;
	CButton 비겁한고블린;
	CButton 깨달음;
	CButton 흑마법;
	CButton 음과양의조화;
	CButton 아레스의투구;
	CButton 라식;
	CButton 축복의장화;
	CButton 신비로운반지;
	CButton 치명적인탄환;
	CButton 깨물기;
	CButton 이동의즐거움;
	CButton 판다렌의화염작렬;
	CButton 마법부스터;
	CButton 단단한벽;
	CButton 마법의망토;
	CButton 고대신비의마법서;
	CButton 산뜻한기분;
	CButton 갈망의검;
	CButton 지배전투의기본;
	CButton 지배푸른영기;
	CButton 마법전투의기본;
	CButton 마법푸른영기;
	CButton 강인한체력;
	CButton 활력증진;
	CButton 저돌적인공격방식;
	CButton 신비한공격방식;
	CButton 투쟁갑옷무력화;
	CButton 투쟁저항무력화;
	CButton 지배갑옷무력화;
	CButton 지배저항무력화;
	CButton 마법갑옷무력화;
	CButton 마법저항무력화;
	CButton 신비의방패;
	CButton 저항의방패;
	CButton 경험치사기꾼;
	CButton 골드도둑;
	CButton 투쟁타격용분;
	CButton 투쟁마법용분;
	CButton 지배물리용분;
	CButton 지배마법용분;
	CButton 마법물리용분;
	CButton 마법마법용분;
	CButton 긍지최후의방어;
	CButton 축복최후의방어;
	CButton 집중사격;
	CButton 무자비한연사;
	CButton 환상적인공격;
	CButton 제우스의분노;
	CButton 오디세우스의성검;
	CButton 대마법신비로운메테오;
	CButton 마법펀치;
	CButton 곰발바닥;
	CButton 토르의분노;
	CButton 마법의점멸;
	CButton 신의가호;
	afx_msg void OnBnClickedButton33();
	afx_msg void OnBnClickedButton34();
	afx_msg void OnBnClickedButton35();
	afx_msg void OnBnClickedButton36();
	afx_msg void OnBnClickedButton37();
	afx_msg void OnBnClickedButton38();
	afx_msg void OnBnClickedButton39();
	afx_msg void OnBnClickedButton40();
	afx_msg void OnBnClickedButton41();
	afx_msg void OnBnClickedButton42();
	afx_msg void OnBnClickedButton43();
	afx_msg void OnBnClickedButton44();
	afx_msg void OnBnClickedButton45();
	afx_msg void OnBnClickedButton46();
	afx_msg void OnBnClickedButton47();
	afx_msg void OnBnClickedButton48();
	afx_msg void OnBnClickedButton49();
	afx_msg void OnBnClickedButton50();
	afx_msg void OnBnClickedButton51();
	afx_msg void OnBnClickedButton52();
	afx_msg void OnBnClickedButton53();
	afx_msg void OnBnClickedButton54();
	afx_msg void OnBnClickedButton55();
	afx_msg void OnBnClickedButton56();
	afx_msg void OnBnClickedButton57();
	afx_msg void OnBnClickedButton58();
	afx_msg void OnBnClickedReset();
	void reset()
	{
		TRE_a = 0;
		TRE_b = 0;
		TRE_c = 0;
		TRE_d = 0;
		TRE_e = 0;
		TRE_count = 0;
		a_1 = FALSE;
		a_2 = FALSE;
		a_3 = FALSE;
		a_4 = FALSE;
		a_5 = FALSE;
		b_1 = FALSE;
		b_2 = FALSE;
		b_3 = FALSE;
		b_4 = FALSE;
		b_5 = FALSE;
		c_1 = FALSE;
		c_2 = FALSE;
		c_3 = FALSE;
		c_4 = FALSE;
		c_5 = FALSE;
		d_1 = FALSE;
		d_2 = FALSE;
		d_3 = FALSE;
		d_4 = FALSE;
		d_5 = FALSE;
		e_1 = FALSE;
		e_2 = FALSE;
		e_3 = FALSE;
		e_4 = FALSE;
		e_5 = FALSE;
		a_1_1 = FALSE;//백조

		a_1_2 = FALSE;//삼지창

		a_2_1 = FALSE;//반지

		a_2_2 = FALSE;//탄환

		a_3_1 = FALSE;//갈망의검

		a_4_1 = FALSE;//갑옷무력화(투쟁)

		a_4_2 = FALSE;//저항무력화(투쟁)

		a_5_1 = FALSE;//물리 용분(투쟁)

		a_5_2 = FALSE;//마법용분(투쟁)

		a_6_1 = FALSE;//집중사격

		a_6_2 = FALSE;//연사

		a_6_3 = FALSE;//환공

		b_1_1 = FALSE;//밤사

		b_1_2 = FALSE;//고블린

		b_2_1 = FALSE;//깨물기

		b_2_2 = FALSE;//이동의즐거움

		b_3_1 = FALSE;//전투의기본(지배)

		b_3_2 = FALSE;//푸른영기(지배)

		b_4_1 = FALSE;//갑옷무력화(지배)

		b_4_2 = FALSE;//저항무력화(지배)

		b_5_1 = FALSE;//물리용분(지배)

		b_5_2 = FALSE;//마법용분(지배)

		b_6_1 = FALSE;//제우스

		b_6_2 = FALSE;//성검

		c_1_1 = FALSE;//깨달음

		c_1_2 = FALSE;//흑마법

		c_2_1 = FALSE;//판다렌

		c_2_2 = FALSE;//마법부스터

		c_3_1 = FALSE;//전투의기본(마법)

		c_3_2 = FALSE;//푸른영기(마법)

		c_4_1 = FALSE;//갑옷무력화(마법)

		c_4_2 = FALSE;//저항무력화(마법)

		c_5_1 = FALSE;//물리용분(마법)

		c_5_2 = FALSE;//마법용분(마법)

		c_6_1 = FALSE;//메테오

		c_6_2 = FALSE;//마펀

		d_1_1 = FALSE;//음양조화

		d_1_2 = FALSE;//아레스

		d_2_1 = FALSE;//단단벽

		d_2_2 = FALSE;//마법망토

		d_3_1 = FALSE;//강인체력

		d_4_1 = FALSE;//신비방패

		d_4_2 = FALSE;//저항방패

		d_5_1 = FALSE;//최후방어

		d_6_1 = FALSE;//곰발

		d_6_2 = FALSE;//토르의분노

		e_1_1 = FALSE;//라식

		e_1_2 = FALSE;//장화

		e_2_1 = FALSE;//마법서

		e_2_2 = FALSE;//기분

		e_3_1 = FALSE;//활력

		e_3_2 = FALSE;//저돌적공격

		e_3_3 = FALSE;//신비공격

		e_4_1 = FALSE;//경사

		e_4_2 = FALSE;//골드도둑

		e_5_1 = FALSE;//최후방어

		e_6_1 = FALSE;//마법점멸

		e_6_2 = FALSE;//가호
		
		
		
	}
	void buttonreset()
	{
		point = 7;
		point_buf.Format(_T("%d"), point);
		dis_point.SetWindowTextW(point_buf);
		//1라인 재활성화
		백조의부름.EnableWindow(TRUE);
		회복의삼지창.EnableWindow(TRUE);
		밤의사냥꾼.EnableWindow(TRUE);
		비겁한고블린.EnableWindow(TRUE);
		깨달음.EnableWindow(TRUE);
		흑마법.EnableWindow(TRUE);
		음과양의조화.EnableWindow(TRUE);
		아레스의투구.EnableWindow(TRUE);
		라식.EnableWindow(TRUE);
		축복의장화.EnableWindow(TRUE);
		//비활성화
		신비로운반지.EnableWindow(TRUE);
		치명적인탄환.EnableWindow(TRUE);

		깨물기.EnableWindow(TRUE);
		이동의즐거움.EnableWindow(TRUE);

		판다렌의화염작렬.EnableWindow(TRUE);
		마법부스터.EnableWindow(TRUE);

		단단한벽.EnableWindow(TRUE);
		마법의망토.EnableWindow(TRUE);

		고대신비의마법서.EnableWindow(TRUE);
		산뜻한기분.EnableWindow(TRUE);

		갈망의검.EnableWindow(FALSE);

		지배전투의기본.EnableWindow(FALSE);
		지배푸른영기.EnableWindow(FALSE);

		마법전투의기본.EnableWindow(FALSE);
		마법푸른영기.EnableWindow(FALSE);

		강인한체력.EnableWindow(FALSE);

		활력증진.EnableWindow(FALSE);
		저돌적인공격방식.EnableWindow(FALSE);
		신비한공격방식.EnableWindow(FALSE);

		투쟁갑옷무력화.EnableWindow(FALSE);
		투쟁저항무력화.EnableWindow(FALSE);

		지배갑옷무력화.EnableWindow(FALSE);
		지배저항무력화.EnableWindow(FALSE);

		마법갑옷무력화.EnableWindow(FALSE);
		마법저항무력화.EnableWindow(FALSE);

		신비의방패.EnableWindow(FALSE);
		저항의방패.EnableWindow(FALSE);

		경험치사기꾼.EnableWindow(FALSE);
		골드도둑.EnableWindow(FALSE);

		투쟁타격용분.EnableWindow(FALSE);
		투쟁마법용분.EnableWindow(FALSE);

		지배물리용분.EnableWindow(FALSE);
		지배마법용분.EnableWindow(FALSE);

		마법물리용분.EnableWindow(FALSE);
		마법마법용분.EnableWindow(FALSE);

		긍지최후의방어.EnableWindow(FALSE);

		축복최후의방어.EnableWindow(FALSE);

		집중사격.EnableWindow(FALSE);
		무자비한연사.EnableWindow(FALSE);
		환상적인공격.EnableWindow(FALSE);
		제우스의분노.EnableWindow(FALSE);
		오디세우스의성검.EnableWindow(FALSE);

		대마법신비로운메테오.EnableWindow(FALSE);
		마법펀치.EnableWindow(FALSE);

		곰발바닥.EnableWindow(FALSE);
		토르의분노.EnableWindow(FALSE);

		마법의점멸.EnableWindow(FALSE);
		신의가호.EnableWindow(FALSE);
	}
	
};
