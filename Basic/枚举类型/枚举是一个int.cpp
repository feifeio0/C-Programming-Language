//输入常量符号 输出值 
#include<stdio.h>

enum color{red,yellow,green};
//声明一种数据类型 名字叫enum 
void f(enum color c);

int main(void)
{
	enum color t = yellow;
	//scanf("%d",&t);
	f(t);
	
	return 0;
 } 
 
void f(enum color c)
{
	printf("%d\n",c);
}
