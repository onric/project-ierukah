#pragma once


// ABI_TREE 대화 상자
int point = 0;
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
};
