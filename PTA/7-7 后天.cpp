/*7-7 后天（5 分）
如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。
我们用数字1到7对应星期一到星期日。给定某一天，请你输出那天的“后天”是星期几。

输入格式：
输入第一行给出一个正整数D（1 ≤ D ≤ 7），代表星期里的某一天。

输出格式：
在一行中输出D天的后天是星期几。

输入样例：
3
输出样例：
5*/ 
#include<stdio.h>
int main()
{
  int D=0,D_2 = 0;
  scanf("%d",&D);
  D_2 = D+2;
  if(D_2>7)
  {
    printf("%d",D_2-7);
  }
  else
  {
    printf("%d",D_2);
  }
  return 0;
}
