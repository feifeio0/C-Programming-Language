//�ṹ���� 
//�ṹһ�㶼���ں������棬�������Ա��������ʹ�� 
#include<stdio.h>

struct date{
	int month;
	int day;
	int year;
};
//�����ṹ���� 
int main(int argc,char const *argv[])
{
	/*struct date{
		int month;
		int day;
		int year;
	};//�ֺŲ����� */ 
	
	struct date today;
	//�ṹ���� 
	today.month = 07;
	today.day = 31;
	today.day = 2014;
	
	printf("Today date is %i-%i-%i.\n",
	today.year,today.month,today.day);
	
	return 0;
}
