#include <stdio.h>
int zuigaofen(int arr[])
{
    int i=0,max=0;
    for(i=0;i<9;i++)
    {
        if(arr[i]>arr[i+1])
        {
            max = arr[i];
            arr[i+1] = max;
            continue;
        }
        else
        {
            max = arr[i+1];
            continue;
        }
    }
    return max;
}
int main()
{
    int score[]={67,98,75,63,82,79,81,91,66,84};
    int max=0;
    max = zuigaofen(score);
    printf("%d\n",max);
    return 0;
}
