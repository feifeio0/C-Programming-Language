#include<stdio.h>
int main(void)
{
	int N=0,a=0,jiou_N=1,b=1,num=0,jiou_a=0;
	scanf("%d",&N);
	for(a=0;N!=0;jiou_N++)
	{
		a=N%10;
		if(a%2==0)
		{
			jiou_a = 2;
		}
		else
		{
			jiou_a = 1;
		}
		if(jiou_N%2==0)
		{
			jiou_N = 2;
		}
		else
		{
			jiou_N = 1;
		}
		if(jiou_N == jiou_a)
		{
			num += b;
		}
		N = N/10;
		b = 2 * b;
	}
	printf("%d",num);
	return 0;
 } 
