#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int x=2;
    int cnt=0;
    int i;
    int sum=0;

    do{
        int isprime=1;
        for(i=2;i<x;i++)
		{
            if(x%i==0)
			{
                isprime=0;
                break;
            }
        }
        if(isprime==1)
		{
            cnt++;
            if(cnt>=n&&cnt<=m)
			{   
                sum+=x;            
            }
        }
        x++;
    }while(0<cnt&&cnt<=200);
    printf("%d\n",sum);
    return 0;
}
