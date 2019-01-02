#include<stdio.h>
double pingjunfen(int arr[])
{
	double flag=0,sum=0,average=0.0;
	int i = 0;
    for(i=0;i<10;i++)
    {
        sum += arr[i];
        flag ++;
    }
    average = sum / flag ; 
    return average;
}
int main()
{
    int score[]={67,98,75,63,82,79,81,91,66,84};
    double average = 0.0;
    average = pingjunfen(score);
    printf("%.2f\n",average);
    return 0;
}
