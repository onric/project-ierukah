// readdata.cpp: 구현 파일
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "readdata.h"
#include "afxdialogex.h"

#include "STATUS.h"

FILE* save;
dataSTR databuf;
inline void finddata1()//
{
	bool doen = false;
	for (; doen == false;)
	{
		char buf11 = fgetc(save);
		if (buf11 == '=')
		{
			doen = true;
		}
	}
}//
inline void LINEFEED1(int line)//
{
	fseek(save, 0, SEEK_SET);
	for (int i = 0; i < line; i++)
	{
		for (char buffer = NULL; buffer != '\n';)
		{
			buffer = fgetc(save);
		}
		fseek(save, +1, SEEK_CUR);
	}
}//
// readdata 대화 상자

IMPLEMENT_DYNAMIC(readdata, CDialogEx)

readdata::readdata(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_readsave, pParent)
	, inputedname(_T(""))
{

}

readdata::~readdata()
{
}

void readdata::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, inputedname);
	DDV_MaxChars(pDX, inputedname, 20);
}


BEGIN_MESSAGE_MAP(readdata, CDialogEx)
	ON_BN_CLICKED(IDOK, &readdata::OnBnClickedOk)
END_MESSAGE_MAP()


// readdata 메시지 처리기


void readdata::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	wchar_t *buf;
	char* name;
	int len;
	buf = inputedname.GetBuffer(inputedname.GetLength());
	len = WideCharToMultiByte(CP_ACP, 0, buf, -1, NULL, 0, NULL, NULL);
	 name = new char[len];
	WideCharToMultiByte(CP_ACP, 0, buf, -1, name, len, 0, 0);
	TRACE("LEN:%d\n", len);

	TRACE("TIME:카피전, username=%s \n", name);
	strcpy(name, name);
	//파일 존재확인
	save = fopen(name, "r");
	if (save == NULL)
	{
		AfxMessageBox(_T("해당 유저의 저장소가 없습니다."));
	}
	else
	{
		//값을 읽습니다.
		//read(name, databuf);
		//TRACE("test:%d\n", databuf.test);
		//이 형식은 몬가 안됨 그래서 통짜로 복사, 일단 목표는 돌아가는거니까
		if(true)
		{
			int FEEDDATA = 0;
			fseek(save, 0, SEEK_SET);
			finddata1();
			//로딩중..\n");

			fscanf(save, "%lf", &databuf.vernum);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			if (databuf.vernum != 현재버젼)
			{
				readLegcy();
			}

			fscanf(save, "%d", &databuf.게임횟수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.mmr);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.킬);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.데스);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어시스트);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.주포지션);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.힐러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.피해타입);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마법계수물리뎀);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.복합);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.탱커점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.딜러점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.힐러점수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.요우무_r1);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.요우무_r2);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.요우무_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.이쿠);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레밀리아);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.플랑도르);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r1);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r2);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r3);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_힐러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트모미지);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.파츄리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.우츠호);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스와코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_딜러);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_탱커);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트치르노);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.코마치);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모코우);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사나에);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레티);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유유코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_물리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_마법);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_하이브리드);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.에이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사토리);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.바쿠렌);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.카구야);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.미코);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.누에);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스이카);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			fscanf(save, "%d", &databuf.시키);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화요우무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트플랑);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.헤이메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.홍메이린);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화카구야);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모미지);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화무라사);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.조온);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.악마레이무);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화텐시);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			//-----------
			fscanf(save, "%lf", &databuf.요우무_r1승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.요우무_r2승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.요우무_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레이무승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.사쿠야_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.사쿠야_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.이쿠승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.무라사_물리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.무라사_마법승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.무라사_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레이센_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레이센_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레이센_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레밀리아승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.플랑도르승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.흑화치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴스드요우무_r1승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴스드요우무_r2승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴스드요우무_r3승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.마리사_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.마리사_힐러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.마리사_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.유카리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴트모미지승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.파츄리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.우츠호승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.스와코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.텐시_딜러승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.텐시_탱커승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴트치르노승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.코마치승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.모코우승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴스드메이린승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.사나에승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.레티승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.유유코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.앨리스_물리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.앨리스_마법승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.앨리스_하이브리드승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.에이린승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.사토리승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.바쿠렌승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.카구야승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.미코승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.누에승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.스이카승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.시키_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.유카_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.흑화요우무_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.어드밴트플랑_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.헤이메이린_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.홍메이린_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.흑화카구야_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%lf", &databuf.모미지_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//모미지승률을 로딩하엿습니다\n");//

			fscanf(save, "%lf", &databuf.흑화무라사_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//흑화무라사승률을 로딩하엿습니다\n");//

			fscanf(save, "%lf", &databuf.조온_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//조온승률을 로딩하엿습니다\n");//

			fscanf(save, "%lf", &databuf.악마레이무_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//악마레이무승률을 로딩하엿습니다\n");//

			fscanf(save, "%lf", &databuf.흑화텐시_승률);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//흑화텐시승률을 로딩하엿습니다\n");//

			//-----------
			fscanf(save, "%d", &databuf.요우무_r1승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//요우무_r1승수를 로딩하엿습니다\n");//

			fscanf(save, "%d", &databuf.요우무_r2승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.요우무_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이무승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.이쿠승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_물리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_마법승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레밀리아승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.플랑도르승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r1승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r2승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r3승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_힐러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트모미지승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.파츄리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.우츠호승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스와코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_딜러승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_탱커승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트치르노승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.코마치승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모코우승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드메이린승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사나에승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레티승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유유코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_물리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_마법승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_하이브리드승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.에이린승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사토리승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.바쿠렌승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.카구야승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.미코승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.누에승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스이카승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.시키_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화요우무_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트플랑_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.헤이메이린_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.홍메이린_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화카구야_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모미지_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화무라사_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.조온_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.악마레이무_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화텐시_승수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			//----------------
			fscanf(save, "%d", &databuf.요우무_r1패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.요우무_r2패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();


			fscanf(save, "%d", &databuf.요우무_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이무패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사쿠야_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.이쿠패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_물리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_마법패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.무라사_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레이센_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레밀리아패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.플랑도르패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r1패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r2패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드요우무_r3패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_힐러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.마리사_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트모미지패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.파츄리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.우츠호패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스와코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_딜러패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.텐시_탱커패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트치르노패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.코마치패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모코우패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴스드메이린패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사나에패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.레티패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유유코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_물리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_마법패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.앨리스_하이브리드패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.에이린패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.사토리패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.바쿠렌패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.카구야패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.미코패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.누에패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.스이카패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.시키_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.유카_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화요우무_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.어드밴트플랑_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.헤이메이린_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.홍메이린_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화카구야_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.모미지_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화무라사_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.조온_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.악마레이무_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.흑화텐시_패수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();
			//------------------------
			fscanf(save, "%d", &databuf.연승횟수);
			FEEDDATA++;
			LINEFEED1(FEEDDATA);
			finddata1();

			fscanf(save, "%d", &databuf.연패횟수);
			//FEEDDATA++;
			//LINEFEED1(FEEDDATA);
			//finddata1();

			}
		//표현합니다
		STATUS stat;
		databuf.test = 6974;
		TRACE("TIME:readdata, test: %d\n ", databuf.test);
		stat.GetStruct(databuf);
		stat.DoModal();
		TRACE("TIME:readdata, FCLOSE\n");
		fclose(save);
	}
	delete name;
	


	
	CDialogEx::OnOK();
}
