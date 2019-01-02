#include<stdio.h>

int f(void);

int gALL = 12;//全局变量 

int main(int argc,char const *argv[])
{
	printf("in %s gALL=%d\n",__func__,gALL);
	f();//__func__输出当前函数的名字 
	printf("agn in %s gALL=%d\n",__func__,gALL);
	return 0;
} 

int f(void)
{
	printf("in %s gALL=%d\n",__func__,gALL);
	gALL += 2;
	printf("agn in %s gALL=%d\n",__func__,gALL);
	return gALL;
}
