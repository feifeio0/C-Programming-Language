#include<stdio.h>
int main(void)
{
	int han[3] = {0,1,2};
	int ji[] = {0,1,2};
	int tian[3];
	// 元素个数不能大于定义的长度 
	tian[0] = 0;
	tian[1] = 1;
	tian[2] = 2;
	/* 定义数组的三种方式 */
	printf("%d\n",han[0]);
	// 输出han数组中的第一个元素
	printf("xxxxxxxxxxxxxxxxxxxxxx\n");
	int a = 0;
	for(a=0;a<3;a++)
	{
		printf("%d\n",ji[a]);
	 } 
	//遍历数组ji中的三个元素    避免出现越界
 } 
