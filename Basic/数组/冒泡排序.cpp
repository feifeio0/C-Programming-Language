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
	// Ϊ����������������������û�ж���
	for(i=8;i>=0;i--)    //��������±� 
	{
		for(j=0;j<=i;j++)    //����ÿ������Ԫ�رȽϵ��±� 
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
	printf("\n����֮��##########################\n");
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
