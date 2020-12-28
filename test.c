#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//打印顺三角和倒三角
int main()
{
	int row;//接收行数
	printf("请输入你要打印的行数：>");
	scanf("%d", &row);
	//正三角形
	for (int i=0;i<row;i++)   //打印row行
	{
		for (int j=0;j<row-i-1;j++)//每行前面空格的个数
		{
			printf(" ");
		}
		for (int j=0;j<2*i+1;j++)//打印完空格打印*的个数
		{
			printf("*");
		}
		printf("\n");
	}

	//倒三角形
	for (int i = 0; i < row-1; i++)   //打印row行
	{
		for (int j = 0; j < i+1; j++)//每行前面空格的个数
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * (row - 1-i)-1; j++)//打印完空格打印*的个数  7 5 3 1
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}