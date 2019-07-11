#include "array.h"
#include<stdio.h>
#include<stdlib.h>

const BLOCK_SIZE = 20;

/*typedef struct {
	int *array;
	int size;
}Array; */

Array array_create(int init_size)
// 创建数组 
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
} 处理的很复杂 不建议使用这种方式
*/

void array_free(Array *a)
// 回收数组空间 
{
	free(a->array);
	a->array = NULL;
	a->size = 0; 
} 

int  array_size(const Array *a)//封装 
// 有多少单元可以用 
{
	return a->size;
}

int* array_at(Array *a,int index)
// 访问某个单元 
{
	if(index >= a->size )
	{
		array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE - a->size);
		//index/BLOCK_SIZE 算出位于哪个BLOCK里面  
		//（102/20+1）*20 - 100 = 20
		//涨20个 
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
	//memcpy代替循环 
	free(a->array);
	a->array = p;
	a->size += more_size;
}
// 让数组长大 (核心)

int main(int argc,char const *argv[])
{
	Array a = array_create(100);
	//printf("%d\n",a.size);//改进时很麻烦 
	printf("%d\n",array_size(&a));//封装 
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
