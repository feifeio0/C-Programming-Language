#include<stdio.h>
void sum(int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++)
	{
		sum += i;
	}
	printf("%d",sum);
}
int main(void)
{
	sum(10,20);
	return 0;
}
