// 20221241 손재민

/*
#include <stdio.h>

void print_name()
{
    printf("************************\n");
    printf("조선대학교 컴퓨터공학과\n");
    printf("손재민\n");
    printf("************************\n");
}

int main(void)
{
    print_name();
    print_name();

    return 0;
}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int z = get_integer();
    int result = x + y + z;
    printf("세 수의 합 : %d\n", result);
    
    return 0;
}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int get_min(int x, int y)
{
    if(x < y) return(x);
    else return(y);
}

int main(void)
{
    int a = get_integer();
    int b = get_integer();
    
    printf("두 수 중에서 작은 수는 %d입니다.\n", get_min(a, b));

    return 0;
}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y)
{
    int i, result = 1;

    for(i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int result = power(x, y);
    printf("%d의 %d승 = %d\n", x, y, result);

    return 0;

}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int plus(int x, int y)
{
    int result = x + y;
    return(result);
}

int minus(int x, int y)
{
    int result = x - y;
    return(result);
}

int time(int x, int y)
{
    int result = x * y;
    return(result);
}

int divide(int x, int y)
{
    int result = x / y;
    return(result);
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int result_plus = plus(x, y);
    int result_minus = minus(x, y);
    int result_time = time(x, y);
    int result_divide = divide(x, y);

    printf("두 수의 합 = %d\n", result_plus);
    printf("두 수의 차 = %d\n", result_minus);
    printf("두 수의 곱 = %d\n", result_time);
    printf("두 수의 몫 = %d\n", result_divide);

    return 0;
}
*/

/*
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
    int sum;
    sum = compute_sum(100);
    printf("1부터 100까지의 합 = %d\n", sum);
    
    return 0;
}

int compute_sum(int n)
{
    int i, result = 0;
    for(i = 0; i <= 100; i++)
    {
        result = result + i;
    }
    return result;
}
*/

/*
#include <stdio.h>
int get_integer()
{
    int value;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int power(int x, int y)
{
    int i, result = 1;

    for(i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}

int main(void)
{
    int x = get_integer();
    int y = get_integer();
    int result = power(x, y);
    printf("%d의 %d승 = %d\n", x, y, result);

    return 0;

}
*/