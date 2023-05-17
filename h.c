//20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    int i, sum = 0;

    for(i = 1; i <= 1000; i++;)
    {
        sum = sum + i; // sum += i 와 같음
    }
    printf("1부터 1000까지의 정수의 합 = %d\n", sum);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i;
    printf("**********\n");

    for(i = 0; i < 5; i++)
    {
        printf("*        *\n");
        
    }
    printf("**********\n");
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int num, i;
    printf("정수를 입력하시오: ");
    scanf("%d", &num); //36 -> 36의 약수를 구할 것. 
    
    for(i = 1; i <= num; i++) // 1부터 36까지 i를 하나씩 증가시키면서
    {
        if(num % i == 0) // i를 하나씩 증가시키는 동안 36이 i로 나누어 떨어지는 경우
        {
            printf("%d ", i); // 그런 경우에만 그때의 i를 출력. 곧 약수가 됨. 
        }
    }
    printf("\n\n");
    return 0;
}
*/

/*
#include <stdio.h> 
int main(void)
{
    int x, y;

    for(y = 0; y < 5; y++) // 첫 번째 줄 ~ 다섯 번째 줄
    {
        for(x = 0; x < 10; x++) // 0부터 9까지 총 한 줄에 10번 찍음
        {
            printf("*"); // 한 줄로 찍으니까 줄바꿈 없어야 함
        }
        printf("\n"); // 줄바꿈을 이용하여 딱 10개만 찍고 다음 줄로 내려감
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int x, y;
    
    for(x = 1; x < 10; x++) // x <= 9로 해도 됨
    {
        printf("\n## %d단\n", x);

        for(y = 1; y < 10; y++) // y <= 9로 해도 됨
        {
            printf("%d x %d = %d\n", x, y, x * y);
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i;
    double number, sum = 0.0;

    for(i = 1; i <= 10; i++) // 10개의 실수를 받아야 하므로
    {
        printf("%d번째 실수를 입력하시오 : ", i); 
        scanf("%lf", &number);

        if(number < 0.0) // 만약 입력받은 숫자가 음수라면
        {
            break; // 루프 종료. 만약 continue를 쓰고 음수를 입력한다면 sum에도 더해지지 않고 현재 반복도 종료하고 해당 음수는 for문을 탈출해버림. 그 뒤 다시 다음 반복을 시작
        }
        sum = sum + number; // 누적 입력값 전부 더해줌
    }
    printf("합계 = %lf\n", sum);
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i;

    for(i = 0; i < 10; i++)
    {
        if(i % 2 == 1)
        {
            continue;
        }
        printf("정수 : %d\n", i);
    }
    return 0;
}
*/

// while문의 무한 반복은 while(1)이런 식으로. 괄호 안에 어떤 숫자든 넣어도 됨. 음수도 됨. 0만 아니면 됨. 
// for문의 무한 반복은 for()이런 식으로. 초기값도 없고 조건도 없고 증감도 없으면 됨. 

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, ans;
    printf("산수 문제를 자동으로 출제합니다.\n");

    while(1)
    {
        int x = rand() % 100;
        int y = rand() % 100;
        printf("%d + %d = ", x, y);
        scanf("%d", &ans); // 입력한 답을 ans로 받음

        if(x + y == ans) // 만약 x + y 값이 입력한 ans와 같다면(답이 맞다면)
        {
            printf("맞았습니다.\n");
            break; // 맞았으니 break를 통해 반복 루프 종료
        }

        else // 맞지 않다면 
        {
            printf("틀렸습니다.\n"); // 출력하고 다시 처음으로 돌아가 랜덤함수로 새로운 숫자를 뽑아 문제를 다시 냄
        }

    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int num, i, j, k;
    scanf("%d", &num);

    for(i = 1; i <= num; i += 2)
    {
        for(j = 0; j < (num - i) / 2; j++)
            printf("-");
        
        for(k = 0; k < i; k++)
            printf("*");
        
        for(j = 0; j < (num - i) / 2; j++)
            printf("-");

        printf("\n");
    }
    return 0;
}
*/

#include <stdio.h>
#include <unistd.h> // usleep() 함수 사용 위해 필요한 헤더 파일

int main(void)
{
    printf("안녕하세요.\n");
    usleep(1000000); // 1초 동안 대기
    printf("밤에 성시경이 두 명 있으면 뭘까요 ~?\n");
    usleep(5000000); // 5초 동안 대기
    printf("야간투시경입니다.\n");

    return 0;
}
