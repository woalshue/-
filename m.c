// 20221241 손재민
/*
#include <stdio.h>
void sub(void)
{
    int auto_count = 0;
    static int static_count = 0;

    auto_count++;
    static_count++;
    printf("auto_count = %d\n", auto_count);
    printf("static_count = %d\n", static_count);
}

int main(void)
{
    sub();
    sub();
    sub();
    return 0;
}
*/

/*
// 좀 헷갈렸음. 다시 보기.
#include <stdio.h>
int factorial(int n);

int main(void)
{
    int x = 0, result;

    printf("정수를 입력하시오 : ");
    scanf("%d", &x);

    result = factorial(x);
    printf("%d!은 %d입니다.\n", x, result);
}

int factorial(int n)
{
    printf("factorial(%d)\n", n);

    if(n <= 1) return 1;
    else return n * factorial(n - 1);
}
*/

/*
// 이해 안 감. 다시 보기.
#include <stdio.h>
int fibbonacci(int n)
{
    if(n == 0)
    {
        return 0;
    }

    else if(n == 1)
    {
        return 1;
    }

    else 
    {
        return (fibbonacci(n - 1) + fibbonacci(n - 2));
    }
}

int main(void)
{
    for(int i = 0; i < 15; i++)
    {
        printf("%d ", fibbonacci(i));
    }
    printf("\n");
}
*/

/*
#include <stdio.h>
int calc(int v1, int v2, int op)
{
    int result;

    switch(op)
    {
        case 1 : result = v1 + v2; 
        break;
        case 2 : result = v1 - v2;
        break;
        case 3 : result = v1 * v2;
        break;
        case 4 : result = v1 / v2;
        break;
    }

    return result;
}

int main(void)
{
    int res;
    int oper, a, b;

    printf("계산 입력 (1: +, 2: -, 3: *, 4: /) : ");
    scanf("%d", &oper);

    printf("게산할 두 숫자를 입력 : ");
    scanf("%d %d", &a, &b);

    res = calc(a, b, oper);

    printf("계산 결과 : %d\n", res);
}
*/

#include <stdio.h>

void func1(int *a)
{
    *a = *a + 1;
    printf("전달받은 a ==> %d\n", *a);
}

int main()
{
    int a = 10;

    func1(&a);
    printf("func1() 실행 후의 a ==> %d\n", a);
}