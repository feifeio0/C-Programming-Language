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
// index����������˼  Ŀ���Ǽ�¼�ڼ����� 
int main(void)
{
	int arr1[] = {10,41,3,12,22};
	int arr2[] = {1,2,3,4,5} ;
	int i ;
	replaceMax(arr1,arr2[1]);
	//Ҫ����һ��replaceMax���� ʹarr1������Ԫ���滻
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);
	 } 
	return 0;
 } 
