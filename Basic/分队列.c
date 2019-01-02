#include<stdio.h>
int main(void)
{
	int a,n;
	scanf("%d",&n);
	for(a=0;a<=n;a++)
	{
		if(a%2==1)
		{
			if((a+1)>=n)
			{
				printf("%d",a);
			}
			else
			{
				printf("%d ",a);
			}
		}
	}
	return 0;
 } 
 //最后一位数输出时不能带空格 
