// 20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    float fvalue = 1234567890.12345678901234567890;
    double dvalue = 1234567890.12345678901234567890;

    printf("float형 변수 = %30.25f\n", fvalue);
    printf("double형 변수 = %30.25lf\n", dvalue);
    
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    double light_speed = 300000;
    double distance = 149600000;

    double time;

    time = distance / light_speed;
    time = time / 60.0;

    printf("빛의 속도는 %lfkm/s\n", light_speed);
    printf("태양과 지구와의 거리 %lfkm\n", distance);
    printf("도달 시간은 %lf초\n", time);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char c;

    c = 'A';
    printf("A의 아스키 코드 = %d\n", c);

    printf("문자를 입력하시오 : ");
    c = getchar();

    printf("%c의 아스키 코드 = %d\n", c, c);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int id, pass;

    printf("아이디와 패스워드를 4개의 숫자로 입력하세요 : \n");
    printf("id :____\b\b\b\b");
    scanf("%d", &id);

    printf("pass :____\b\b\b\b");
    scanf("%d", &pass);

    printf("\a입력된 아이디는 \"%d\"이고 패스워드는 \"%d\"입니다.\n", id, pass);
    
    return 0;
}
*/

// oj 2-2장, 3-1장 신경쓰기

/*
#include <stdio.h>
int main(void)
{
    int x,y;

    x = 3;
    y = x*x - 5*x + 6;
    printf("%d\n", y);
}
*/

#include <stdio.h>
int main(void)
{
    printf("%d\n",5/4);
    return 0;
}