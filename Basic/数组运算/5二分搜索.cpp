

#include<stdio.h>

int search(int k,int a[],int len)
{
	int ret = -1;
	int left = 0;
	int right = len - 1; 
	while(left < right)
	{
		int mid = (left+right)/2;
		if(a[mid] == k)
		{
			ret = mid;
			break;
		}
		else if(a[mid]>k)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return ret;
 } 


int main()
{
	int amount[] = {1,2,5,7,5,8,4,10,58};
	int k = 10;
	int r = search(k,amount,sizeof(amount)/sizeof(amount[0]));
	printf("%d",r);
	
	return 0;
}
