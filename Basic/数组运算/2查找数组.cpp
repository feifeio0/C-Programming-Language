#include<stdio.h>
int search(int key,int a[],int length)
//数组作为参数时不能在[]中写数组的大小也不能利用sizeof计算元素个数 
{
	int ret = -1;
	int i;
	for(i=0;i<length;i++)
	{
		if(a[i] == key)
		{
			ret = i;
			break;
		}
	}
	return ret;
}
int main(void)
{
	int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d",&x);
	loc = search(x,a,sizeof(a)/sizeof(a[0]));
	if(loc != -1)
	{
		printf("%d在第%d个位置上\n",x,loc);
	}
	else
	{
		printf("%d不存在\n",x);
	}
	
	return 0;
}
