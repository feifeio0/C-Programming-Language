#include<stdio.h>
int main()
{
	int a[100][2],b[100][2],c[100][2];
	int i,j,k,l,flag=0;
	
	for(i=0;i<100;i++)
	{
		for(j=0;j<2;j++)
		{
			a[i][j] = 0;
			b[i][j] = 0;
			c[i][j] = 0;
		}
	}
	do
	{
		scanf("%d %d",&k,&l);
		a[k][0] = k;
		a[k][1] = l;
		c[k][0] = k;
	}while(k!=0);
	
	do
	{
		scanf("%d %d",&k,&l);
		b[k][0] = k;
		b[k][1] = l;
		c[k][0] = k;
	}while(k!=0);
	
	for(k=0;k<100;k++)
	{
		c[k][1] = a[k][1] + b[k][1];
	}
	
	for(i=99;i>=0;i--)
	{
		if(c[i][1]!=0)
		{
			if(c[i][0]!=0&&c[i][0]!=1)
			{
				if(flag>0)
				{
					printf("+%dx%d",c[i][1],c[i][0]);
					flag++;
				}
				else
				{
					printf("%dx%d",c[i][1],c[i][0]);
					flag++;
				}
			}
			if(c[i][0]==1)
			{
				if(flag>0)
				{
					printf("+%dx",c[i][1]);
					flag++;
				}
				else
				{
					printf("%dx",c[i][1]);
					flag++;
				}
			}
			if(c[i][0]==0)
			{
				if(flag>0)
				{
					printf("+%d",c[i][1]);
					flag++;
					break;
				}
				else
				{
					printf("%d",c[i][1]);
					flag++;
					break;
				}
			}
		}
	}
	return 0;

	
 } 
