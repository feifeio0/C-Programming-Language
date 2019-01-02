#include<stdio.h>
int main(void)
{
    int score[]={67,98,75,63,82,79,81,91,66,84};
    int i = 0,j=0,a=0;
    for(i=8;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(score[j]<score[j+1])
            {
                int a = 0;
                a = score[j];
                score[j] = score[j+1];
                score[j+1] = a;
            }
        }
    }
	for(a=0;a<10;a++)
	{
		if(a!=9)
		{
			printf("%d,",score[a]);
		}
		else
		{
			printf("%d",score[a]);
		}
	}
    return 0;
}
