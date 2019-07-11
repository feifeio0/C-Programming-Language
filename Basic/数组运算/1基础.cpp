#include<stdio.h>
int main()
{
	int a[13] = {[1]=2,4,[5]=6};
	//把数放在规定的位置 其他位置是0
	int b[] = {1,2,3,4,5,6,7,8,9,10}; 
	int i;
	//for(i=0;i<number;i++)
	//{
	//	count[i] = 0;
	//}
	//数组的大小？
	//sizeof能求出整个数组占据内容的大小
	 printf("%d",sizeof(b)/sizeof(b[0]));
	 for(i=0;i<sizeof(b)/sizeof(b[0]);i++)
	 {
	 	printf("%d",b[i]);
	 }
	 
	 
	 
	 return 0;
 } 
