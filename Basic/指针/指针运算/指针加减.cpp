//��ָ���1��Ҳ���ǰ�ָ�뵽��һ������ 
#include<stdio.h>
int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
	char *p = ac;
	printf("p = %p\n",p);
	printf("p+1 = %p\n",p+1);
	printf("*(p+1)= %d\n",*(p+1));
	//���1 sizeof(char) = 1
	//*p ��ac[0]
	//*(p+1) ��ac[1] 
	
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	printf("q = %p\n",q);
	printf("q+1 = %p\n",q+1);
	printf("*(q+1)= %d\n",*(q+1));
	//���4 sizeof(int)=4 
	//���ָ�벻��ָ������������ +1��������� 
	
	char *p1 = &ac[5];
	printf("p1-p=%d\n",p1-p);
	int *q1 = &ai[6];
	printf("q1-q=%d\n",q1-q);
	//��������˼����˵������ָ��֮���������� 
	return 0;
 } 
