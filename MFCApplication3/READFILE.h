#pragma once


// READFILE 대화 상자

class READFILE : public CDialog
{
	DECLARE_DYNAMIC(READFILE)

public:
	READFILE(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~READFILE();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_READ };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CListBox savelist;

	// 확인버튼 제어변수
	CButton OKBut;
	afx_msg void OnBnClickedSearch();
	afx_msg void OnBnClickedCancel();
};
