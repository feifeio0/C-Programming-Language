#include<stdio.h>
//在输入函数中创建一个临时的结构变量
//然后把这个结构返回给调用者 
struct point {
	int x;
	int y;
}; 

struct point getStruct(void);
void output(struct point);

int main(int argc,char const *argv[])
{
	struct point y = {0,0};
	y = getStruct();
	output(y);
	return 0;
}

struct point getStruct(void)
{
	struct point p;
	scanf("%d",&p.x);
	scanf("%d",&p.y);
	printf("%d,%d\n",p.x,p.y);
	return p;
}

void output(struct point p)
{
	printf("%d,%d",p.x,p.y);
}
