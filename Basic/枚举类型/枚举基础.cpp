//ö��
//ö����һ���û�������������ͣ���enum
//enum ö����������{����0��....������n}
//�����ǳ������ţ�������int��ֵ�Ǵ�0��n 
#include<stdio.h>

enum COLOR {RED,YELLOW,GREEN}; 
//�������������� ��red 0 ��yellow 1��green 2 
//const int red = 0;
//const int yellow = 1;
//const int green = 2; 
int main(int argc,char const *argv[])
{
	int color = -1;
	char *colorName = NULL;
	
	printf("������ϲ������ɫ�Ĵ��룺");
	scanf("%d",&color);
	switch(color)
	{
		case RED:colorName = "red";break;
		case YELLOW:colorName = "yellow";break;
		case GREEN:colorName = "green";break;
		default:colorName = "unknown";break;
	}
	printf("��ϲ������ɫ��%s\n",colorName);
	
	return 0;
}
