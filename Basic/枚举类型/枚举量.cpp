//定义排比的名字，用枚举比const int方便
//枚举比宏（macro）好，因为枚举有int类型 
#include<stdio.h>

enum COLOR {RED=1,YELLOW,GREEN=5,NumCOLORS};

int main(int argc,char const *argv[])
{
	printf("code for GREEN is %d\n",GREEN);
	return 0;
}
