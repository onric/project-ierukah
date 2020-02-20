#pragma once

// nouser 대화 상자

class nouser : public CDialog
{
	DECLARE_DYNAMIC(nouser)

public:
	nouser(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~nouser();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	BOOL OKNO = FALSE;
};
