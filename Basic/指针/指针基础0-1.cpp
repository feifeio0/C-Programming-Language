#include<stdio.h>
int main()
{
	/*printf("************sizeof可以看某变量的字节***********\n")
	int a = 1;
	double b = 2;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	//sizeof可以取字节 
	*/ 
	printf("************相邻变量地址***********\n");
	int i = 0;
	int p;
	printf("%p\n",&i);
	printf("%p\n",&p);
	//i是在p上面4个字节的位置
	printf("************数组里面相邻变量地址***********\n"); 
	int  a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	// 相邻变量差4个字节 
	
	
	return 0;
}
