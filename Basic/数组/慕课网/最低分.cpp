#include <stdio.h>
int zuidifen(int arr[])
{
    int i=0,min=0;
    for(i=0;i<9;i++)
    {
        if(arr[i]<arr[i+1])
        {
            min = arr[i];
            arr[i+1] = min;
        }
        else
        {
            min = arr[i+1];
        }
    }
    return min;
}
int main()
{
    int score[]={67,98,75,63,82,79,81,91,66,84};
    int min = 0;
    min = zuidifen(score);
    printf("%d\n",min);
    return 0;
}
