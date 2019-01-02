//枚举
//枚举是一种用户定义的数据类型，用enum
//enum 枚举类型名字{名字0，....，名字n}
//他们是常量符号，类型是int，值是从0到n 
#include<stdio.h>

enum COLOR {RED,YELLOW,GREEN}; 
//创建了三个常量 ，red 0 ，yellow 1，green 2 
//const int red = 0;
//const int yellow = 1;
//const int green = 2; 
int main(int argc,char const *argv[])
{
	int color = -1;
	char *colorName = NULL;
	
	printf("输入你喜欢的颜色的代码：");
	scanf("%d",&color);
	switch(color)
	{
		case RED:colorName = "red";break;
		case YELLOW:colorName = "yellow";break;
		case GREEN:colorName = "green";break;
		default:colorName = "unknown";break;
	}
	printf("你喜欢的颜色是%s\n",colorName);
	
	return 0;
}
