#include<stdio.h>
int main()
{
	/*printf("************sizeof���Կ�ĳ�������ֽ�***********\n")
	int a = 1;
	double b = 2;
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(b));
	//sizeof����ȡ�ֽ� 
	*/ 
	printf("************���ڱ�����ַ***********\n");
	int i = 0;
	int p;
	printf("%p\n",&i);
	printf("%p\n",&p);
	//i����p����4���ֽڵ�λ��
	printf("************�����������ڱ�����ַ***********\n"); 
	int  a[10];
	printf("%p\n",&a);
	printf("%p\n",a);
	printf("%p\n",&a[0]);
	printf("%p\n",&a[1]);
	// ���ڱ�����4���ֽ� 
	
	
	return 0;
}
