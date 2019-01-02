//µ¥´Ê³¤¶È 
#include<stdio.h>
int main(void)
{
	char ch; 
	int sum = 0;
	while((ch=getchar())!='.')
	{
		if(ch==' ')
		{
			if(sum!=0)
			{
				printf("%d ",sum);
				sum = 0;
			}
		}
		else
		{
			sum++;
		}
	}
	if(sum!=0)
	{
		printf("%d",sum);
	}
	return 0;
 } 
