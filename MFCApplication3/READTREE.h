#pragma once


// READTREE 대화 상자

class READTREE : public CDialogEx
{
	DECLARE_DYNAMIC(READTREE)

public:
	READTREE(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~READTREE();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TRESTAT };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.
	
	DECLARE_MESSAGE_MAP()


public:
	int charanum;
	chara M_chara;
	void getclass(chara P_chara)
	{

		M_chara = P_chara;
		TRACE("test : %d\n", M_chara.게임횟수);
	}
	afx_msg void OnEnChangeEdit1();
	CEdit 백조의부름;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnBnClickedButton2();
	CEdit 회복의삼지창;
	afx_msg void OnEnChangeEdit3();
	CEdit 밤의사냥꾼;
	CEdit 비겁한고블린;
	CEdit 깨달음;
	CEdit 흑마법;
	CEdit 음과양의조화;
	CEdit 라식;
	CEdit 축복의장화;
	CEdit 아레스의투구;
	CEdit 신비로운반지;
	CEdit 치명적인탄환;
	CEdit 깨물기;
	CEdit 이동의즐거움;
	CEdit 판다렌의화염작렬;
	CEdit 마법부스터;
	CEdit 단단한벽;
	CEdit 마법의망토;
	CEdit 고대신비의마법서;
	CEdit 산뜻한기분;
	CEdit 갈망의검;
	CEdit 지배전투의기본;
	CEdit 지배푸른영기;
	CEdit 마법전투의기본;
	CEdit 마법푸른영기;
	CEdit 강인한체력;
	CEdit 활력증진;
	CEdit 저돌적인공격방식;
	CEdit 신비한공격방식;
	CEdit 투쟁갑옷무력화;
	CEdit 투쟁저항무력화;
	CEdit 지배갑옷무력화;
	CEdit 지배저항무력화;
	CEdit 마법갑옷무력화;
	CEdit 마법저항무력화;
	CEdit 신비의방패;
	CEdit 저항의방패;
	CEdit 경험치사기꾼;
	CEdit 골드도둑;
	CEdit 투쟁타격용분;
	CEdit 투쟁마법용분;
	CEdit 지배물리용분;
	CEdit 지배마법용분;
	CEdit 마법물리용분;
	CEdit 마법마법용분;
	CEdit 긍지최후의방어;
	CEdit 축복최후의방어;
	CEdit 집중사격;
	CEdit 무자비한연사;
	CEdit 환상적인공격;
	CEdit 제우스의분노;
	CEdit 오디세우스의성검;
	CEdit 대마법신비로운메테오;
	CEdit 마법펀치;
	CEdit 곰발바닥;
	CEdit 토르의분노;
	CEdit 마법의점멸;
	CEdit 신의가호;
};
