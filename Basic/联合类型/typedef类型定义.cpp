#include<stdio.h>

typedef int length;
//使length成为 int 类型的别名 

rypedef char* Strings[10];
//Strings是10个字符串的数组的类型

typedef struct node{
	int data;
	struct node *next;
}aNode;
或
typedef struct node aNode;
//这样用aNode就可以代替struct node 



typedef long int64_t;
typedef struct AData(
	int month;
	int day;
	int year;
) Date;

int64_t i = 10000000000000;
Date d = {9,1,2005};


typedef struct {
	int month;
	int day;
	int year;
}Date;
