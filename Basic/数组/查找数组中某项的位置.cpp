#include<stdio.h>
int getindex(int arr[5],int shu)
{
	int i;
	int index=-1;
	for(i=0;i<5;i++)
	{
		if(arr[i]==shu)
		{
			index = i;
			break;
		}
	}
	return index;
}

int main()
{
	int arr[5]={3,12,9,8,6};
	int shu = 8;
	int index = getindex(arr,shu);
	if(index!=-1)
	{
		printf("%d�������д��ڣ��±�Ϊ%d\n",shu,index);
	}
	else
	{
		printf("%d�������в�����\n",shu);
	}
	return 0;
}
