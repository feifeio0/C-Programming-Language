/*7-33 统计素数并求和（20 分）
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例:
10 31
输出样例:
7 143*/


#include<stdio.h>
int main()
{
	int m,n;
	int i,j;
	int sushu;
	int flag=0;
	int sum=0;
	scanf("%d %d",&m,&n);
	if(m<2)
	{
		m = 2;
	}
	for(i=m;i<=n;i++)
	{
		sushu = 1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sushu = 0;
			}
		}
		if(sushu==1)
		{
			flag++;
			sum += i;
		}
	}
	printf("%d %d",flag,sum);
	return 0;
}
