#include "array.h"
#include<stdio.h>
#include<stdlib.h>

const BLOCK_SIZE = 20;

/*typedef struct {
	int *array;
	int size;
}Array; */

Array array_create(int init_size)
// �������� 
{
	Array a;
	a.size = init_size;
	a.array = (int*)malloc(sizeof(int)*a.size);
	return a;
}
/*
Array* array_create(Array* a,int init_size)
{
	a==NULL?
	a->size = init_size;
	a->array = ...;
	return a;
} ����ĺܸ��� ������ʹ�����ַ�ʽ
*/

void array_free(Array *a)
// ��������ռ� 
{
	free(a->array);
	a->array = NULL;
	a->size = 0; 
} 

int  array_size(const Array *a)//��װ 
// �ж��ٵ�Ԫ������ 
{
	return a->size;
}

int* array_at(Array *a,int index)
// ����ĳ����Ԫ 
{
	if(index >= a->size )
	{
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
		//index/BLOCK_SIZE ���λ���ĸ�BLOCK����  
		//��102/20+1��*20 - 100 = 20
		//��20�� 
	}
	return &(a->array[index]); 
}

void array_inflate(Array *a,int more_size)
{
	int q = (int)(a->size + more_size);
	int *p = (int*)malloc(sizeof(q));
	int i ;
	for(i=0;i<a->size;i++)
	{
		p[i] = a->array[i];
	}
	//memcpy����ѭ�� 
	free(a->array);
	a->array = p;
	a->size += more_size;
}
// �����鳤�� (����)

int main(int argc,char const *argv[])
{
	Array a = array_create(100);
	//printf("%d\n",a.size);//�Ľ�ʱ���鷳 
	printf("%d\n",array_size(&a));//��װ 
	*array_at(&a,0) = 10;
	printf("%d\n",*array_at(&a,0));
	int number;
	int cnt = 0;
	while(number != -1)
	{
		scanf("%d",&number);
		if(number != -1)
		{
			*array_at(&a,cnt++) = number;
			
		}
		//scanf("%d",array_at(&a,cnt++));
	} 
	
	array_free(&a);
	return 0;
}
