#include<stdio.h>
int main(void)
{
	int sum_ji=0,sum_ou=0;    //不要忘记初始化!!! 
	while(1)
	{
		int a=0;
		scanf("%d",&a);
		if(a==-1)
		{
			break;
		}
		else
		{
			if(a%2==0)
			{
				sum_ou += 1;  //不要忘记初始化!!! 
			}
			else
			{
				sum_ji += 1; //不要忘记初始化!!! 
			}
		}
	 } 
	 printf("%d %d",sum_ji,sum_ou);
	 return 0;
 } 
