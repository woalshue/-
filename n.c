//20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    int a;
    int b;
    char s[10];

    printf("정수를 입력 : ");
    scanf("%d", &a);
    printf("실수를 입력 : ");
    scanf("%f", &b);
    printf("문자열을 입력 : ");
    scanf("%d", &s);

    printf("\n정수의 10진수 ==> %d\n", a);
    printf("정수의 16진수 ==> %X\n", a);
    printf("정수의 8진수 ==> %o\n", a);
    printf("실수 ==> %10.3f\n", b);
    printf("문자열 ==> %s\n", s);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char s[20];

    printf("문자열을 입력 : ");
    gets(s);

    puts(s);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char ch;

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    ch = getch();
    putch(ch);

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
    char password[4] = "5678";
    char input[4];
    int i;


    printf("비밀번호 4글자를 입력하세요 : ");
    for(i = 0; i < 4; i++)
    {
        input[i] = getch();
    }

    if(strncmp(password, input, 4) == 0)
    {
        printf("\n비밀번호 통과 ~~\n");
    }
    
    else 
    {
        printf("\n입력한 비밀번호");
        for(i = 0; i < 4; i++)
        {
            putch[i];
        }
        printf("가 틀렸음\n");
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char ch;

    ch = getche();

    ch = getche();

    ch = getche();

    return 0;
}
*/

/*
#include <stdio.h>
void main()
{
    char ch;

    printf("문자열을 입력하세요 : ");
    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);

    ch = getchar();
    putchar(ch);
}
*/