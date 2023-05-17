// 20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    int x,y,result;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    result = x + y;
    printf("%d + %d = %d\n", x, y, result);

    result = x - y;
    printf("%d - %d = %d\n", x, y, result);
    
    result = x * y;
    printf("%d x %d = %d\n", x, y, result);

    result = x / y;
    printf("%d / %d = %d\n", x, y, result);

    result = x % y;
    printf("%d %% %d = %d\n", x, y, result);

    return 0;

}
*/

/*
#include <stdio.h>
int main(void) 
{
    double x, y, result;

    printf("두개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    result = x + y;
    printf("%lf + %lf = %lf\n", x, y, result); 

    result = x - y;
    printf("%lf - %lf = %lf\n", x, y, result); 

    result = x * y;
    printf("%lf x %lf = %lf\n", x, y, result); 

    result = x / y;
    printf("%lf / %lf = %lf\n", x, y, result); 

    return 0;
}
*/

/*
// 시간, 분, 초
#include <stdio.h>
#define MINIUTE_TO_TIME 3600 // 1시간에 3600초
#define SECOND_TO_MINUTE 60
int main(void)
{
    int input, time, minute, second;

    printf("초단위의 시간을 입력하시오: "); // 4580
    scanf("%d", &input);

    time = input / MINIUTE_TO_TIME; // 1
    minute = input % MINIUTE_TO_TIME / SECOND_TO_MINUTE; // 4580에서 3600을 나눈 값의 나머지(초로 나옴)를 또 60으로 나눔. 1분에 60초니까
    second = input % MINIUTE_TO_TIME % SECOND_TO_MINUTE; // 4580초에서 3600을 나눈 값의 나머지(초)를 또 60으로 나눈 값의 나머지를 받음. 

    printf("%d초는 %d시간 %d분 %d초입니다.\n", input, time, minute, second);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int days, years, weeks;
    printf("총 일수를 입력하시오: ");
    scanf("%d", &days); // 389

    years = (days / 365); // 1년
    weeks = (days % 365) / 7; // 389 나누기 365 한 값의 나머지 일을 한 주에는 7일이니까 7로 나무면 주 수 나옴
    days = days - ((years * 365) + (weeks * 7)); // 연 값에 365를 곱한 365와 주 값에 7을 곱한 값을 전체 일에서 뺌

    printf("%d년", years);
    printf("%d주", weeks);
    printf("%d일\n", days);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int money, price, return_m, coin_500, coin_100, coin_10;

    printf("투입한 돈: "); // 1000
    scanf("%d", &money);
    printf("물건 값: "); // 240
    scanf("%d", &price); 

    return_m = money - price; // 760
    coin_500 = return_m / 500; // 1
    return_m = return_m - coin_500 * 500; // 260
    coin_100 = return_m / 100; // 2
    return_m = return_m - coin_100 * 100; // 60
    coin_10 = return_m / 10; // 6


    printf("\n거스름돈: %d\n\n", money - price); // 760
    printf("500원 동전의 개수: %d\n", coin_500);
    printf("100원 동전의 개수: %d\n", coin_100);
    printf("10원 동전의 개수: %d\n", coin_10);

    return 0;
} 
*/

/*
#include <stdio.h>
int main(void)
{
    int x = 9;
    int y = 10;

    printf("%08X & %08X = %08X\n", x, y, x, & y);
    printf("%08X | %08X = %08X\n", x, y, x | y);
    printf("%08X ^ %08X = %08X\n", x, y, x ^ y);
    printf("~%08X = %08X\n", x, ~x);

    return 0; 
}
*/

#include <stdio.h>
int main(void)
{
    printf("%d\n", 32767 % 100);
    return 0;
}