#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
void heterozygote(void);							//杂合子连续自交
int main()
{
	int problem_selection=1;
	printf("请选择要解决的问题类型\n");
	printf("1.杂合子连续自交问题\n");
	printf("选择：");

	scanf_s("%d", &problem_selection);
	while (problem_selection != 1 && problem_selection != 2 && problem_selection != 3 && problem_selection != 4 && problem_selection != 5 )
	{
		printf("请输入有效数字进行选择：");
		scanf_s("%d", problem_selection);
	}
	if (problem_selection == 1)
	{
		heterozygote();
	}


	system("pause");
	return 0;
}
void heterozygote()									//杂合子连续自交
{
	double generation;
	system("cls");
	printf("----------------------------------------------------------------------------\n");
	printf("注意：\n");
	printf("本程序仅能解决简单的杂合子连续自交问题\n");
	printf("即显性遗传因子对隐性遗传因子为完全显性\n");
	printf("----------------------------------------------------------------------------\n");
	Sleep(500);
	printf("请输入连续自交代数:");
	scanf_s("%lf", &generation);
	double Aa;
	Aa = pow(2, generation);
		
	printf("----------------------------------------------------------------------------\n");
	int generation_int = (int)generation;
	printf("子%d代\n", generation_int);
	
	
	printf("AA=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("Aa=1/%.0f\n", Aa);
	Sleep(100);
	printf("aa=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("显性性状=%.0f/%0.f\n", Aa + 1, Aa * 2);
	Sleep(100);
	printf("隐性性状=%.0f/%.0f\n", Aa - 1, Aa * 2);
	Sleep(100);
	printf("纯合子=%.0f/%.0f\n", Aa - 1, Aa);
	Sleep(100);
	
	printf("----------------------------------------------------------------------------\n");
	
}
