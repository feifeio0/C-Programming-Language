#include<stdio.h>
int main()
{
	const int maxnumber = 25;
	int isprime[maxnumber];
	int i ;
	int x ;
	for(i=0;i<maxnumber;i++)
	{
		isprime[i] = 1;
	}
	for(x=2;x<maxnumber;x++)
	{
		if(isprime[x])
		{
			for(i=2;i*x<maxnumber;i++)
			{
				isprime[i*x] = 0;
			}
		}
	}
	//素数的倍数标记为0 
	for(i=2;i<maxnumber;i++)
	{
		if(isprime[i])
		{
			printf("%d\t",i);
		}
	//标记为1的全都输出了 
	}
	printf("\n");
	return 0;
}
