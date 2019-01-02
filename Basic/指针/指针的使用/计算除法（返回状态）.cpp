//通过指针返回实际的值 
//通过return返回函数运算的状态
// -1或0
#include<stdio.h>
//如果除法成功，返回1.否则返回0
int divide(int a,int b,int *result)
{
	int ret=1;
	if(b==0)
	{
		ret = 0;
	}
	else
	{
		*result = a/b;
	}
	return ret;
 } 
 //指针可以跨过函数进行传达数据 
 int main(void)
 {
 	int a=5;
 	int b=2;
 	int c;
 	if(divide(a,b,&c))
 	{
 		printf("%d/%d=%d\n",a,b,c);
	}
	return 0;
}
