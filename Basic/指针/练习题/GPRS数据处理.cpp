#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
main()
{
    char str[100] = "\0";
    char str1[] = "END";
    char str2[] = "$GPRMC";
 
    int jiaoyan1;
    char jiaoyan2[3];
    int jiaoyan3;
    int jiaoyan4;
 
    int i, j, len;
 
    int hh, mm, ss;
 
    do
    {
        gets(str);        /* �����ַ��� */
 
        if (strncmp(str, str2, 6) == 0)        /* ����ַ�����ǰ6λ��$GPRMC */
        {
            for (jiaoyan1 = str[1], i = 2; str[i] != '*'; i++)
                /* ��ʾ��^���������������򡣽�$��*֮�����е��ַ���^����(��һ���ַ��͵ڶ����ַ���򣬽���ٺ͵������ַ������������)֮���ֵ��65536ȡ���Ľ�� */
            {
                jiaoyan1 = jiaoyan1^str[i];
            }
 
            jiaoyan3 = jiaoyan1 % 65536;
 
            len = strlen(str);    /* ����ַ������� */
 
            for (i = len - 2, j = 0; j < 3; i++, j++)        /* ȡ��*���������ʮ���������ֵ�ֵ */
            {
                jiaoyan2[j] = str[i];
            }
 
            sscanf(jiaoyan2, "%x", &jiaoyan4);
            /* %x��ʮ�����Ƹ�ʽ���������������⣬�������Ҫ�Ļ���������sscanf(s,"%d", &i)���ַ���s�еõ����������������ָ�i�� */
 
            if (jiaoyan3 == jiaoyan4)        /* ���У����ȷ */
            {
                sscanf(str, "$GPRMC,%2d %2d %2d", &hh, &mm, &ss);
                /* ���⣬�������Ҫ�Ļ���������sscanf(s,"%d", &i)���ַ���s�еõ����������������ָ�i�� */
            }
        }
    } while (strcmp(str, str1) != 0);        /* ѭ������������ַ�������END������ѭ�� */
 
    hh = hh + 8;        /* ����ʱ�� */
 
    if (hh >= 24)        /* �������24Сʱ */
    {
        hh = hh - 24;
    }
 
    printf("%02d:%02d:%02d", hh, mm, ss);        /* ������λʱǰ�油0 */
 
    system("pause");
}
