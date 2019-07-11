//结构成员 使用.运算符来访问成员
//today.day 
//数组  使用[]和下标来访问成员 
//a[0]
//对于整个结构，可以做赋值，取地址，也可以传递给函数参数
//p1 = (struct point){5,10} 相当于p1.x = 5 p1.y = 10
#include<stdio.h>
struct date{
	int month;
	int day;
	int year;
};

int main(int argc,char const *argv[])
{
	struct date today;
	today = (struct date){07,31,2014};
	struct date day;
	day = today;
	day.year = 2015;
	
	printf("Today date is %i-%i-%i.\n",
	today.year,today.month,today.day);
	printf("The day date is %i-%i-%i.\n",
	day.year,day.month,day.day);
	
	return 0;
}
