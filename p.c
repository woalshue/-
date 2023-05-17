// 20221241 손재민

/*
#include <stdio.h>
void main()
{
    char s[20];
    FILE* wfp;

    wfp = fopen("c:\\data3.txt", "w");

    printf("문자열을 입력 : ");
    gets(s);

    fputs(s, wfp);

    fclose(wfp);
}
*/

/*
#include <stdio.h>
void main()
{
    char str[200];
    FILE* rfp;
    FILE* wfp;

    rfp = fopen("c:\\windows\\win.ini", "r");
    wfp = fopen("c:\\data6.txt", "w");

    for( ; ; )
    {
        fgets(str, 199, rfp);

        if(feof(rfp))
            break;

        fputs(str, wfp);
    }

    fclose(rfp);
    fclose(wfp);
}
*/

#include <stdio.h>
void main()
{
    FILE* wfp;
    int hap = 0;
    int in, i;

    wfp = fopen("c:\\data4.txt", "w");

    for(i = 0; i < 5; i++)
    {
        printf("숫자 %d : ", i + 1);
        scanf("%d", &in);
        hap = hap + in;
    }

    fprintf(wfp, "합계 ==> : %d\n", hap);

    fclose(wfp);
}