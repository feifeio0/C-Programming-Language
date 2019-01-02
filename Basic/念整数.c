#include<stdio.h>
int main(void)
{
	int shu=0,shu_=0,a=1,b=0,c=1,d=0,e=0;
	scanf("%d",&shu);
	shu_ = shu;
	if(shu<0)
	{
		printf("fu ");
		shu = (-1) * shu;
	}

	e = shu%10;
	do
	{
		shu_ = shu_ / 10; 
		if(shu_!=0)
		{
			a++;
		}
	}while(shu_!=0);
	
	for(b=1;b<a;b++)
	{
		c *= 10;
	}
	
	while(c!=1)
	{
		d = shu / c;
		shu = shu % c;
		switch(d)
		{
			case 0:printf("ling ");break; 
			case 1:printf("yi ");break;
			case 2:printf("er ");break;
			case 3:printf("san ");break;
			case 4:printf("si ");break;
			case 5:printf("wu ");break;
			case 6:printf("liu ");break;
			case 7:printf("qi ");break;
			case 8:printf("ba ");break;
			case 9:printf("jiu ");break;
		}
		c /=10;
	}
	
	switch(e)
	{
		case 0:printf("ling");break; 
		case 1:printf("yi");break;
		case 2:printf("er");break;
		case 3:printf("san");break;
		case 4:printf("si");break;
		case 5:printf("wu");break;
		case 6:printf("liu");break;
		case 7:printf("qi");break;
		case 8:printf("ba");break;
		case 9:printf("jiu");break;
	}
	return 0;
 } 
