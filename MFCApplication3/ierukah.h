
#pragma once
#define ������ unsigned int
#define ������ char 
#define �Ǽ��� double
#define ������� 1.0
#define ĳ������ 60
//dmdrldlt

static FILE *savefile;
//

struct dataSTR
{
	int test = 3;
	double vernum = 0 ;
	int ����Ƚ�� = 0 ;//
	int �¼� = 0 ;//
	int �м� = 0 ;//
	�Ǽ��� �·� = 0 ;//

	int ų = 0 ;//
	int ���� = 0 ;//
	int ��ý�Ʈ = 0 ;//

	int �������� = 0 ;//0=����,1=��,2=��,3=��
	int ��Ŀ = 0 ;//
	int ���� = 0 ;//
	int ���� = 0 ;//


	������ ����Ÿ�� = 0 ;//
	������ ���� = 0 ;//
	������ ���� = 0 ;//
	������ ������������� = 0 ;//
	������ ���� = 0;

	������ ��Ŀ���� = 0 ;//
	������ �������� = 0 ;//
	������ �������� = 0 ;//


	������ ��칫_r1 = 0 ;//
	������ ��칫_r2 = 0 ;//
	������ ��칫_���̺긮�� = 0 ;//
	������ ���̹� = 0 ;//
	������ ġ���� = 0 ;//
	������ �����_���� = 0 ;
	������ �����_��Ŀ = 0 ;
	������ ���� = 0 ;//
	������ �����_���� = 0 ;//
	������ �����_���� = 0 ;//
	������ �����_���̺긮�� = 0 ;//
	������ ���̼�_��Ŀ = 0 ;//
	������ ���̼�_���� = 0 ;//
	������ ���̼�_���̺긮�� = 0 ;//
	������ �ٸ���_���� = 0 ;//
	������ �ٸ���_���� = 0 ;//
	������ �ٸ���_���̺긮�� = 0 ;//
	������ ���и��� = 0 ;//
	������ �ö����� = 0 ;//
	������ ��ȭġ���� = 0 ;//
	������ ���꽺���칫_r1 = 0 ;//
	������ ���꽺���칫_r2 = 0 ;//
	������ ���꽺���칫_r3 = 0 ;//
	������ ������_���� = 0 ;//
	������ ������_���� = 0 ;//
	������ ������_���̺긮�� = 0 ;//
	������ ��ī�� = 0 ;//
	������ ���ڿ� = 0 ;//
	������ ����Ʈ����� = 0 ;//
	������ ���� = 0 ;//
	������ ����ȣ = 0 ;//
	������ ������ = 0 ;//
	������ �ٽ�_���� = 0 ;
	������ �ٽ�_��Ŀ = 0 ;
	������ ����Ʈġ���� = 0 ;//
	������ �ڸ�ġ = 0 ;//
	������ �ƾ� = 0 ;//
	������ ���꽺����̸� = 0 ;//
	������ �糪�� = 0 ;//
	������ ��Ƽ = 0 ;//
	������ ������ = 0 ;//
	������ ���̸� = 0 ;
	������ ���丮 = 0 ;
	������ ���� = 0 ;
	������ ī���� = 0 ;
	������ ���� = 0 ;
	������ ���� = 0 ;
	������ ����ī = 0 ;

	������ ��Ű = 0 ;
	������ ��ī = 0 ;
	������ ��ȭ��칫 = 0 ;
	������ ����Ʈ�ö� = 0 ;
	������ ���̸��̸� = 0 ;
	������ ȫ���̸� = 0 ;
	������ ��ȭī���� = 0 ;
	������ ����� = 0 ;
	������ ��ȭ����� = 0 ;
	������ ���� = 0 ;
	������ �Ǹ����̹� = 0 ;
	������ ��ȭ�ٽ� = 0 ;
	//-----------------
	������ ��칫_r1�¼� = 0 ;//
	������ ��칫_r2�¼� = 0 ;//
	������ ��칫_���̺긮��¼� = 0 ;//
	������ ���̹��¼� = 0 ;//
	������ ġ����¼� = 0 ;//
	������ �����_�����¼� = 0 ;
	������ �����_��Ŀ�¼� = 0 ;
	������ ����¼� = 0 ;//
	������ �����_�����¼� = 0 ;//
	������ �����_�����¼� = 0 ;//
	������ �����_���̺긮��¼� = 0 ;//
	������ ���̼�_��Ŀ�¼� = 0 ;//
	������ ���̼�_�����¼� = 0 ;//
	������ ���̼�_���̺긮��¼� = 0 ;//
	������ �ٸ���_�����¼� = 0 ;//
	������ �ٸ���_�����¼� = 0 ;//
	������ �ٸ���_���̺긮��¼� = 0 ;//
	������ ���и��ƽ¼� = 0 ;//
	������ �ö������¼� = 0 ;//
	������ ��ȭġ����¼� = 0 ;//
	������ ���꽺���칫_r1�¼� = 0 ;//
	������ ���꽺���칫_r2�¼� = 0 ;//
	������ ���꽺���칫_r3�¼� = 0 ;//
	������ ������_�����¼� = 0 ;//
	������ ������_�����¼� = 0 ;//
	������ ������_���̺긮��¼� = 0 ;//
	������ ��ī���¼� = 0 ;//
	������ ���ڿ�¼� = 0 ;//
	������ ����Ʈ������¼� = 0 ;//
	������ ���򸮽¼� = 0 ;//
	������ ����ȣ�¼� = 0 ;//
	������ �����ڽ¼� = 0 ;//
	������ �ٽ�_�����¼� = 0 ;//
	������ �ٽ�_��Ŀ�¼� = 0 ;
	������ ����Ʈġ����¼� = 0 ;//
	������ �ڸ�ġ�¼� = 0 ;//
	������ �ƾ߽¼� = 0 ;//
	������ ���꽺����̸��¼� = 0 ;//
	������ �糪���¼� = 0 ;//
	������ ��Ƽ�¼� = 0 ;//
	������ �����ڽ¼� = 0 ;
	������ ���̸��¼� = 0 ;
	������ ���丮�¼� = 0 ;
	������ �����¼� = 0 ;
	������ ī���߽¼� = 0 ;
	������ ���ڽ¼� = 0 ;
	������ �����¼� = 0 ;
	������ ����ī�¼� = 0 ;

