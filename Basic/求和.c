#include<stdio.h>
int main(void)
{
	int a=0,b=0,m=0,n=0,jishu=0,sum=0;
	scanf("%d%d",&n,&m);
	for(a=2;a<9999;a++)
	{
		for(b=2;b<=a;b++)
		{
			if(a%b==0)
			{
				break;
			}
			if(a==b)
			{
				jishu ++;
			}
			if(jishu>=n&&jishu<=m)
			{
				sum += a;
			}
		}
		if(jishu>m)
		{
			break;
		}
	}
	printf("%d",sum);
 } 
