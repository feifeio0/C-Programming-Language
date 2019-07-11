/*本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。

输入样例:
5
输出样例:
0.917*/


#include<stdio.h>
int main()
{
	int fenzi=2,fenmu=3,N;
	int flag = -1;
	float sum = 1;
	scanf("%d",&N);
	for(int i=1;i<N;i++)
	{
		sum += 1.0*flag*fenzi/fenmu;
		flag *= -1;
		fenzi ++;
		fenmu += 2;
	}
	
	printf("%.3f",sum);
	return 0;
}
