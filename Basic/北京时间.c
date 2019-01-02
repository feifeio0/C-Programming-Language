#include<stdio.h>
int main(void)
{
	int UTC,UTC_hours,UTC_min,BJT,BJT_hours,BJT_min;
	scanf("%d",&BJT);
	BJT_hours = BJT/100;
	BJT_min = BJT%100+BJT_hours*60;
	UTC_min = BJT_min - 480;
	if(UTC_min<0)
	{
		UTC_min += 1440; 
	}
	UTC_hours = UTC_min/60;
	UTC_min = UTC_min%60;
	UTC = UTC_hours*100 + UTC_min;
	printf("%d",UTC);
	return 0;
 } 
