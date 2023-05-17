// 20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 3;
    int result;

    result = a + b * c / d;
    printf("연산값: %d\n", result);
    result = (a + b) * c / d;
    printf("연산값: %d\n", result);
    result = a = b = 1;
    printf("연산값: %d\n", result);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int temperature;
    printf("온도를 입력하시오: ");
    scanf("%d", &temperature);

    if(temperature > 0)
        printf("영상의 날씨입니다.\n");
    else
        printf("영하의 날씨입니다.\n");

    printf("현재 온도는 %d도입니다.\n", temperature);

    return 0;

}
*/

/*
#include <stdio.h>
int main(void)
{
    int number;
    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("입력된 정수는 짝수입니다.\n");

    else
        printf("입력된 정수는 홀수입니다.\n");

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int number;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &number);

    if(number >= 0 && number <= 100)
        printf("입력한 정수가 0에서 100 사이에 있습니다.\n");
    else
        printf("입력한 정수가 0에서 100 사이가 아닙니다.\n");


    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    char op;
    int x, y;

    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+')
        printf("%d\n", x + y);
    else if (op == '-')
        printf("%d\n", x - y);
    else if (op == '*')
        printf("%d\n", x * y);
    else if (op == '/')
        printf("%d\n", x / y);
    else
        printf("지원되지 않는 연산자입니다.\n");

    return 0;
}
*/

// 세개의 정수 중에서 큰 수 찾기. 해보기 (완료)
// switch 도 해보기 (완료)
// 회원가입 조건도 해보기
// 삼각형 변, 근의공식

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    printf("동전 던지기 게임을 시작합니다.\n");
    srand(time(NULL)); // 이해 안 됨.

    int coin = rand() % 2; // 0 또는 1이 들어갈 것.
    
    if (coin == 0)
        printf("앞면입니다.\n");
    else 
        printf("뒷면입니다.\n");
    
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int year;
    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d년은 윤년입니다.\n", year);
    else
        printf("%d년은 윤년이 아닙니다.\n", year);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int a, b, c, largest;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = a;
    if (largest < b) largest = b;
    if (largest < c) largest = c;
    printf("가장 큰 정수는 %d이다.\n", largest);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int month, days;

    printf("일수를 알고 싶은 달을 입력하시오: ");
    scanf("%d", &month);

    switch (month)
    {
    case 2: 
        days = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);

    return 0;
}
*/