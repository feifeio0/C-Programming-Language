#include<stdio.h>
int main(void)
{
	int green1[2][2] = {{10,20},{30,40}};
	int green2[2][2];
	green2[0][0] = 10;
	green2[0][1] = 20;
	green2[1][0] = 30;
	green2[1][1] = 40;
	int green3[][2] = {10,20,30,40};
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("green1数组%d行%d列元素的值为%d\n",i,j,green1[i][j]);
			printf("green2数组%d行%d列元素的值为%d\n",i,j,green2[i][j]);
			printf("green3数组%d行%d列元素的值为%d\n",i,j,green3[i][j]);
		}
	}
	return 0;
}
