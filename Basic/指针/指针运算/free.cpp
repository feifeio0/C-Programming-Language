//合适时机释放内存 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	void *p = 0;
	//好习惯定义为0 
	int cnt = 0;
	//p=malloc(100*1024*1024);
	//p++;
	p = &i;
	free(p);
	//申请了没free，长时间运行内存逐渐下降 
	//新手：忘了   老手：找不到合适的时机
	//free过后再free会崩溃 
	return 0; 
 }
