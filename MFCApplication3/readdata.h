#pragma once


// readdata 대화 상자

class readdata : public CDialogEx
{
	DECLARE_DYNAMIC(readdata)

public:
	readdata(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~readdata();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_readsave };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString inputedname;
	afx_msg void OnBnClickedOk();
	CEdit editcon;
};
