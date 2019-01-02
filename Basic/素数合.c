#include<stdio.h>
int main()
{
	int i=0,j=0,sushu=0,flag=0,sum=0;
	
	int m,n;
	scanf("%d %d",&n,&m);
	for(i=2;i<9999;i++)
	{
		sushu = 1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				sushu = 0;
				break;
			}
		}
		if(sushu == 1)
		{
			flag ++;
			if(flag>=n&&flag<=m)
			{
				sum += i;
			}		
		}
	}
	printf("%d",sum);
	return 0;
 } 
