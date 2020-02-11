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
	int point = 7;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
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
	//a=투쟁,b=지배,c=마법,d=긍지,e=축복
	//1,2,3,4,5..=줄 개수
	// 이상의 변수는 특성을 찍을수 있는 요구조건을 구별하기 위함임


	//이하는 특성의 선택여부임
	//앞 두자리는 위에거랑 같음/1=좌,2=우
	bool a_1_1 = FALSE;//백조
	bool a_1_2 = FALSE;//삼지창
	bool a_2_1 = FALSE;//반지
	bool a_2_2 = FALSE;//탄환
	bool a_3_1 = FALSE;//갈망의검
	bool a_4_1 = FALSE;//갑옷무력화(투쟁)
	bool a_4_2 = FALSE;//저항무력화(투쟁)
	bool a_5_1 = FALSE;//물리 용분(투쟁)
	bool a_5_2 = FALSE;//마법용분(투쟁)
	bool a_6_1 = FALSE;//집중사격
	bool a_6_2 = FALSE;//연사
	bool a_6_3 = FALSE;//환공
	bool b_1_1 = FALSE;//밤사
	bool b_1_2 = FALSE;//고블린
	bool b_2_1 = FALSE;//깨물기
	bool b_2_2 = FALSE;//이동의즐거움
	bool b_3_1 = FALSE;//전투의기본(지배)
	bool b_3_2 = FALSE;//푸른영기(지배)
	bool b_4_1 = FALSE;//갑옷무력화(지배)
	bool b_4_2 = FALSE;//저항무력화(지배)
	bool b_5_1 = FALSE;//물리용분(지배)
	bool b_5_2 = FALSE;//마법용분(지배)
	bool b_6_1 = FALSE;//제우스
	bool b_6_2 = FALSE;//성검
	bool c_1_1 = FALSE;//깨달음
	bool c_1_2 = FALSE;//흑마법
	bool c_2_1 = FALSE;//판다렌
	bool c_2_2 = FALSE;//마법부스터
	bool c_3_1 = FALSE;//전투의기본(마법)
	bool c_3_2 = FALSE;//푸른영기(마법)
	bool c_4_1 = FALSE;//갑옷무력화(마법)
	bool c_4_2 = FALSE;//저항무력화(마법)
	bool c_5_1 = FALSE;//물리용분(마법)
	bool c_5_2 = FALSE;//마법용분(마법)
	bool c_6_1 = FALSE;//메테오
	bool c_6_2 = FALSE;//마펀
	bool d_1_1 = FALSE;//음양조화
	bool d_1_2 = FALSE;//아레스
	bool d_2_1 = FALSE;//단단벽
	bool d_2_2 = FALSE;//마법망토
	bool d_3_1 = FALSE;//강인체력
	bool d_4_1 = FALSE;//신비방패
	bool d_4_2 = FALSE;//저항방패
	bool d_5_1 = FALSE;//최후방어
	bool d_6_1 = FALSE;//곰발
	bool d_6_2 = FALSE;//토르의분노
	bool e_1_1 = FALSE;//라식
	bool e_1_2 = FALSE;//장화
	bool e_2_1 = FALSE;//마법서
	bool e_2_2 = FALSE;//기분
	bool e_3_1 = FALSE;//활력
	bool e_3_2 = FALSE;//저돌적공격
	bool e_3_3 = FALSE;//신비공격
	bool e_4_1 = FALSE;//경사
	bool e_4_2 = FALSE;//골드도둑
	bool e_5_1 = FALSE;//최후방어
	bool e_6_1 = FALSE;//마법점멸
	bool e_6_2 = FALSE;//가호
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
	void enabling()
	{
		if (a_1 == TRUE)
		{
			신비로운반지.EnableWindow(TRUE);
			치명적인탄환.EnableWindow(TRUE);
		}
		if (b_1 == TRUE)
		{
			깨물기.EnableWindow(TRUE);
			이동의즐거움.EnableWindow(TRUE);
		}
	}
};
