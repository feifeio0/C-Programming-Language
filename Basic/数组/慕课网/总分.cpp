#include <stdio.h>
int zongfen(int arr[])
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int score[]={67,98,75,63,82,79,81,91,66,84};
    int sum = 0;
    sum = zongfen(score);
    printf("%d\n",sum);
    return 0;
}
