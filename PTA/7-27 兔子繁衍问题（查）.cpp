/*7-27 兔子繁衍问题（15 分）
一对兔子，从出生后第3个月起每个月都生一对兔子。
小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，
请问第1个月出生的一对兔子，至少需要繁衍到第几个月时兔子总数才可以达到N对？

输入格式:
输入在一行中给出一个不超过10000的正整数N。

输出格式:
在一行中输出兔子总数达到N最少需要的月数。

输入样例:
30
输出样例:
9*/ 

#include<stdio.h>  
int main(void)  
{  
    int N;  
    int month=1;  
    int sum=1;  
    int now=0,pre=0;  
    scanf("%d",&N);  
    if(N==sum){  
        printf("%d\n",month);  
    }else{  
        month++;  
        now=pre+sum;  
        while(now<N){  
            month++;  
            pre=sum;  
            sum=now;  
            now=pre+sum;  
        }  
        printf("%d\n",month);  
          
    }  
    return 0;  
}  
