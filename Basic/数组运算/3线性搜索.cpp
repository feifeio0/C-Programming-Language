
//线性搜索 遍历后找到位置输出 


#include<stdio.h> 
int search(int key,int a[],int len)
{
	int ret = -1;
	for(int i=0;i<len;i++)
	{
		if(key==a[i])
		{
			//return i;
			ret = i;
			break;
		}
	}
//	return -1; 违背了单一出口 
	return ret;
 } 
int main(void)
{
	int a[] = {1,3,2,5,12,14,23,6,9,45};
	int r = search(12,a,sizeof(a)/sizeof(a[0]));
	printf("%d\n",r);
	return 0;
}
