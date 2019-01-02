#include<stdio.h>
int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
	char *p = &ac[0];
	int i;
	/*for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++)
	{
		printf("%d\n",ac[i]);
	}*/ 
	//for(p=ac;*p！=-1;p++) 
	while(*p!=-1)
	{
		printf("%d\n",*p++);
	}
	
	//*p++  中*的优先级没有++高 
	//经常用于数组类的连续空间操作 
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	//NULL是0地址
	//指针类型不匹配是不能互相赋值的 
	//强制类型转换是可以的（初学不必要） 
	//int *p = &i;void *q = (void*)p; （系统程序）
	//通过q看i是void 通过p看i是int 
	return 0;
 } 
