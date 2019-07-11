//数组变量是特殊的指针
#include<stdio.h>
int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11};
	int b = 10; //[]的测试
	
	int *p = a;
	printf("*p=%d，p=%p\n",*p,p);
	//p代表的是地址 *p代表的是地址代表的值 
	//无需用&取地址 因为数组变量本身表达地址 
	
	int *q = &a[1];
	//数组的单元表达的是变量，需要使用&
	
	int *w = &b;
	printf("*w=%d\n",*w);
	printf("w[0]=%d\n",w[0]);
	//[]运算符可以对数组和指针做
	//把w看作一个数组 只不过数组里的元素很少 
	
	printf("*a=%d\n",*a);
	//*可以对指针和数组做 
	
	//int b[] ---- int * const b 
	//数组变量是const的指针所以不能被赋值 
	return 0;
 } 
