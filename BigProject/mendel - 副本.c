#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
void heterozygote(void);							//�Ӻ��������Խ�
int main()
{
	int problem_selection=1;
	printf("��ѡ��Ҫ�������������\n");
	printf("1.�Ӻ��������Խ�����\n");
	printf("ѡ��");

	scanf_s("%d", &problem_selection);
	while (problem_selection != 1 && problem_selection != 2 && problem_selection != 3 && problem_selection != 4 && problem_selection != 5 )
	{
		printf("��������Ч���ֽ���ѡ��");
		scanf_s("%d", problem_selection);
	}
	if (problem_selection == 1)
	{
		heterozygote();
	}


	system("pause");
	return 0;
}
void heterozygote()									//�Ӻ��������Խ�
{
	double generation;
	system("cls");
	printf("----------------------------------------------------------------------------\n");
	printf("ע�⣺\n");
	printf("��������ܽ���򵥵��Ӻ��������Խ�����\n");
	printf("�������Ŵ����Ӷ������Ŵ�����Ϊ��ȫ����\n");
	printf("----------------------------------------------------------------------------\n");
	Sleep(500);
	printf("�����������Խ�����:");
	scanf_s("%lf", &generation);
	double Aa;
	Aa = pow(2, generation);
		
	printf("----------------------------------------------------------------------------\n");
	int generation_int = (int)generation;
	printf("��%d��\n", generation_int);
	
	
	printf("AA=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("Aa=1/%.0f\n", Aa);
	Sleep(100);
	printf("aa=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("������״=%.0f/%0.f\n", Aa + 1, Aa * 2);
	Sleep(100);
	printf("������״=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("������=%.0f/%.0f\n", Aa - 1, Aa);
	Sleep(100);
	
	printf("----------------------------------------------------------------------------\n");
	
}
