#include<stdio.h>

typedef int length;
//ʹlength��Ϊ int ���͵ı��� 

rypedef char* Strings[10];
//Strings��10���ַ��������������

typedef struct node{
	int data;
	struct node *next;
}aNode;
��
typedef struct node aNode;
//������aNode�Ϳ��Դ���struct node 



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
