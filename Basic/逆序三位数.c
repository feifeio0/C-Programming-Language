#include<stdio.h>
int main()
{
	int zheng = 0;
	scanf("%d",&zheng);
	int a=zheng/100,b=zheng/10-10*a,c=zheng%10;
	printf("%d",c*100+b*10+a*1);
	return 0;
}
