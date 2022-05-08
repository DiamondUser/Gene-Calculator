#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
void heterozygote(void);							//杂合子连续自交
void gene_calculating(void);					    //种群基因频率计算
void population_calculating(void);					//已知某一种群中亲本基因型及比例，求子代中基因型及比例
int main()
{
	printf("你还在为遗传计算烦恼吗？\n");
	Sleep(500);
	printf("你还在为各种概率的计算发愁吗？\n");
	Sleep(500);
	printf("你还在傻傻地纠结什么是自由交配、什么是自由组合吗？\n");
	Sleep(500);
	printf("不\n");
	Sleep(500);
	printf("用\n");
	Sleep(500);
	printf("担\n");
	Sleep(500);
	printf("心\n");
	Sleep(500);
	printf("!\n");
	Sleep(500);
	printf("用了这个计算器\n");
	Sleep(500);
	printf("你将成为遗传学的神!\n");
	Sleep(500);
	printf("娟用了都说好\n");
	Sleep(500);
	printf("标看了都落泪\n");
	Sleep(500);
	printf("所以还在等什么？\n");
	Sleep(500);
	printf("赶快开始吧！\n");
	Sleep(500);
	int problem_selection ;
	printf("请选择要解决的问题类型\n");
	printf("***************************************************************\n");
	printf("*1.杂合子连续自交问题                                         *\n");
	printf("*2.种群基因频率的计算                                         *\n");
	printf("*3.已知某一种群中亲本基因型及比例，求子代中基因型及比例       *\n");
	printf("***************************************************************\n");
	printf("*每次输入完之后都需要按Enter确认                              *\n");
	printf("***************************************************************\n");
	printf("选择：");

	
	while (scanf_s("%d", &problem_selection))
	{
		if (problem_selection == 1)
		{
			heterozygote();
			break;
		}
		if (problem_selection == 2)
		{
			gene_calculating();
			break;
		}
		if (problem_selection == 3)
		{
			population_calculating();
			break;
		}
		else
		{
			printf("输入错误！请重新输入有效数字：");
		}
	}

	printf("CopyRight@SPSn 2022\n");



	system("pause");
	return 0;
}
void heterozygote()									//杂合子连续自交
{
	double generation;
	system("cls");
	system("color f4");
	printf("****************************************************\n");
	printf("*注意：                                            *\n");
	printf("*本程序仅能解决简单的杂合子连续自交问题            *\n");
	printf("*即显性遗传因子对隐性遗传因子为完全显性            *\n");
	printf("****************************************************\n");
	Sleep(500);
	printf("请输入连续自交代数:");
	scanf_s("%lf", &generation);
	double num;
	num = pow(2, generation);
		
	printf("----------------------------------------------------------------------------\n");
	int generation_int = (int)generation;
	printf("子%d代\n", generation_int);
	Sleep(500);
	
	printf("AA=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("Aa=1/%.0f\n", num);
	Sleep(500);
	printf("aa=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("显性性状=%.0f/%0.f\n", num + 1, num * 2);
	Sleep(500);
	printf("隐性性状=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("纯合子=%.0f/%.0f\n", num - 1, num);
	Sleep(500);
	
	printf("----------------------------------------------------------------------------\n");
	
}
void gene_calculating()
{
	system("cls");
	printf("*******************************************************************\n");
	printf("*注意：                                                           *\n");
	printf("*1.适用于一对等位基因控制的相对性状                               *\n");
	printf("*2.显性基因对隐性基因为完全显性                                   *\n");
	printf("*3.符合哈代——温伯格定律                                           *\n");
	printf("*******************************************************************\n");
	Sleep(1000);
	printf("1.根据显性性状个体所占比例进行计算\n");
	printf("2.根据隐性性状个体所占比例进行计算\n");
	printf("请选择：");
	int way_selection = 0;
	double hide, show, hide_input, show_input;				//显隐性个体所占比例
	while (scanf_s("%d", &way_selection))
	{
		if (way_selection == 1)
		{
			printf("请输入显性个体所占比例(小数形式):_______\b\b\b\b\b\b\b");
			scanf_s("%lf", &show);
			hide = 1 - show;
			break;
		}
		if (way_selection == 2)
		{
			printf("请输入隐性个体所占比例(小数形式):_______\b\b\b\b\b\b\b");
			scanf_s("%lf", &hide);
			break;
		}
		else
		{
			printf("请重新输入有效数字！\n");
		}
	}
	printf("在显性个体占%lf%%的种群中\n", show * 100);
	printf("在隐性个体占%lf%%的种群中\n", hide * 100);
	double show_gene, hide_gene;
	hide_gene = sqrt(hide);
	show_gene = 1 - hide_gene;
	printf("----------------------------------------------------------\n");
	printf("种群中显性基因占%lf%%\n", show_gene * 100);
	printf("种群中隐性基因占%lf%%\n", hide_gene * 100);
	printf("----------------------------------------------------------\n");


}
void population_calculating()
{
	system("cls");
	printf("*******************************************************************\n");
	printf("*注意：                                                           *\n");
	printf("*1.适用于一对等位基因控制的相对性状                               *\n");              
	printf("*2.符合哈代——温伯格定律                                           *\n");
	printf("*******************************************************************\n");
	printf("假定控制该种相对性状的基因为A/a\n");
	printf("输入亲本中各种基因型所占比例(小数)\n");
	double show_show, show_hide, hide_hide;
	printf("AA = ");
	scanf_s("%lf", &show_show);
	printf("Aa = ");
	scanf_s("%lf", &show_hide);
	printf("aa = ");
	scanf_s("%lf", &hide_hide);
	double show_gene, hide_gene;
	if (show_show + show_hide + hide_hide == 1)
	{
		show_gene = show_show + 0.5 * show_hide;
		hide_gene = hide_hide + 0.5 * show_hide;
	}
	else
	{
		printf("三种基因型的比例加起来都不等于1，你让我算啥？");
		printf("再见\n");
		return 0;
	}
	double show, hide;
	show = pow(show_gene, 2) + 2 * show_gene * hide_gene;
	hide = pow(hide_gene, 2);
	printf("-------------------------------------------------------------\n");
	printf("在亲本中:\n");
	printf("AA = %lf%%\n", show_show * 100);
	printf("Aa = %lf%%\n", show_hide * 100);
	printf("aa = %lf%%\n", hide_hide * 100);
	printf("-------------------------------------------------------------\n");
	printf("子代中:\n");
	printf("显性个体占%lf%%\n", show * 100);
	printf("隐性个体占%lf%%\n", hide * 100);
	printf("-------------------------------------------------------------\n");
	printf("在该种群中:\n");
	printf("显性基因的基因频率为%lf%%\n", show_gene * 100);
	printf("隐性基因的基因频率为%lf%%\n", hide_gene * 100);
	printf("-------------------------------------------------------------\n");
}