// READFILE.cpp: 구현 파일
//

//!!!!!!!! 이 파일은 멍청한 제작자가 나중에 구현하려는 거임
#include "stdafx.h"
#include "MFCApplication3.h"
#include "READFILE.h"
#include "afxdialogex.h"

/*FILE* INDEX;
FILE* save;
*/
// READFILE 대화 상자

IMPLEMENT_DYNAMIC(READFILE, CDialog)

READFILE::READFILE(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_READ, pParent)
{

}

READFILE::~READFILE()
{
}

void READFILE::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, savelist);
	DDX_Control(pDX, IDOK, OKBut);
}


BEGIN_MESSAGE_MAP(READFILE, CDialog)

	ON_BN_CLICKED(IDC_BUTTON2, &READFILE::OnBnClickedSearch)
	ON_BN_CLICKED(IDCANCEL, &READFILE::OnBnClickedCancel)
END_MESSAGE_MAP()


// READFILE 메시지 처리기






void READFILE::OnBnClickedSearch()
{
	/*
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	INDEX = fopen(".\\List\\list", "r+");
	TRACE("리스트 읽기 시도\n");
	if (INDEX == NULL)
	{
		if ((_waccess(_T(".\\List"), 0)) == -1)
		{
			CreateDirectory(_T(".\\List"),NULL);
		}

		INDEX = fopen(".\\List\\list", "w+");
		TRACE("리스트 생성 시도\n");
		savelist.AddString(_T("아직 아무 저장소도 없습니다."));
		OKBut.EnableWindow(FALSE);
		
	}
	else
	{
		OKBut.EnableWindow(TRUE);
		char buffer[20];
		int FEED = 0;
		char a = NULL;
		int j = 0;
		//시작지점 찾기
		for (; a != '=';)
		{
			a = fgetc(INDEX);
		}
		fscanf(INDEX, "%d", &j);
		//인덱스를 분석합니다
		/*
		char bf = NULL;
		for (int i = 0;bf!='=';i++)
		{
			if (bf == '=')
			{
				break;
			}
			for (j = 0;;)
			{

				bf = fgetc(INDEX);
				TRACE("bf:%c \n", bf);
				if (bf == '\n')
				{
					break;
				}
				if (bf != '\n')
				{

					buffer[j] = bf;
					TRACE("buffer:%c \n", buffer[j]);
				}
				else if (bf == '=')
				{
					break;
				}
				j++;
			}
			if (bf == '=')
			{
				break;
			}
			TRACE("%d\n", j);
			TRACE("%s\n",buffer);
			char* namebuf2 = new char[j];
			TRACE("---\n");
			for (int k = 0; k != j;)
			{

				namebuf2[k] = buffer[k];
				TRACE("buffer:%s \n", namebuf2);
				k++;
			}
			TRACE("buffer:%s \n", namebuf2);
			CString namelist;
			namelist.Format(_T("%s"), namebuf2);
			savelist.AddString(namelist);
			j = 0;
			delete namebuf2;
		}

	}
	
		for(int k=0;k<=j;k++)
		{
			fgets(buffer, sizeof(buffer), INDEX);
			TRACE("%s\n", buffer);
			if (buffer == "=END\n")
			{
				break;
			}
			//CString aaaa = (LPCSTR)(LPSTR)buffer;
			//char* toss = buffer;
			//aaaa.Format("%s", toss);
			//savelist.AddString(aaaa);
		}
		TRACE("!---!\n");
	}
	*/
}


void READFILE::OnBnClickedCancel()
{
	/*
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	fclose(INDEX);
	CDialog::OnCancel();
*/
}
