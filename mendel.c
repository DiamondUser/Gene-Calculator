#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
void heterozygote(void);							//�Ӻ��������Խ�
void gene_calculating(void);					    //��Ⱥ����Ƶ�ʼ���
void population_calculating(void);					//��֪ĳһ��Ⱥ���ױ������ͼ����������Ӵ��л����ͼ�����
int main()
{
	printf("�㻹��Ϊ�Ŵ����㷳����\n");
	Sleep(500);
	printf("�㻹��Ϊ���ָ��ʵļ��㷢����\n");
	Sleep(500);
	printf("�㻹��ɵɵ�ؾ���ʲô�����ɽ��䡢ʲô�����������\n");
	Sleep(500);
	printf("��\n");
	Sleep(500);
	printf("��\n");
	Sleep(500);
	printf("��\n");
	Sleep(500);
	printf("��\n");
	Sleep(500);
	printf("!\n");
	Sleep(500);
	printf("�������������\n");
	Sleep(500);
	printf("�㽫��Ϊ�Ŵ�ѧ����!\n");
	Sleep(500);
	printf("�����˶�˵��\n");
	Sleep(500);
	printf("�꿴�˶�����\n");
	Sleep(500);
	printf("���Ի��ڵ�ʲô��\n");
	Sleep(500);
	printf("�Ͽ쿪ʼ�ɣ�\n");
	Sleep(500);
	int problem_selection ;
	printf("��ѡ��Ҫ�������������\n");
	printf("***************************************************************\n");
	printf("*1.�Ӻ��������Խ�����                                         *\n");
	printf("*2.��Ⱥ����Ƶ�ʵļ���                                         *\n");
	printf("*3.��֪ĳһ��Ⱥ���ױ������ͼ����������Ӵ��л����ͼ�����       *\n");
	printf("***************************************************************\n");
	printf("*ÿ��������֮����Ҫ��Enterȷ��                              *\n");
	printf("***************************************************************\n");
	printf("ѡ��");

	
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
			printf("�������������������Ч���֣�");
		}
	}

	printf("CopyRight@SPSn 2022\n");



	system("pause");
	return 0;
}
void heterozygote()									//�Ӻ��������Խ�
{
	double generation;
	system("cls");
	system("color f4");
	printf("****************************************************\n");
	printf("*ע�⣺                                            *\n");
	printf("*��������ܽ���򵥵��Ӻ��������Խ�����            *\n");
	printf("*�������Ŵ����Ӷ������Ŵ�����Ϊ��ȫ����            *\n");
	printf("****************************************************\n");
	Sleep(500);
	printf("�����������Խ�����:");
	scanf_s("%lf", &generation);
	double num;
	num = pow(2, generation);
		
	printf("----------------------------------------------------------------------------\n");
	int generation_int = (int)generation;
	printf("��%d��\n", generation_int);
	Sleep(500);
	
	printf("AA=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("Aa=1/%.0f\n", num);
	Sleep(500);
	printf("aa=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("������״=%.0f/%0.f\n", num + 1, num * 2);
	Sleep(500);
	printf("������״=%.0f/%.0f\n", num - 1, num * 2);
	Sleep(500);
	printf("������=%.0f/%.0f\n", num - 1, num);
	Sleep(500);
	
	printf("----------------------------------------------------------------------------\n");
	
}
void gene_calculating()
{
	system("cls");
	printf("*******************************************************************\n");
	printf("*ע�⣺                                                           *\n");
	printf("*1.������һ�Ե�λ������Ƶ������״                               *\n");
	printf("*2.���Ի�������Ի���Ϊ��ȫ����                                   *\n");
	printf("*3.���Ϲ��������²�����                                           *\n");
	printf("*******************************************************************\n");
	Sleep(1000);
	printf("1.����������״������ռ�������м���\n");
	printf("2.����������״������ռ�������м���\n");
	printf("��ѡ��");
	int way_selection = 0;
	double hide, show, hide_input, show_input;				//�����Ը�����ռ����
	while (scanf_s("%d", &way_selection))
	{
		if (way_selection == 1)
		{
			printf("���������Ը�����ռ����(С����ʽ):_______\b\b\b\b\b\b\b");
			scanf_s("%lf", &show);
			hide = 1 - show;
			break;
		}
		if (way_selection == 2)
		{
			printf("���������Ը�����ռ����(С����ʽ):_______\b\b\b\b\b\b\b");
			scanf_s("%lf", &hide);
			break;
		}
		else
		{
			printf("������������Ч���֣�\n");
		}
	}
	printf("�����Ը���ռ%lf%%����Ⱥ��\n", show * 100);
	printf("�����Ը���ռ%lf%%����Ⱥ��\n", hide * 100);
	double show_gene, hide_gene;
	hide_gene = sqrt(hide);
	show_gene = 1 - hide_gene;
	printf("----------------------------------------------------------\n");
	printf("��Ⱥ�����Ի���ռ%lf%%\n", show_gene * 100);
	printf("��Ⱥ�����Ի���ռ%lf%%\n", hide_gene * 100);
	printf("----------------------------------------------------------\n");


}
void population_calculating()
{
	system("cls");
	printf("*******************************************************************\n");
	printf("*ע�⣺                                                           *\n");
	printf("*1.������һ�Ե�λ������Ƶ������״                               *\n");              
	printf("*2.���Ϲ��������²�����                                           *\n");
	printf("*******************************************************************\n");
	printf("�ٶ����Ƹ��������״�Ļ���ΪA/a\n");
	printf("�����ױ��и��ֻ�������ռ����(С��)\n");
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
		printf("���ֻ����͵ı�����������������1����������ɶ��");
		printf("�ټ�\n");
		return 0;
	}
	double show, hide;
	show = pow(show_gene, 2) + 2 * show_gene * hide_gene;
	hide = pow(hide_gene, 2);
	printf("-------------------------------------------------------------\n");
	printf("���ױ���:\n");
	printf("AA = %lf%%\n", show_show * 100);
	printf("Aa = %lf%%\n", show_hide * 100);
	printf("aa = %lf%%\n", hide_hide * 100);
	printf("-------------------------------------------------------------\n");
	printf("�Ӵ���:\n");
	printf("���Ը���ռ%lf%%\n", show * 100);
	printf("���Ը���ռ%lf%%\n", hide * 100);
	printf("-------------------------------------------------------------\n");
	printf("�ڸ���Ⱥ��:\n");
	printf("���Ի���Ļ���Ƶ��Ϊ%lf%%\n", show_gene * 100);
	printf("���Ի���Ļ���Ƶ��Ϊ%lf%%\n", hide_gene * 100);
	printf("-------------------------------------------------------------\n");
}