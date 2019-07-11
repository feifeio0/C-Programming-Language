//结构类型 
//结构一般都放在函数外面，这样可以被多个函数使用 
#include<stdio.h>

struct date{
	int month;
	int day;
	int year;
};
//声明结构类型 
int main(int argc,char const *argv[])
{
	/*struct date{
		int month;
		int day;
		int year;
	};//分号不能忘 */ 
	
	struct date today;
	//结构变量 
	today.month = 07;
	today.day = 31;
	today.day = 2014;
	
	printf("Today date is %i-%i-%i.\n",
	today.year,today.month,today.day);
	
	return 0;
}
