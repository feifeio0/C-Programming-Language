#include<stdio.h>
int main()
{
	int a[13] = {[1]=2,4,[5]=6};
	//�������ڹ涨��λ�� ����λ����0
	int b[] = {1,2,3,4,5,6,7,8,9,10}; 
	int i;
	//for(i=0;i<number;i++)
	//{
	//	count[i] = 0;
	//}
	//����Ĵ�С��
	//sizeof�������������ռ�����ݵĴ�С
	 printf("%d",sizeof(b)/sizeof(b[0]));
	 for(i=0;i<sizeof(b)/sizeof(b[0]);i++)
	 {
	 	printf("%d",b[i]);
	 }
	 
	 
	 
	 return 0;
 } 
