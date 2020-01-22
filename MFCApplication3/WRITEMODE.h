#pragma once


// WRITEMODE 대화 상자

class WRITEMODE : public CDialog
{
	DECLARE_DYNAMIC(WRITEMODE)

public:
	WRITEMODE(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~WRITEMODE();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	// 유저이름입니다.	// 유저이름입니다.
	CString USERNAME;
	// 킬수입니다
	int kill;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit1();
	CString 유저네임;
	afx_msg void OnCbnSelchangeCombo1();
	// 캐릭터 선택 콤보 박스입니다.
	CComboBox Dropbox;
	
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnEnChangeEdit2();
	int death;
	int assist;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedRadio1();
	CButton ISBROOM;
	CButton WIN;
	afx_msg void OnBnClickedCheck2();
	CButton LOSE;
};
