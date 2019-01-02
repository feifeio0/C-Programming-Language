#include <stdio.h>
#define N 10
//打印分数 
void printScore(int score[])
{
	int i;
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",score[i]);               
	}
	printf("\n");     
}
//计算考试总分 
int getTotalScore(int score[])
{
	int sum = 0;
	int i;
	for(i=0;i<N;i++)
	{
		sum+=score[i];                
	} 
	return sum;
}
//计算平均分 
int getAvgScore(int score[])
{
	return getTotalScore(score)/N;   
}
//计算最高分 
int getMax(int score[])
{
	int max = -1;
	int i;
	for(i=0;i<N;i++)
	{
		if(score[i]>max)
		{
			max = score[i];              
		}                
	} 
	return max;
}
//计算最低分 
int getMin(int score[])
{
	int min =100;
	int i;
	for(i=0;i<N;i++)
	{
		if(score[i]< min)
		{
			min = score[i];              
		}                
	} 
	return min;
}
//分数降序排序 
void sort(int score[])
{
	int i,j;
	for(i=N-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(score[j]<score[j+1])
			{
				int temp;
				temp = score[j];
				score[j] = score[j+1]; 
				score[j+1]=temp;                  
			}                 
		}                   
	}
	printScore(score);     
}
 

int main()
{
	int score[N]={67,98,75,63,82,79,81,91,66,84};
	int sum,avg,max,min;
	sum = getTotalScore(score);
	avg = getAvgScore(score);
	max = getMax(score);
	min = getMin(score);
	printf("总分是：%d\n",sum);
	printf("平均分是：%d\n",avg);
	printf("最高分是：%d\n",max);
	printf("最低分是：%d\n",min);
	printf("----------成绩排名---------\n");
	sort(score);
	return 0;    
}

