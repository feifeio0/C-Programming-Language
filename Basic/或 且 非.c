#include<stdio.h>
int main(void)
{
	int a=3,b=4,c=5;
	int x,y;
	printf("%d\n",!(x=a)&&(y=b)&&0);
	//���x��ֵ֮�����������Ϊ0 �򲻽��к���ļ��� ��y������ֵ 
	printf("%d,%d",x,y);
	return 0;
}
