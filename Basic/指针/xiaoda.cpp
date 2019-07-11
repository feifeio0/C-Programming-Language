#include<stdio.h>
void minmax(int a[],int len,int *max,int *min);

int main(void)
{
	int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
	int min,max;
	printf("main sizeof(a)=%lu\n",sizeof(a));
	printf("main a=%p\n",a); 
	minmax(a,sizeof(a)/sizeof(a[0]),&min,&max);
	printf("min=%d,max=%d\n",min,max);
	int *p =  &min;
	printf("*p=%d\n",*p);
	printf("p[0]=%d\n",p[0]);
	return 0;
 } 
 
 void minmax(int a[],int len,int *min,int *max)
 
 //函数中数组其实就是指针 (为什么必须是空方括号？)
 /* int sum(int *ar,int n)
    int sum(int *,int)
	int sum(int ar[],int n)
	int sum(int [],int)*/ 
 {
 	int i ;
 	printf("minmax sizeof(a)=%lu\n",sizeof(a));
 	printf("minmax a=%p\n",a);
 	a[0] = 1000;
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
