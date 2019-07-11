//动态内存分配 
#include<stdio.h>
#include<stdlib.h>
//void* malloc(size_t size); 
int main()
{
	int number;
	int *a;
	int i;
	printf("输入数量：");
	scanf("%d",&number);
	//int a[number];
	a = (int*)malloc(number*sizeof(int));
	//使用方法 
	for(i=0;i<number;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=number-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
 } 
