#include <stdio.h>
int main(void)
{
    /*int x;
    int y;
    int sum;

    printf("첫 번째 숫자를 입력하시오 : ");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하시오 : ");
    scanf("%d", &y);

    sum = x + y;
    printf("두 수의 합 = %d\n", sum);*/


    /*int x;
    int y;
    int result;

    printf("첫 번째 숫자를 입력하십시오 : ");
    scanf("%d", &x);

    printf("두 번째 숫자를 입력하십시오 : ");
    scanf("%d", &y);

    result = x + y;
    printf("두 수의 합 = %d\n", result);
    result = x - y;
    printf("두 수의 차 = %d\n", result);
    result = x * y;
    printf("두 수의 곱 = %d\n", result);
    result = x / y;
    printf("두 수의 몫 = %d\n", result);*/


    int sum;
    int price_a;
    int price_h;
    int price_d;
    int nights;

    sum = 0;
    printf("여행은 몇박인가요? : ");
    scanf("%d", &nights);

    printf("항공권 가격 : ");
    scanf("%d", &price_a);

    sum = sum + price_a;

    printf("호텔 1박 가격 : ");
    scanf("%d", &price_h);
    sum = sum + nights * price_h;
    
    printf("하루에 필요한 용돈 : ");
    scanf("%d", &price_d);
    sum = sum + (nights + 1) * price_d;

    printf("====================\n");
    printf("총 여행 비용 : %d\n", sum);
    printf("====================\n");



    return 0;
}