#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//��ӡ˳���Ǻ͵�����
int main()
{
	int row;//��������
	printf("��������Ҫ��ӡ��������>");
	scanf("%d", &row);
	//��������
	for (int i=0;i<row;i++)   //��ӡrow��
	{
		for (int j=0;j<row-i-1;j++)//ÿ��ǰ��ո�ĸ���
		{
			printf(" ");
		}
		for (int j=0;j<2*i+1;j++)//��ӡ��ո��ӡ*�ĸ���
		{
			printf("*");
		}
		printf("\n");
	}

	//��������
	for (int i = 0; i < row-1; i++)   //��ӡrow��
	{
		for (int j = 0; j < i+1; j++)//ÿ��ǰ��ո�ĸ���
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * (row - 1-i)-1; j++)//��ӡ��ո��ӡ*�ĸ���  7 5 3 1
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}