	������ ��Ű_�¼� = 0 ;
	������ ��ī_�¼� = 0 ;
	������ ��ȭ��칫_�¼� = 0 ;
	������ ����Ʈ�ö�_�¼� = 0 ;
	������ ���̸��̸�_�¼� = 0 ;
	������ ȫ���̸�_�¼� = 0 ;
	������ ��ȭī����_�¼� = 0 ;
	������ �����_�¼� = 0 ;
	������ ��ȭ�����_�¼� = 0 ;
	������ ����_�¼� = 0 ;
	������ �Ǹ����̹�_�¼� = 0 ;
	������ ��ȭ�ٽ�_�¼� = 0 ;
	//--------------
	������ ��칫_r1�м� = 0 ;//
	������ ��칫_r2�м� = 0 ;//
	������ ��칫_���̺긮���м� = 0 ;//
	������ ���̹��м� = 0 ;//
	������ ġ�����м� = 0 ;//
	������ �����_�����м� = 0 ;
	������ �����_��Ŀ�м� = 0 ;
	������ �����м� = 0 ;//
	������ �����_�����м� = 0 ;//
	������ �����_�����м� = 0 ;//
	������ �����_���̺긮���м� = 0 ;//
	������ ���̼�_��Ŀ�м� = 0 ;//
	������ ���̼�_�����м� = 0 ;//
	������ ���̼�_���̺긮���м� = 0 ;//
	������ �ٸ���_�����м� = 0 ;//
	������ �ٸ���_�����м� = 0 ;//
	������ �ٸ���_���̺긮���м� = 0 ;//
	������ ���и����м� = 0 ;//
	������ �ö������м� = 0 ;//
	������ ��ȭġ�����м� = 0 ;//
	������ ���꽺���칫_r1�м� = 0 ;//
	������ ���꽺���칫_r2�м� = 0 ;//
	������ ���꽺���칫_r3�м� = 0 ;//
	������ ������_�����м� = 0 ;//
	������ ������_�����м� = 0 ;//
	������ ������_���̺긮���м� = 0 ;//
	������ ��ī���м� = 0 ;//
	������ ���ڿ��м� = 0 ;//
	������ ����Ʈ������м� = 0 ;//
	������ �����м� = 0 ;//
	������ ����ȣ�м� = 0 ;//
	������ �������м� = 0 ;//
	������ �ٽ�_�����м� = 0 ;//
	������ �ٽ�_��Ŀ�м� = 0 ;
	������ ����Ʈġ�����м� = 0 ;//
	������ �ڸ�ġ�м� = 0 ;//
	������ �ƾ��м� = 0 ;//
	������ ���꽺����̸��м� = 0 ;//
	������ �糪���м� = 0 ;//
	������ ��Ƽ�м� = 0 ;//
	������ �������м� = 0 ;//
	������ ���̸��м� = 0 ;
	������ ���丮�м� = 0 ;
	������ �����м� = 0 ;
	������ ī�����м� = 0 ;
	������ �����м� = 0 ;
	������ �����м� = 0 ;
	������ ����ī�м� = 0 ;

