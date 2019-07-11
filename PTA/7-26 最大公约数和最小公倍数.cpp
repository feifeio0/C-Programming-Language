/*7-26 最大公约数和最小公倍数（15 分）
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。

输入样例:
511 292
输出样例:
73 2044*/ 

#include<stdio.h>
int main(void)
{
	int num1,num2;
	int a,b,d,c=1;
	scanf("%d %d",&num1,&num2);
	a = num1;
	b = num2;
	if(a<b)
	{
		c = b;
		b = a;
		a = c;
	}
	while(c!=0)
	{
		c = a%b;
		a = b;
		b = c;
	}
	/* 最小公倍数 = 两数乘积 / 最大公约数 */
	d = num1 * num2 / a;
	printf("%d %d",a,d);
	return 0;
}
