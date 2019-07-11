/*7-16 计算符号函数的值（10 分）
对于任一整数n，符号函数sign(n)的定义如下：

请编写程序计算该函数对任一输入整数的值。

输入格式:
输入在一行中给出整数n。

输出格式:
在一行中按照格式“sign(n) = 函数值”输出该整数n对应的函数值。

输入样例1:
10
输出样例1:
sign(10) = 1
输入样例2:
0
输出样例2:
sign(0) = 0
输入样例3:
-98
输出样例3:
sign(-98) = -1*/ 



#include<stdio.h>
int main(void)
{
	int n = 0;
	int result = 0;
	scanf("%d",&n);
	if(n>0)
	{
		result = 1;
	}
	else if(n==0)
	{
		result = 0;
	}
	else
	{
		result = -1;
	}
	printf("sign(%d) = %d",n,result);
	return 0;
}
