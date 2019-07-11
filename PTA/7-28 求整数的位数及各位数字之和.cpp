/*7-28 求整数的位数及各位数字之和（15 分）
对于给定的正整数N，求它的位数及其各位数字之和。

输入格式：
输入在一行中给出一个不超过10
?9
?? 的正整数N。

输出格式：
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
输出样例：
3 6*/

#include<stdio.h>
int main()
{
	int N = 0;
	int yu = 0;
	int sum = 0;
	int flag=1; 
	int bai = 1;
	scanf("%d",&N);
	while(1)
	{
		if(N/10 == 0)
		{
			sum += N;
			break;
		}
		yu = N % 10;
		N = N / 10;
		sum += yu;
		flag++; 
	}
	printf("%d %d",flag,sum);
	return 0;
} 
