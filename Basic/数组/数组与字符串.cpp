#include<stdio.h>
#include<string.h>
int main(void)
{
	char green[] = "����";
	char greening[] = {'G','R','E','E','N','\0'};
	//�ڶ��ֶ�������ķ�ʽ���������ģ����һ��Ԫ�ر�����'\0'�� 
	printf("%s\n",green);
	printf("%s\n",greening);
	//�������ʱ Ҫʹ�� %s  
	puts(green); 
	//Ҳ����ʹ��puts������ַ��� 
	printf("�ַ���green����Ϊ%d\n",strlen(green));
	printf("�ַ���greening����Ϊ%d\n",strlen(greening));
	//strlen()��ȡ�ַ����ĳ����Ҳ�����\0,���Ժͺ��ֺ���ĸ���Ȳ�ͬ
	char futianlv[] = "";
	strcpy(futianlv,green);
	printf("%s\n",futianlv); 
	//strcpy �ǰѺ�����ַ���������ǰ����ַ����� 
	char greens[] = "����"; 
	strcat(futianlv,greens); 
	printf("%s\n",futianlv); 
	//strcat �ǰѺ�����ַ���ƴ����ǰ����ַ����ĺ��� 
	return 0; 
}
