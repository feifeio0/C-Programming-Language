//����ʱ���ͷ��ڴ� 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	void *p = 0;
	//��ϰ�߶���Ϊ0 
	int cnt = 0;
	//p=malloc(100*1024*1024);
	//p++;
	p = &i;
	free(p);
	//������ûfree����ʱ�������ڴ����½� 
	//���֣�����   ���֣��Ҳ������ʵ�ʱ��
	//free������free����� 
	return 0; 
 }
