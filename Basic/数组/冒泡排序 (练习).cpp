#include<stdio.h>
int main(void)
{
	double arr[] = {1.78,1.77,1.82,1.79,1.85,1.75,1.86,1.77,1.81,1.80};
	int i=0,j=0;
	for(i=0;i<10;i++)
	{
		if(i!=9)
		{
			printf("%.2f,",arr[i]);
		}
		else
		{
			printf("%.2f",arr[i]);
		}
	}
	for(i=8;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				double temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("\n≈≈–ÚÕÍ±œ**********************\n");
	
	for(i=0;i<10;i++)
	{
		if(i!=9)
		{
			printf("%.2f,",arr[i]);
		}
		else
		{
			printf("%.2f",arr[i]);
		}
	 } 
	 return 0;
 } 
