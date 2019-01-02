//给指针加1，也就是把指针到下一个区域 
#include<stdio.h>
int main(void)
{
	char ac[] = {0,1,2,3,4,5,6,7,8,9,};
	char *p = ac;
	printf("p = %p\n",p);
	printf("p+1 = %p\n",p+1);
	printf("*(p+1)= %d\n",*(p+1));
	//相差1 sizeof(char) = 1
	//*p —ac[0]
	//*(p+1) —ac[1] 
	
	int ai[] = {0,1,2,3,4,5,6,7,8,9,};
	int *q = ai;
	printf("q = %p\n",q);
	printf("q+1 = %p\n",q+1);
	printf("*(q+1)= %d\n",*(q+1));
	//相差4 sizeof(int)=4 
	//如果指针不是指向连续的区域 +1是无意义的 
	
	char *p1 = &ac[5];
	printf("p1-p=%d\n",p1-p);
	int *q1 = &ai[6];
	printf("q1-q=%d\n",q1-q);
	//减法的意思就是说在两个指针之间相差几个区域 
	return 0;
 } 