	������ ��Ű_�м� = 0 ;
	������ ��ī_�м� = 0 ;
	������ ��ȭ��칫_�м� = 0 ;
	������ ����Ʈ�ö�_�м� = 0 ;
	������ ���̸��̸�_�м� = 0 ;
	������ ȫ���̸�_�м� = 0 ;
	������ ��ȭī����_�м� = 0 ;
	������ �����_�м� = 0 ;
	������ ��ȭ�����_�м� = 0 ;
	������ ����_�м� = 0 ;
	������ �Ǹ����̹�_�м� = 0 ;
	������ ��ȭ�ٽ�_�м� = 0 ;
	//------
	�Ǽ��� ��칫_r1�·� = 0 ;//
	�Ǽ��� ��칫_r2�·� = 0 ;//
	�Ǽ��� ��칫_���̺긮��·� = 0 ;//
	�Ǽ��� ���̹��·� = 0 ;//
	�Ǽ��� ġ����·� = 0 ;//
	�Ǽ��� �����_�����·� = 0 ;
	�Ǽ��� �����_��Ŀ�·� = 0 ;
	�Ǽ��� ����·� = 0 ;//
	�Ǽ��� �����_�����·� = 0 ;//
	�Ǽ��� �����_�����·� = 0 ;//
	�Ǽ��� �����_���̺긮��·� = 0 ;//
	�Ǽ��� ���̼�_��Ŀ�·� = 0 ;//
	�Ǽ��� ���̼�_�����·� = 0 ;//
	�Ǽ��� ���̼�_���̺긮��·� = 0 ;//
	�Ǽ��� �ٸ���_�����·� = 0 ;//
	�Ǽ��� �ٸ���_�����·� = 0 ;//
	�Ǽ��� �ٸ���_���̺긮��·� = 0 ;//
	�Ǽ��� ���и��ƽ·� = 0 ;//
	�Ǽ��� �ö������·� = 0 ;//
	�Ǽ��� ��ȭġ����·� = 0 ;//
	�Ǽ��� ���꽺���칫_r1�·� = 0 ;//
	�Ǽ��� ���꽺���칫_r2�·� = 0 ;//
	�Ǽ��� ���꽺���칫_r3�·� = 0 ;//
	�Ǽ��� ������_�����·� = 0 ;//
	�Ǽ��� ������_�����·� = 0 ;//
	�Ǽ��� ������_���̺긮��·� = 0 ;//
	�Ǽ��� ��ī���·� = 0 ;//
	�Ǽ��� ���ڿ�·� = 0 ;//
	�Ǽ��� ����Ʈ������·� = 0 ;//
	�Ǽ��� ���򸮽·� = 0 ;//
	�Ǽ��� ����ȣ�·� = 0 ;//
	�Ǽ��� �����ڽ·� = 0 ;//
	�Ǽ��� �ٽ�_�����·� = 0 ;//
	�Ǽ��� �ٽ�_��Ŀ�·� = 0 ;
	�Ǽ��� ����Ʈġ����·� = 0 ;//
	�Ǽ��� �ڸ�ġ�·� = 0 ;//
	�Ǽ��� �ƾ߽·� = 0 ;//
	�Ǽ��� ���꽺����̸��·� = 0 ;//
	�Ǽ��� �糪���·� = 0 ;//
	�Ǽ��� ��Ƽ�·� = 0 ;//
	�Ǽ��� �����ڽ·� = 0 ;//
	�Ǽ��� ���̸��·� = 0 ;//
	�Ǽ��� ���丮�·� = 0 ;
	�Ǽ��� �����·� = 0 ;
	�Ǽ��� ī���߽·� = 0 ;
	�Ǽ��� ���ڽ·� = 0 ;
	�Ǽ��� �����·� = 0 ;
	�Ǽ��� ����ī�·� = 0 ;

	�Ǽ��� ��Ű_�·� = 0 ;
	�Ǽ��� ��ī_�·� = 0 ;
	�Ǽ��� ��ȭ��칫_�·� = 0 ;
	�Ǽ��� ����Ʈ�ö�_�·� = 0 ;
	�Ǽ��� ���̸��̸�_�·� = 0 ;
	�Ǽ��� ȫ���̸�_�·� = 0 ;
	�Ǽ��� ��ȭī����_�·� = 0 ;
	�Ǽ��� �����_�·� = 0 ;
	�Ǽ��� ��ȭ�����_�·� = 0 ;
	�Ǽ��� ����_�·� = 0 ;
	�Ǽ��� �Ǹ����̹�_�·� = 0 ;
	�Ǽ��� ��ȭ�ٽ�_�·� = 0 ;
	//-------------
	������ mmr = 0 ;
	������ ����Ƚ�� = 0 ;
	������ ����Ƚ�� = 0 ;
};

//


