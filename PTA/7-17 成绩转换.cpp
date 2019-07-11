/*7-17 成绩转换（15 分）
本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。
输入格式:
输入在一行中给出一个整数的百分制成绩。

输出格式:
在一行中输出对应的五分制成绩。

输入样例:
90
输出样例:
A*/ 


#include<stdio.h>
int main(void)
{
	int bfz = 0;
	scanf("%d",&bfz);
	if(bfz>=90)
	{
		printf("A");
	}
	else if(bfz>=80)
	{
		printf("B");
	}
	else if(bfz>=70)
	{
		printf("C");
	}
	else if(bfz>=60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
	return 0;
 } 
