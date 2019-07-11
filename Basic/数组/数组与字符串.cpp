#include<stdio.h>
#include<string.h>
int main(void)
{
	char green[] = "富天";
	char greening[] = {'G','R','E','E','N','\0'};
	//第二种定义数组的方式不能有中文，最后一个元素必须是'\0'。 
	printf("%s\n",green);
	printf("%s\n",greening);
	//输出数组时 要使用 %s  
	puts(green); 
	//也可以使用puts来输出字符串 
	printf("字符串green长度为%d\n",strlen(green));
	printf("字符串greening长度为%d\n",strlen(greening));
	//strlen()获取字符串的长度且不包含\0,所以和汉字和字母长度不同
	char futianlv[] = "";
	strcpy(futianlv,green);
	printf("%s\n",futianlv); 
	//strcpy 是把后面的字符串覆盖在前面的字符串中 
	char greens[] = "绿王"; 
	strcat(futianlv,greens); 
	printf("%s\n",futianlv); 
	//strcat 是把后面的字符串拼接在前面的字符串的后面 
	return 0; 
}
