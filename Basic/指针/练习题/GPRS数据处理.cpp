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
        gets(str);        /* 输入字符串 */
 
        if (strncmp(str, str2, 6) == 0)        /* 如果字符串的前6位是$GPRMC */
        {
            for (jiaoyan1 = str[1], i = 2; str[i] != '*'; i++)
                /* 提示：^运算符的作用是异或。将$和*之间所有的字符做^运算(第一个字符和第二个字符异或，结果再和第三个字符异或，依此类推)之后的值对65536取余后的结果 */
            {
                jiaoyan1 = jiaoyan1^str[i];
            }
 
            jiaoyan3 = jiaoyan1 % 65536;
 
            len = strlen(str);    /* 求出字符串长度 */
 
            for (i = len - 2, j = 0; j < 3; i++, j++)        /* 取出*后面的两个十六进制数字的值 */
            {
                jiaoyan2[j] = str[i];
            }
 
            sscanf(jiaoyan2, "%x", &jiaoyan4);
            /* %x以十六进制格式输入整型数，另外，如果你需要的话，可以用sscanf(s,"%d", &i)从字符串s中得到其所表达的整数数字给i。 */
 
            if (jiaoyan3 == jiaoyan4)        /* 如果校验正确 */
            {
                sscanf(str, "$GPRMC,%2d %2d %2d", &hh, &mm, &ss);
                /* 另外，如果你需要的话，可以用sscanf(s,"%d", &i)从字符串s中得到其所表达的整数数字给i。 */
            }
        }
    } while (strcmp(str, str1) != 0);        /* 循环，当输入的字符串不是END，继续循环 */
 
    hh = hh + 8;        /* 北京时间 */
 
    if (hh >= 24)        /* 如果大于24小时 */
    {
        hh = hh - 24;
    }
 
    printf("%02d:%02d:%02d", hh, mm, ss);        /* 不足两位时前面补0 */
 
    system("pause");
}
