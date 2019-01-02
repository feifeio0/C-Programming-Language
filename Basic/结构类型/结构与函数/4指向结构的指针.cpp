#include<stdio.h>
// ->表示指针所指的结构变量中的成员
struct date{
	int month;
	int day;
	int year;
}; myday;

struct date *p = &myday;
(*p).month = 12;
p->month = 12;
