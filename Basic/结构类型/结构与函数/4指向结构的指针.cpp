#include<stdio.h>
// ->��ʾָ����ָ�Ľṹ�����еĳ�Ա
struct date{
	int month;
	int day;
	int year;
}; myday;

struct date *p = &myday;
(*p).month = 12;
p->month = 12;
