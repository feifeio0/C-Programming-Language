//指针本身和所指的向量都可能const 
#include<stdio.h>
int main()
{
	//指针是const 
	int *const q = &i; //q是const
	*q = 26; //OK
	q++;  //ERROR
	
	//所指是const
	int i = 25; 
	const int* p =&i;
	*p = 26 //ERROR (*p)是const 
	i = 26;//OK
	p = &j;//OK
	
	int i ;
	const int* p1 = &i;  //所指不能修改 
	int const* p2 = &i;  //所指不能修改 
	int *const p3 = &i;  //指针不能修改 
	//标志是const在*的前面还是后面 
	
	const int a[] = {1,2,3,4,5,6,}; 
	//数据不能被修改 
	int sum(const int a[],int length);
	//数组a不会被修改 
	//结构很复杂 需要传入指针 但是数据大怕被修改
	//所以传入const 
} 
