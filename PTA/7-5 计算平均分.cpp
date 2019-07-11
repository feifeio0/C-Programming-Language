/*7-5 计算平均分（5 分）
已知某位学生的数学、英语和计算机课程的成绩分别是87分、72分和93分，求
该生3门课程的平均成绩（结果按整型输出）。

输入格式：
本题无输入



输出格式：
按照下列格式输出结果：

math = 87, eng = 72, comp = 93, average = 计算所得的平均成绩*/ 
#include<stdio.h>
int main(void)
{
  int average = (87 + 72+ 93)/3;
  printf("math = 87, eng = 72, comp = 93, average = %d",average);
  return 0;
}
