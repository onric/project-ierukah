#pragma once


// STATUS 대화 상자

class STATUS : public CDialog
{
	DECLARE_DYNAMIC(STATUS)

public:
	STATUS(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~STATUS();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_STATUS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	dataSTR aaa;
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox listMENU;
	CStatic DISPLAY;
	afx_msg void OnBnClickedButton1();
};
