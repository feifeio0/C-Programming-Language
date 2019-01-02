#include<stdio.h>
//x86CPU低位在前 
typedef union{
	int i;
	char ch[sizeof(int)];
}CHI;

int main(int argc,char const *argv[])
{
	CHI chi;
	int i;
	chi.i = 1234;
	for(i=0;i<sizeof(int);i++)
	{
		printf("%02hhX",chi.ch[i]);
		//修饰符 16进制只有一个字节显示16进制补0 
	}
	printf("\n");
	
	return 0;
}
