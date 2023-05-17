// 20221241 손재민

/*
#include <stdio.h>
int main(void)
{
    int mile, meter;
    scanf("%d", &mile);

    meter = mile * 1609;
    printf("%d마일은 %d미터입니다.\n", mile, meter);
    
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i = 1;
    while(i <= 10)
    {
        printf("i = %d\n", i);
        i++;
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int sum = 0, i = 1; // sum값을 0으로 초기화

    while(i <= 10)
    {
        printf("i = %d\n", i);
        sum = sum + i; // 1 3 6 10 15 21 28 36 45 55
        // sum += i 로 해도 됨
        i++;
    }

    printf("1부터 10까지의 합은 %d입니다.\n", sum);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int meter, i = 0;

    while(i < 3)
    {
        meter = i * 1609;
        printf("%d마일은 %d미터입니다.\n", i, meter);
        i++;
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int n, i = 1;

    printf("구구단 중에서 출력하고 싶은 단을 입력하시오: ");
    scanf("%d", &n);

    while(i <= 9)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i = 5, factorial = 1;

    while(i >= 1)
    {
        factorial *= i; // factorial = factorial * i
        i--;
        // fac = 1 x 5
        // fac = 5 x 4
        // fac = 20 x 3
        // fac = 60 x 2
        // fac = 120 x 1
        
    }
    printf("%d\n", factorial);
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i = 1, sum = 0;

    while(i <= 1000)
    {
        sum += i; // sum = sum + i
        i++;
    }
    printf("합은 %d입니다.\n", sum);
    return 0;
}
*/



// 디지털시계 코드인데, 윈도우가 아니라 windows 헤더파일 안 불러와짐. 그냥 이해만 하고 넘어가기로 함. 
/*#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void)
{
    int hour, min, sec;
    hour = min = sec = 0;

    while(1)
    {
        system("cls");
        printf("%02d: %02d: %02d", hour, min, sec);
        sec++;
        if(sec == 60)
        {
            min++;     sec = 0;
        }
        if(min == 60)
        {
            hour++;    min = 0;
        }
        if(hour == 24)
        {
            hour = min = sec = 0;
        }
        Sleep(1000);
    }
    return 0;
}
*/

// 파일하나만선택하세요(완료), 숫자추측게임(해보긴 했는데 완벽히 이해x), 정수의자리수계산(완료. 약간 헷갈),
// 종이접기(하긴 했는데 애매), 디지털시계 해 보기(이해만 하고 넘어가기로 했는데 .. 모르겠음) 해보기

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int answer, guess, tries = 0;
    srand(time(NULL));
    answer = rand() % 100;
    do {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer)
            printf("제시한 정수가 높습니다.\n");
        if(guess < answer)
            printf("제시한 정수가 낮습니다.\n");
    } while(guess != answer);

    printf("축하합니다. 시도횟수=%d\n", tries);

    return 0;
}
*/

// 종이접기
// 에베레스트 높이 : 8800m, 종이 두께 : 1mm, 종이는 접을 떄마다 두께 2배씩 증가
/*#include <stdio.h>
int main(void)
{
    double paper = 0.001;
    double everest = 8800.0;
    int count = 0; 

    while(paper < everest)
    {
        paper = paper * 2.0; 
        count++; 
    }
    printf("종이 접는 횟수 = %d\n", count);
    
    return 0;
}*/

/*
#include <stdio.h>
int main(void)
{
    int i;

    do {
        printf("1---파일열기\n");
        printf("2---파일저장하기\n");
        printf("3---종료\n");
        printf("하나를 선택하시오: ");
        scanf("%d", &i); // 일단 출력문들 출력하고 입력 받음
    } while (i < 1 || i > 3); // 입력받은 숫자가 메뉴 숫자 1,2,3 외의 1보다 작은 수거나 3보다 큰 숫자이면 위의 문장을 다시 출력하고 입력받음
    // 입력받은 숫자가 1,2,3중 하나라면 do while문 탈출하여 
    printf("선택된 메뉴 = %d\n", i); // 입력받은 i와 함께 해당 문장 출력

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int answer; // 랜덤함수로 만들어 낸 정답
    int guess; // 사용자의 추측값
    int tries = 0; // 시도 횟수를 초기화
    srand(time(NULL));
    answer = rand() % 100; // rand()함수는 0부터 32767까지의 정수를 생성. 32767을 100으로 나눈 것의 나머지는 67. 왜 100으로 나누는지는 모르겠음. 

    do {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("제시한 정수가 높습니다.\n");
        if (guess < answer)
            printf("제시한 정수가 낮습니다.\n");
    } while (guess != answer);
    printf("축하합니다. 시도횟수 = %d\n", tries);
    return 0;
}
*/

#include <stdio.h>
int main(void)
{
    long long num;
    int count = 0;

    printf("정수를 입력하시오 : ");
    scanf("%lld", &num);

    do {
        count++;
        num /= 10; // num = num / 10
    } while (num != 0);
    printf("총 자리수 : %d\n", count);
    return 0;
}