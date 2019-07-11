#include<stdio.h>

//void minmax(int a[],int len,int *max,int *min); 
void minmax(int *a,int len,int *max,int *min); 
//函数参数表中的数组实际上是指针 
int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
	int min,max;
	
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a);
	//68   62fe00 
	
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	
	return 0;
}

//void minmax(int a[],int len,int *min,int *max)
void minmax(int *a,int len,int *min,int *max)
{
	int i;
	 
	printf("minmax sizeof(a)=%lu\n",sizeof(a));
	//64位架构字节是8  62fe00 
	printf("minmax a=%p\n",a);
	
	*min = *max = a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]<*min)
		{
			*min = a[i];
		}
		if(a[i]>*max)
		{
			*max = a[i];
		}
	}
}
