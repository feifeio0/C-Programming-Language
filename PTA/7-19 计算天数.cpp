/*7-19 计算天数（15 分）
本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。

输入样例1:
2009/03/02
输出样例1:
61
输入样例2:
2000/03/02
输出样例2:
62
*/ 
#include<stdio.h>
int main(void)
{
	int years = 0;
	int mouth = 0;
	int days = 0;
	int days_ = 0;
	scanf("%d/%d/%d",&years,&mouth,&days);
	switch(mouth)
	{
		case 1:days_ = days;break;
		case 2:days_ = 31 + days;break;
		case 3:	
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+ days;break;
		}
		else
		{
			days_ = 31+28+days;break;
		}
		case 4:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+ days;break;
		}
		else
		{
			days_ = 31+28+31+days;break;
		}
		case 5:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+days;break;
		}
		else
		{
			days_ = 31+28+31+30+days;break;
		}
		case 6:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+days;break;
		}
		case 7:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+days;break;
		}
		case 8:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+31+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+31+days;break;
		}
		case 9:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+31+31+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+31+31+days;break;
		}
		case 10:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+31+31+30+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+31+31+30+days;break;
		}
		case 11:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+31+31+30+31+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+31+31+30+31+days;break;
		}
		case 12:
		if((years%4==0&&years%100!=0)||years%400==0)
		{
			days_ = 31 +29+31+30+31+30+31+31+30+31+30+days;break;
		}
		else
		{
			days_ = 31+28+31+30+31+30+31+31+30+31+30+days;break;
		}
	}
	printf("%d",days_);
 } 
