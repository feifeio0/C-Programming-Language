//�ṹ��Ա ʹ��.����������ʳ�Ա
//today.day 
//����  ʹ��[]���±������ʳ�Ա 
//a[0]
//���������ṹ����������ֵ��ȡ��ַ��Ҳ���Դ��ݸ���������
//p1 = (struct point){5,10} �൱��p1.x = 5 p1.y = 10
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