inline void finddata()//
{
	bool doen = false;
	for (; doen == false;)
	{
		char buf11 = fgetc(savefile);
		if (buf11 == '=')
		{
			doen = true;
		}
	}
}//
inline void LINEFEED(int line)//
{
	fseek(savefile, 0, SEEK_SET);
	for (int i = 0; i < line; i++)
	{
		for (char buffer = NULL; buffer != '\n';)
		{
			buffer = fgetc(savefile);
		}
		fseek(savefile, +1, SEEK_CUR);
	}
}//
static void readLegcy()
{
	AfxMessageBox(_T("����Ұ� �������Դϴ�. �ٵ� ���� �����ȵ�"));
}
static void put(char* name, bool triger, dataSTR data)
{
	    TRACE("TIME:1,test=%d\n", data.��칫_���̺긮��);
		savefile = fopen(name, "w");
		if ((triger == TRUE)&(savefile == NULL))
		{
			TRACE("name=%s", name);
			AfxMessageBox(_T("����! ����� ������ �����߽��ϴ�."));
		}
		fflush(savefile);
		fseek(savefile, 0, SEEK_SET);
		data.vernum = �������;
		fprintf(savefile, "����=%2lf\n", data.vernum);
		fprintf(savefile, "����Ƚ��=%d\n", data.����Ƚ��);
		fprintf(savefile, "��ġ����ŷ��ũ=%d\n", data.mmr);
		fprintf(savefile, "�¼�=%d\n", data.�¼�);
		fprintf(savefile, "�м�=%d\n", data.�м�);
		fprintf(savefile, "�·�=%f\n", data.�·�);
		fprintf(savefile, "ų=%d\n", data.ų);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "��ý�Ʈ=%d\n", data.��ý�Ʈ);
		fprintf(savefile, "��������=%d\n", data.��������);
		fprintf(savefile, "��Ŀ=%d\n", data.��Ŀ);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����Ÿ��=%d\n", data.����Ÿ��);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "�������������=%d\n", data.�������������);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "��Ŀ����=%d\n", data.��Ŀ����);//15
		fprintf(savefile, "��������=%d\n", data.��������);//16
		fprintf(savefile, "��������=%d\n", data.��������);//17
		//
		fprintf(savefile, "��칫_r1=%d\n", data.��칫_r1);
		fprintf(savefile, "��칫_r2=%d\n", data.��칫_r2);
		fprintf(savefile, "��칫_���̺긮��=%d\n", data.��칫_���̺긮��);
		fprintf(savefile, "���̹�=%d\n", data.���̹�);
		fprintf(savefile, "ġ����=%d\n", data.ġ����);
		fprintf(savefile, "�����_����=%d\n", data.�����_����);
		fprintf(savefile, "�����_��Ŀ=%d\n", data.�����_��Ŀ);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "�����_����=%d\n", data.�����_����);
		fprintf(savefile, "�����_����=%d\n", data.�����_����);
		fprintf(savefile, "�����_���̺긮��=%d\n", data.�����_���̺긮��);
		fprintf(savefile, "���̼�_����=%d\n", data.���̼�_����);
		fprintf(savefile, "���̼�_��Ŀ=%d\n", data.���̼�_��Ŀ);
		fprintf(savefile, "���̼�_���̺긮��=%d\n", data.���̼�_���̺긮��);
		fprintf(savefile, "���и���=%d\n", data.���и���);
		fprintf(savefile, "�ö�����=%d\n", data.�ö�����);
		fprintf(savefile, "��ȭġ����=%d\n", data.��ȭġ����);
		fprintf(savefile, "���꽺���칫_r1=%d\n", data.���꽺���칫_r1);
		fprintf(savefile, "���꽺���칫-r2=%d\n", data.���꽺���칫_r2);
		fprintf(savefile, "���꽺���칫_r3=%d\n", data.���꽺���칫_r3);
		fprintf(savefile, "������_����=%d\n", data.������_����);
		fprintf(savefile, "������_����=%d\n", data.������_����);
		fprintf(savefile, "������_���̺긮��=%d\n", data.������_���̺긮��);
		fprintf(savefile, "��ī��=%d\n", data.��ī��);
		fprintf(savefile, "����Ʈ�����=%d\n", data.����Ʈ�����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����ȣ=%d\n", data.����ȣ);
		fprintf(savefile, "������=%d\n", data.������);
		fprintf(savefile, "�ٽ�_����=%d\n", data.�ٽ�_����);
		fprintf(savefile, "�ٽ�_��Ŀ=%d\n", data.�ٽ�_��Ŀ);
		fprintf(savefile, "����Ʈġ����=%d\n", data.����Ʈġ����);
		fprintf(savefile, "�ڸ�ġ=%d\n", data.�ڸ�ġ);
		fprintf(savefile, "���ڿ�=%d\n", data.���ڿ�);
		fprintf(savefile, "���꽺����̸�=%d\n", data.���꽺����̸�);
		fprintf(savefile, "�糪��=%d\n", data.�糪��);
		fprintf(savefile, "��Ƽ=%d\n", data.��Ƽ);
		fprintf(savefile, "������=%d\n", data.������);
		fprintf(savefile, "�ٸ���_����=%d\n", data.�ٸ���_����);
		fprintf(savefile, "�ٸ���_����=%d\n", data.�ٸ���_����);
		fprintf(savefile, "�ٸ���_���̺긮��=%d\n", data.�ٸ���_���̺긮��);
		fprintf(savefile, "���̸�=%d\n", data.���̸�);
		fprintf(savefile, "���丮=%d\n", data.���丮);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "ī����=%d\n", data.ī����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "����ī=%d\n", data.����ī);

		fprintf(savefile, "��Ű=%d\n", data.��Ű);
		fprintf(savefile, "��ī=%d\n", data.��ī);
		fprintf(savefile, "��ȭ��칫=%d\n", data.��ȭ��칫);
		fprintf(savefile, "����Ʈ�ö�=%d\n", data.����Ʈ�ö�);
		fprintf(savefile, "���̸��̸�=%d\n", data.���̸��̸�);
		fprintf(savefile, "ȫ���̸�=%d\n", data.ȫ���̸�);
		fprintf(savefile, "��ȭī����=%d\n", data.��ȭī����);
		fprintf(savefile, "�����=%d\n", data.�����);
		fprintf(savefile, "��ȭ�����=%d\n", data.��ȭ�����);
		fprintf(savefile, "����=%d\n", data.����);
		fprintf(savefile, "�Ǹ����̹�=%d\n", data.�Ǹ����̹�);
		fprintf(savefile, "��ȭ�ٽ�=%d\n", data.��ȭ�ٽ�);
		//----------
		fprintf(savefile, "��칫_r1�·�=%f\n", data.��칫_r1�·�);
		fprintf(savefile, "��칫_r2�·�=%f\n", data.��칫_r2�·�);
		fprintf(savefile, "��칫_���̺긮��·�=%f\n", data.��칫_���̺긮��·�);
		fprintf(savefile, "���̹��·�=%f\n", data.���̹��·�);
		fprintf(savefile, "ġ����·�=%f\n", data.ġ����·�);
		fprintf(savefile, "�����_�����·�=%f\n", data.�����_�����·�);
		fprintf(savefile, "�����_��Ŀ�·�=%f\n", data.�����_��Ŀ�·�);
		fprintf(savefile, "����·�=%f\n", data.����·�);
		fprintf(savefile, "�����_�����·�=%f\n", data.�����_�����·�);
		fprintf(savefile, "�����_�����·�=%f\n", data.�����_�����·�);
		fprintf(savefile, "�����_���̺긮��·�=%f\n", data.�����_���̺긮��·�);
		fprintf(savefile, "���̼�_�����·�=%f\n", data.���̼�_�����·�);
		fprintf(savefile, "���̼�_��Ŀ�·�=%f\n", data.���̼�_��Ŀ�·�);
		fprintf(savefile, "���̼�_���̺긮��·�=%f\n", data.���̼�_���̺긮��·�);
		fprintf(savefile, "���и��ƽ·�=%f\n", data.���и��ƽ·�);
		fprintf(savefile, "�ö������·�=%f\n", data.�ö������·�);
		fprintf(savefile, "��ȭġ����·�=%f\n", data.��ȭġ����·�);
		fprintf(savefile, "���꽺���칫_r1�·�=%f\n", data.���꽺���칫_r1�·�);
		fprintf(savefile, "���꽺���칫-r2�·�=%f\n", data.���꽺���칫_r2�·�);
		fprintf(savefile, "���꽺���칫_r3�·�=%f\n", data.���꽺���칫_r3�·�);
		fprintf(savefile, "������_�����·�=%f\n", data.������_�����·�);
		fprintf(savefile, "������_�����·�=%f\n", data.������_�����·�);
		fprintf(savefile, "������_���̺긮��·�=%f\n", data.������_���̺긮��·�);
		fprintf(savefile, "��ī���·�=%f\n", data.��ī���·�);
		fprintf(savefile, "����Ʈ������·�=%f\n", data.����Ʈ������·�);
		fprintf(savefile, "���򸮽·�=%f\n", data.���򸮽·�);
		fprintf(savefile, "����ȣ�·�=%f\n", data.����ȣ�·�);
		fprintf(savefile, "�����ڽ·�=%f\n", data.�����ڽ·�);
		fprintf(savefile, "�ٽ�_�����·�=%f\n", data.�ٽ�_�����·�);
		fprintf(savefile, "�ٽ�_��Ŀ�·�=%f\n", data.�ٽ�_��Ŀ�·�);
		fprintf(savefile, "����Ʈġ����·�=%f\n", data.����Ʈġ����·�);
		fprintf(savefile, "�ڸ�ġ�·�=%f\n", data.�ڸ�ġ�·�);
		fprintf(savefile, "���ڿ�·�=%f\n", data.���ڿ�·�);
		fprintf(savefile, "���꽺����̸��·�=%f\n", data.���꽺����̸��·�);
		fprintf(savefile, "�糪���·�=%f\n", data.�糪���·�);
		fprintf(savefile, "��Ƽ�·�=%f\n", data.��Ƽ�·�);
		fprintf(savefile, "�����ڽ·�=%f\n", data.�����ڽ·�);
		fprintf(savefile, "�ٸ���_�����·�=%f\n", data.�ٸ���_�����·�);
		fprintf(savefile, "�ٸ���_�����·�=%f\n", data.�ٸ���_�����·�);
		fprintf(savefile, "�ٸ���_���̺긮��·�=%f\n", data.�ٸ���_���̺긮��·�);
		fprintf(savefile, "���̸��·�=%f\n", data.���̸��·�);
		fprintf(savefile, "���丮�·�=%f\n", data.���丮�·�);
		fprintf(savefile, "�����·�=%f\n", data.�����·�);
		fprintf(savefile, "ī���߽·�=%f\n", data.ī���߽·�);
		fprintf(savefile, "���ڽ·�=%f\n", data.���ڽ·�);
		fprintf(savefile, "�����·�=%f\n", data.�����·�);
		fprintf(savefile, "����ī�·�=%f\n", data.����ī�·�);
		fprintf(savefile, "��Ű_�·�=%f\n", data.��Ű_�·�);
		fprintf(savefile, "��ī_�·�=%f\n", data.��ī_�·�);
		fprintf(savefile, "��ȭ��칫_�·�=%f\n", data.��ȭ��칫_�·�);
		fprintf(savefile, "����Ʈ�ö�_�·�=%f\n", data.����Ʈ�ö�_�·�);
		fprintf(savefile, "���̸��̸�_�·�=%f\n", data.���̸��̸�_�·�);
		fprintf(savefile, "ȫ���̸�_�·�=%f\n", data.ȫ���̸�_�·�);
		fprintf(savefile, "��ȭī����_�·�=%f\n", data.��ȭī����_�·�);
		fprintf(savefile, "�����_�·�=%f\n", data.�����_�·�);
		fprintf(savefile, "��ȭ�����_�·�=%f\n", data.��ȭ�����_�·�);
		fprintf(savefile, "����_�·�=%f\n", data.����_�·�);
		fprintf(savefile, "�Ǹ����̹�_�·�=%f\n", data.�Ǹ����̹�_�·�);
		fprintf(savefile, "��ȭ�ٽ�_�·�=%f\n", data.��ȭ�ٽ�_�·�);
		//---------
		fprintf(savefile, "��칫_r1�¼�=%d\n", data.��칫_r1�¼�);
		fprintf(savefile, "��칫_r2�¼�=%d\n", data.��칫_r2�¼�);
		fprintf(savefile, "��칫_���̺긮��¼�=%d\n", data.��칫_���̺긮��¼�);
		fprintf(savefile, "���̹��¼�=%d\n", data.���̹��¼�);
		fprintf(savefile, "ġ����¼�=%d\n", data.ġ����¼�);
		fprintf(savefile, "�����_�����¼�=%d\n", data.�����_�����¼�);
		fprintf(savefile, "�����_��Ŀ�¼�=%d\n", data.�����_��Ŀ�¼�);
		fprintf(savefile, "����¼�=%d\n", data.����¼�);
		fprintf(savefile, "�����_�����¼�=%d\n", data.�����_�����¼�);
		fprintf(savefile, "�����_�����¼�=%d\n", data.�����_�����¼�);
		fprintf(savefile, "�����_���̺긮��¼�=%d\n", data.�����_���̺긮��¼�);
		fprintf(savefile, "���̼�_�����¼�=%d\n", data.���̼�_�����¼�);
		fprintf(savefile, "���̼�_��Ŀ�¼�=%d\n", data.���̼�_��Ŀ�¼�);
		fprintf(savefile, "���̼�_���̺긮��¼�=%d\n", data.���̼�_���̺긮��¼�);
		fprintf(savefile, "���и��ƽ¼�=%d\n", data.���и��ƽ¼�);
		fprintf(savefile, "�ö������¼�=%d\n", data.�ö������¼�);
		fprintf(savefile, "��ȭġ����¼�=%d\n", data.��ȭġ����¼�);
		fprintf(savefile, "���꽺���칫_r1�¼�=%d\n", data.���꽺���칫_r1�¼�);
		fprintf(savefile, "���꽺���칫-r2�¼�=%d\n", data.���꽺���칫_r2�¼�);
		fprintf(savefile, "���꽺���칫_r3�¼�=%d\n", data.���꽺���칫_r3�¼�);
		fprintf(savefile, "������_�����¼�=%d\n", data.������_�����¼�);
		fprintf(savefile, "������_�����¼�=%d\n", data.������_�����¼�);
		fprintf(savefile, "������_���̺긮��¼�=%d\n", data.������_���̺긮��¼�);
		fprintf(savefile, "��ī���¼�=%d\n", data.��ī���¼�);
		fprintf(savefile, "����Ʈ������¼�=%d\n", data.����Ʈ������¼�);
		fprintf(savefile, "���򸮽¼�=%d\n", data.���򸮽¼�);
		fprintf(savefile, "����ȣ�¼�=%d\n", data.����ȣ�¼�);
		fprintf(savefile, "�����ڽ¼�=%d\n", data.�����ڽ¼�);
		fprintf(savefile, "�ٽ�_�����¼�=%d\n", data.�ٽ�_�����¼�);
		fprintf(savefile, "�ٽ�_��Ŀ�¼�=%d\n", data.�ٽ�_��Ŀ�¼�);
		fprintf(savefile, "����Ʈġ����¼�=%d\n", data.����Ʈġ����¼�);
		fprintf(savefile, "�ڸ�ġ�¼�=%d\n", data.�ڸ�ġ�¼�);
		fprintf(savefile, "���ڿ�¼�=%d\n", data.���ڿ�¼�);
		fprintf(savefile, "���꽺����̸��¼�=%d\n", data.���꽺����̸��¼�);
		fprintf(savefile, "�糪���¼�=%d\n", data.�糪���¼�);
		fprintf(savefile, "��Ƽ�¼�=%d\n", data.��Ƽ�¼�);
		fprintf(savefile, "�����ڽ¼�=%d\n", data.�����ڽ¼�);
		fprintf(savefile, "�ٸ���_�����¼�=%d\n", data.�ٸ���_�����¼�);
		fprintf(savefile, "�ٸ���_�����¼�=%d\n", data.�ٸ���_�����¼�);
		fprintf(savefile, "�ٸ���_���̺긮��¼�=%d\n", data.�ٸ���_���̺긮��¼�);
		fprintf(savefile, "���̸��¼�=%d\n", data.���̸��¼�);
		fprintf(savefile, "���丮�¼�=%d\n", data.���丮�¼�);
		fprintf(savefile, "�����¼�=%d\n", data.�����¼�);
		fprintf(savefile, "ī���߽¼�=%d\n", data.ī���߽¼�);
		fprintf(savefile, "���ڽ¼�=%d\n", data.���ڽ¼�);
		fprintf(savefile, "�����¼�=%d\n", data.�����¼�);
		fprintf(savefile, "����ī�¼�=%d\n", data.����ī�¼�);
		fprintf(savefile, "��Ű_�¼�=%d\n", data.��Ű_�¼�);
		fprintf(savefile, "��ī_�¼�=%d\n", data.��ī_�¼�);
		fprintf(savefile, "��ȭ��칫_�¼�=%d\n", data.��ȭ��칫_�¼�);
		fprintf(savefile, "����Ʈ�ö�_�¼�=%d\n", data.����Ʈ�ö�_�¼�);
		fprintf(savefile, "���̸��̸�_�¼�=%d\n", data.���̸��̸�_�¼�);
		fprintf(savefile, "ȫ���̸�_�¼�=%d\n", data.ȫ���̸�_�¼�);
		fprintf(savefile, "��ȭī����_�¼�=%d\n", data.��ȭī����_�¼�);
		fprintf(savefile, "�����_�¼�=%d\n", data.�����_�¼�);
		fprintf(savefile, "��ȭ�����_�¼�=%d\n", data.��ȭ�����_�¼�);
		fprintf(savefile, "����_�¼�=%d\n", data.����_�¼�);
		fprintf(savefile, "�Ǹ����̹�_�¼�=%d\n", data.�Ǹ����̹�_�¼�);
		fprintf(savefile, "��ȭ�ٽ�_�¼�=%d\n", data.��ȭ�ٽ�_�¼�);
		//--------
		fprintf(savefile, "��칫_r1�м�=%d\n", data.��칫_r1�м�);
		fprintf(savefile, "��칫_r2�м�=%d\n", data.��칫_r2�м�);
		fprintf(savefile, "��칫_���̺긮���м�=%d\n", data.��칫_���̺긮���м�);
		fprintf(savefile, "���̹��м�=%d\n", data.���̹��м�);
		fprintf(savefile, "ġ�����м�=%d\n", data.ġ�����м�);
		fprintf(savefile, "�����_�����м�=%d\n", data.�����_�����м�);
		fprintf(savefile, "�����_��Ŀ�м�=%d\n", data.�����_��Ŀ�м�);
		fprintf(savefile, "�����м�=%d\n", data.�����м�);
		fprintf(savefile, "�����_�����м�=%d\n", data.�����_�����м�);
		fprintf(savefile, "�����_�����м�=%d\n", data.�����_�����м�);
		fprintf(savefile, "�����_���̺긮���м�=%d\n", data.�����_���̺긮���м�);
		fprintf(savefile, "���̼�_�����м�=%d\n", data.���̼�_�����м�);
		fprintf(savefile, "���̼�_��Ŀ�м�=%d\n", data.���̼�_��Ŀ�м�);
		fprintf(savefile, "���̼�_���̺긮���м�=%d\n", data.���̼�_���̺긮���м�);
		fprintf(savefile, "���и����м�=%d\n", data.���и����м�);
		fprintf(savefile, "�ö������м�=%d\n", data.�ö������м�);
		fprintf(savefile, "��ȭġ�����м�=%d\n", data.��ȭġ�����м�);
		fprintf(savefile, "���꽺���칫_r1�м�=%d\n", data.���꽺���칫_r1�м�);
		fprintf(savefile, "���꽺���칫-r2�м�=%d\n", data.���꽺���칫_r2�м�);
		fprintf(savefile, "���꽺���칫_r3�м�=%d\n", data.���꽺���칫_r3�м�);
		fprintf(savefile, "������_�����м�=%d\n", data.������_�����м�);
		fprintf(savefile, "������_�����м�=%d\n", data.������_�����м�);
		fprintf(savefile, "������_���̺긮���м�=%d\n", data.������_���̺긮���м�);
		fprintf(savefile, "��ī���м�=%d\n", data.��ī���м�);
		fprintf(savefile, "����Ʈ������м�=%d\n", data.����Ʈ������м�);
		fprintf(savefile, "�����м�=%d\n", data.�����м�);
		fprintf(savefile, "����ȣ�м�=%d\n", data.����ȣ�м�);
		fprintf(savefile, "�������м�=%d\n", data.�������м�);
		fprintf(savefile, "�ٽ�_�����м�=%d\n", data.�ٽ�_�����м�);
		fprintf(savefile, "�ٽ�_��Ŀ�м�=%d\n", data.�ٽ�_��Ŀ�м�);
		fprintf(savefile, "����Ʈġ�����м�=%d\n", data.����Ʈġ�����м�);
		fprintf(savefile, "�ڸ�ġ�м�=%d\n", data.�ڸ�ġ�м�);
		fprintf(savefile, "���ڿ��м�=%d\n", data.���ڿ��м�);
		fprintf(savefile, "���꽺����̸��м�=%d\n", data.���꽺����̸��м�);
		fprintf(savefile, "�糪���м�=%d\n", data.�糪���м�);
		fprintf(savefile, "��Ƽ�м�=%d\n", data.��Ƽ�м�);
		fprintf(savefile, "�������м�=%d\n", data.�������м�);
		fprintf(savefile, "�ٸ���_�����м�=%d\n", data.�ٸ���_�����м�);
		fprintf(savefile, "�ٸ���_�����м�=%d\n", data.�ٸ���_�����м�);
		fprintf(savefile, "�ٸ���_���̺긮���м�=%d\n", data.�ٸ���_���̺긮���м�);
		fprintf(savefile, "���̸��м�=%d\n", data.���̸��м�);
		fprintf(savefile, "���丮�м�=%d\n", data.���丮�м�);
		fprintf(savefile, "�����м�=%d\n", data.�����м�);
		fprintf(savefile, "ī�����м�=%d\n", data.ī�����м�);
		fprintf(savefile, "�����м�=%d\n", data.�����м�);
		fprintf(savefile, "�����м�=%d\n", data.�����м�);
		fprintf(savefile, "����ī�м�=%d\n", data.����ī�м�);
		fprintf(savefile, "��Ű_�м�=%d\n", data.��Ű_�м�);
		fprintf(savefile, "��ī_�м�=%d\n", data.��ī_�м�);
		fprintf(savefile, "��ȭ��칫_�м�=%d\n", data.��ȭ��칫_�м�);
		fprintf(savefile, "����Ʈ�ö�_�м�=%d\n", data.����Ʈ�ö�_�м�);
		fprintf(savefile, "���̸��̸�_�м�=%d\n", data.���̸��̸�_�м�);
		fprintf(savefile, "ȫ���̸�_�м�=%d\n", data.ȫ���̸�_�м�);
		fprintf(savefile, "��ȭī����_�м�=%d\n", data.��ȭī����_�м�);
		fprintf(savefile, "�����_�м�=%d\n", data.�����_�м�);
		fprintf(savefile, "��ȭ�����_�м�=%d\n", data.��ȭ�����_�м�);
		fprintf(savefile, "����_�м�=%d\n", data.����_�м�);
		fprintf(savefile, "�Ǹ����̹�_�м�=%d\n", data.�Ǹ����̹�_�м�);
		fprintf(savefile, "��ȭ�ٽ�_�м�=%d\n", data.��ȭ�ٽ�_�м�);
		//--------------------------------------------------------
		fprintf(savefile, "����Ƚ��=%d\n", data.����Ƚ��);
		fprintf(savefile, "����Ƚ��=%d\n", data.����Ƚ��);
	fclose(savefile);
}
static void read(char* name,dataSTR data)
{

	int FEEDDATA = 0;
	savefile = fopen(name, "r");
	if (savefile == NULL)
	{
		AfxMessageBox(_T("����! ����� �б⿡ �����߽��ϴ�."));
		return;
	}
	fseek(savefile, 0, SEEK_SET);
	finddata();
	//�ε���..\n");

	fscanf(savefile, "%lf", &data.vernum);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//������ �ε��Ͽ����ϴ�\n");//
	if (data.vernum != �������)
	{
		readLegcy();
	}
	
	fscanf(savefile, "%d", &data.����Ƚ��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.mmr);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.ų);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ý�Ʈ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��Ŀ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����Ÿ��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�������������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��Ŀ����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��칫_r1);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��칫_r2);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��칫_���̺긮��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̹�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.ġ����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_��Ŀ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_���̺긮��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_��Ŀ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_���̺긮��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���и���);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�ö�����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ȭġ����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r1);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r2);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r3);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.������_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.������_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������_���̺긮��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ī��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈ�����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����ȣ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٽ�_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٽ�_��Ŀ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈġ����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ڸ�ġ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���ڿ�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���꽺����̸�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�糪��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��Ƽ);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_���̺긮��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���丮);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ī����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����ī);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	

	fscanf(savefile, "%d", &data.��Ű);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ī);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ��칫);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈ�ö�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸��̸�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ȫ���̸�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭī����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ�����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�Ǹ����̹�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ�ٽ�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	

	//-----------
	fscanf(savefile, "%lf", &data.��칫_r1�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.��칫_r2�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.��칫_���̺긮��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���̹��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.ġ����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�����_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�����_��Ŀ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�����_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�����_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�����_���̺긮��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���̼�_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���̼�_��Ŀ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���̼�_���̺긮��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���и��ƽ·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�ö������·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.��ȭġ����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���꽺���칫_r1�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���꽺���칫_r2�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���꽺���칫_r3�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.������_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.������_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.������_���̺긮��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.��ī���·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.����Ʈ������·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���򸮽·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.����ȣ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�����ڽ·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�ٽ�_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�ٽ�_��Ŀ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.����Ʈġ����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�ڸ�ġ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���ڿ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.���꽺����̸��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%lf", &data.�糪���·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.��Ƽ�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�����ڽ·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�ٸ���_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�ٸ���_�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�ٸ���_���̺긮��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.���̸��·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.���丮�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.ī���߽·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.���ڽ·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�����·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.����ī�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.��Ű_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.��ī_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.��ȭ��칫_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.����Ʈ�ö�_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.���̸��̸�_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.ȫ���̸�_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.��ȭī����_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%lf", &data.�����_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//������·��� �ε��Ͽ����ϴ�\n");//

	fscanf(savefile, "%lf", &data.��ȭ�����_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//��ȭ�����·��� �ε��Ͽ����ϴ�\n");//

	fscanf(savefile, "%lf", &data.����_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//���½·��� �ε��Ͽ����ϴ�\n");//

	fscanf(savefile, "%lf", &data.�Ǹ����̹�_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//�Ǹ����̹��·��� �ε��Ͽ����ϴ�\n");//

	fscanf(savefile, "%lf", &data.��ȭ�ٽ�_�·�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//��ȭ�ٽý·��� �ε��Ͽ����ϴ�\n");//

	//-----------
	fscanf(savefile, "%d", &data.��칫_r1�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//��칫_r1�¼��� �ε��Ͽ����ϴ�\n");//

	fscanf(savefile, "%d", &data.��칫_r2�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��칫_���̺긮��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̹��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.ġ����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_��Ŀ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_���̺긮��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_��Ŀ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���̼�_���̺긮��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���и��ƽ¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�ö������¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ȭġ����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r1�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r2�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺���칫_r3�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.������_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.������_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.������_���̺긮��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ī���¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����Ʈ������¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���򸮽¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����ȣ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����ڽ¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�ٽ�_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�ٽ�_��Ŀ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����Ʈġ����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�ڸ�ġ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���ڿ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���꽺����̸��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�糪���¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��Ƽ�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����ڽ¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_���̺긮��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸��¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���丮�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.ī���߽¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.���ڽ¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����ī�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��Ű_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ī_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ��칫_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈ�ö�_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸��̸�_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ȫ���̸�_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭī����_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ�����_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�Ǹ����̹�_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ�ٽ�_�¼�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	//----------------
	fscanf(savefile, "%d", &data.��칫_r1�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��칫_r2�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	
	fscanf(savefile, "%d", &data.��칫_���̺긮���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̹��м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ġ�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_��Ŀ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�����_���̺긮���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̼�_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̼�_��Ŀ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̼�_���̺긮���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���и����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ö������м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭġ�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���꽺���칫_r1�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���꽺���칫_r2�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���꽺���칫_r3�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.������_���̺긮���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ī���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈ������м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����ȣ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�������м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٽ�_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٽ�_��Ŀ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈġ�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ڸ�ġ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���ڿ��м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���꽺����̸��м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�糪���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��Ƽ�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�������м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�ٸ���_���̺긮���м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸��м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���丮�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ī�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����ī�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��Ű_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ī_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭ��칫_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.����Ʈ�ö�_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.���̸��̸�_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.ȫ���̸�_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.��ȭī����_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	
	fscanf(savefile, "%d", &data.�����_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ȭ�����_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.�Ǹ����̹�_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.��ȭ�ٽ�_�м�);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();
	//------------------------
	fscanf(savefile, "%d", &data.����Ƚ��);
	FEEDDATA++;
	LINEFEED(FEEDDATA);
	finddata();

	fscanf(savefile, "%d", &data.����Ƚ��);
	//FEEDDATA++;
	//LINEFEED(FEEDDATA);
	//finddata();
	
}
