
#ifndef _ARRAY_H_
#define _ARRAY_H_

typedef struct {
	int *array;
	int size;
}Array;//*Array; 
//大多数情况不要定义指针 


Array array_create(int init_size);
// 创建数组 
void array_free(Array *a);
// 回收数组空间 
int  array_size(const Array *a);
// 有多少单元可以用 
int* array_at(Array *a,int index);
// 访问某个单元 
void array_inflate(Array *a,int more_size);
// 让数组长大 

#endif
