#include<stdio.h>
int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,-1};
	char *p = &ac[0];
	int i;
	/*for(i=0;i<sizeof(ac)/sizeof(ac[0]);i++)
	{
		printf("%d\n",ac[i]);
	}*/ 
	//for(p=ac;*p��=-1;p++) 
	while(*p!=-1)
	{
		printf("%d\n",*p++);
	}
	
	//*p++  ��*�����ȼ�û��++�� 
	//��������������������ռ���� 
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	//NULL��0��ַ
	//ָ�����Ͳ�ƥ���ǲ��ܻ��ำֵ�� 
	//ǿ������ת���ǿ��Եģ���ѧ����Ҫ�� 
	//int *p = &i;void *q = (void*)p; ��ϵͳ����
	//ͨ��q��i��void ͨ��p��i��int 
	return 0;
 } 
