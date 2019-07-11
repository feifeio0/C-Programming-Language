#include<stdio.h>

void swap(int *pa,int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int main(void)
{
	int a=5;
	int b=6;
	swap(&a,&b);
	printf("%d %d",a,b);
	
	return 0;
}

//函数返回多个值，某些值只能通过指针返回 
//传入的参数实际上是需要保存带回的结果的变量 
