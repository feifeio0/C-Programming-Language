//自动计数的枚举 (小套路) 
//遍历所有的枚举量
//建立一个用枚举量作下标的数组 
#include<stdio.h>
enum COLOR {RED,YELLOW,GREEN,NumCOLORS};
//最后放一个numof... 
int main(int argc,char const *argv[])
{
	int color = -1;
	char *ColorNames[NumCOLORS] = {"red","yellow","green",};
	char *colorName = NULL;
	
	printf("输入你喜欢的颜色的代码：");
	scanf("%d",&color);
	if(color>=0&&color<NumCOLORS)
	{
		colorName = ColorNames[color];
	}
	else
	{
		colorName = "unknown";
	}
	printf("你喜欢的颜色是%s\n",colorName);
	
	return 0;
}
