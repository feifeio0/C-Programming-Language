#include<stdio.h>
int main(void)
{
	int sum_ji=0,sum_ou=0;    //��Ҫ���ǳ�ʼ��!!! 
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
				sum_ou += 1;  //��Ҫ���ǳ�ʼ��!!! 
			}
			else
			{
				sum_ji += 1; //��Ҫ���ǳ�ʼ��!!! 
			}
		}
	 } 
	 printf("%d %d",sum_ji,sum_ou);
	 return 0;
 } 
