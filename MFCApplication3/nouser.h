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
	char name[20];
	int kill, death, assist;
	int win;
	int lose;
	int chara;
	void GetName(char* P_name)
	{
		
		TRACE("TIME:COPY, P_name=%s \n", P_name);
		strcpy(name,P_name);
		TRACE("TIME:COPY, name=%s \n", name);
	}
	void GetStat(int P_kill, int P_death, int P_assist,BOOL wol)
	{
		kill = P_kill;
		death = P_death;
		assist = P_assist;
		if (wol == TRUE)
		{
			win = 1;
		}
		else
		{
			lose = 1;
		}
		TRACE("kda = %d/%d/%d", P_kill, P_death, P_assist);
	}
	void rcvcha(int character)
	{
		chara = character;
	}
	afx_msg void OnBnClickedCancel();
};
