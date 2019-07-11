#include<stdio.h>

void replaceMax(int arr[],int shu)
{
	int max = arr[0];
	int index = 0;
	int i ;
	for(i=1;i<5;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
			index = i;
		}
	}
	arr[index] = shu;
}
// index是索引的意思  目的是记录第几个数 
int main(void)
{
	int arr1[] = {10,41,3,12,22};
	int arr2[] = {1,2,3,4,5} ;
	int i ;
	replaceMax(arr1,arr2[1]);
	//要求定义一个replaceMax函数 使arr1中最大的元素替换
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);
	 } 
	return 0;
 } 
