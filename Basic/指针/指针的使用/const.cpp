//ָ�뱾�����ָ������������const 
#include<stdio.h>
int main()
{
	//ָ����const 
	int *const q = &i; //q��const
	*q = 26; //OK
	q++;  //ERROR
	
	//��ָ��const
	int i = 25; 
	const int* p =&i;
	*p = 26 //ERROR (*p)��const 
	i = 26;//OK
	p = &j;//OK
	
	int i ;
	const int* p1 = &i;  //��ָ�����޸� 
	int const* p2 = &i;  //��ָ�����޸� 
	int *const p3 = &i;  //ָ�벻���޸� 
	//��־��const��*��ǰ�滹�Ǻ��� 
	
	const int a[] = {1,2,3,4,5,6,}; 
	//���ݲ��ܱ��޸� 
	int sum(const int a[],int length);
	//����a���ᱻ�޸� 
	//�ṹ�ܸ��� ��Ҫ����ָ�� �������ݴ��±��޸�
	//���Դ���const 
} 
