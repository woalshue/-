// 20221241 º’¿ÁπŒ

#define _CRT_SECURE_NO_WARNINGS 

/*
#include <stdio.h>

int main()
{
    char s[20];
    FILE* rfp;

    rfp = fopen("C:\\Users\\chosun\\Desktop\\data1.txt", "r");

    fgets(s, 19, rfp);

    printf("∆ƒ¿œø°º≠ ¿–¿∫ πÆ¿⁄ø≠ : ");
    puts(s);

    fclose(rfp);

    return 0;
}
*/

/*
#include <stdio.h>
void main()
{
    char str[200];
    FILE* rfp;

    rfp = fopen("C:\\Windows\\win.ini", "r");

    for ( ; ; ) // π´«—∑Á«¡
    {
        fgets(str, 199, rfp);

        if (feof(rfp))
            break;

        printf("%s", str);
    }

    fclose(rfp);
}
*/

#include <stdio.h>

void main()
{
    FILE* rfp;
    int hap = 0;
    int in, i;

    rfp = fopen("C:\\Users\\chosun\\Desktop\\data2.txt", "r");

    for (i = 0; i < 5; i++)
    {
        fscanf(rfp, "%d", &in);
        hap = hap + in;
    }

    printf("«’∞Ë ==> %d\n", hap);

    fclose(rfp);
}
