#include<stdio.h>
int main(void)
{
	int arr[] = {99,94,95,93,92,91,90,88,97,89};
	int i,j;
	for(i=0;i<10;i++)
	{
		if(i != 9)
		{
			printf("%d,",arr[i]);
		}
		else
		{
			printf("%d",arr[i]);
		}
	}
	// 为了让数组最后输出的数后面没有逗号
	for(i=8;i>=0;i--)    //控制最大下标 
	{
		for(j=0;j<=i;j++)    //控制每次相邻元素比较的下标 
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		 } 
	 } 
	printf("\n排序之后##########################\n");
	for(i=0;i<10;i++)
	{
		if(i!= 9)
		{
			printf("%d,",arr[i]);
		}
		else
		{
			printf("%d",arr[i]);
		}
	}
	return 0;
}
