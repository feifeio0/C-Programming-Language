//���볣������ ���ֵ 
#include<stdio.h>

enum color{red,yellow,green};
//����һ���������� ���ֽ�enum 
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
