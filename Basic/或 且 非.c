#include<stdio.h>
int main(void)
{
	int a=3,b=4,c=5;
	int x,y;
	printf("%d\n",!(x=a)&&(y=b)&&0);
	//最初x赋值之后如果且运算为0 则不进行后面的计算 即y不被赋值 
	printf("%d,%d",x,y);
	return 0;
}
