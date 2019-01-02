#include<stdio.h>
int main(void)
{
	int a,b,cnt=1,c=0;
	scanf("%d/%d",&a,&b);
	printf("0.");
	while(cnt<201)
	{
		if(a%b==0)
		{
			break;
		}
		a = a%b*10;
		printf("%d",a/b);
		cnt ++;
	}
	printf("\n");
	return 0;
}
