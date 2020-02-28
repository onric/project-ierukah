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
};
