// 20221241 손재민
/*
#include <stdio.h>
int main(void)
{
	int i;
	int scores[5];

	scores[0] = 10;
	scores[1] = 20;
	scores[2] = 30;
	scores[3] = 40;
	scores[4] = 50;

	for(i = 0; i < 5; i += 2)
	{
		printf("scores[%d]= %d\n", i, scores[i]);
	}
	return 0;
}
*/

/*
#include <stdio.h>
#define STUDENTS 5
int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for(i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오 : ");
		scanf("%d", &scores[i]);
	}

	for(i = 0; i < STUDENTS; i++)
		sum += scores[i];
	average = sum / STUDENTS;
	printf("성적평균 = %d\n", average);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 16
int main(void)
{
	int att_book[SIZE] = {0};
	int i, count = 0;

	for(i = 0; i < SIZE; i++)
	{
		printf("%d번째 강의에 출석하셨나요(출석은 1, 결석은 0) : ", i + 1);
		scanf("%d", &att_book[i]);
	}

	for(i = 0; i < SIZE; i++)
	{
		if(att_book[i] == 0)
		{
			count++;
		}
	}
	double ratio = count / 16.0;
	if(ratio > 0.3)
		printf("수업 일수 부족입니다(%f%%).\n", ratio * 100.0);

	return 0;
}
*/

/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int prices[SIZE] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};
	int i, maximum;

	printf("[");
	for(i = 0; i < SIZE; i++)
	{
		printf("%d", prices[i]);
	}
	printf("]\n");

	maximum = prices[0];
	for(i = 1; i < SIZE; i++)
	{
		if(prices[i] > maximum)
		{
			maximum = prices[i];
		}
	}
	printf("최대값은 %d입니다.\n", maximum);

	return 0;
}
*/

/*
// 버블정렬
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int i, j, k, tmp;
	int list[SIZE] = {16, 7, 9, 1, 3, 5, 22, 11, 45, 2};

	printf("정렬 전 데이터 : ");

	for(j = 0; j < SIZE; j++)
	{
		printf("%d ", list[j]);
	}
	printf("\n");

	for(k = 0; k < SIZE; k++)
	{
		for(i = 0; i < SIZE - 1; i++)
		{
			if(list[i] > list[i + 1])
			{
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
	}

	printf("정렬 후 데이터 : ");

	for(i = 0; i < SIZE; i++)
	{
		printf("%d ", list[i]);
	}
	printf("\n");
	return 0;
}
*/

// j.c(배열) 수업 후 복습


// 예제1
/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i;
    int scores[SIZE];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;

    for(i = 0; i < SIZE; i++)
    {
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    return 0;
}
*/

// 예제2
/*
#include <stdio.h>
#define SIZE 26
int main(void)
{
    int i, entire = 0;
    int abc[SIZE];


    for(i = 0; i < SIZE; i++)
    {
        entire = 'a' + i;
        printf("%c ", entire);
    }
    printf("\n");

    return 0;
}
*/

// 예제3
/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i, sum = 0;
    int scores[SIZE];

    for(i = 0; i < SIZE; i++)
    {
        printf("학생들의 성적을 입력하시오 : ");
        scanf("%d", &scores[i]);
    }
    
    for(i = 0; i < SIZE; i++)
    {
        sum = sum + scores[i];
    }

    printf("성적 평균 = %d\n", sum / SIZE);

    return 0;
}
*/

// 예제1
/*
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int i;
    int scores[SIZE] = {31, 63, 62, 87, 14};

    for(i = 0; i < SIZE; i++)
    {
        printf("scores[%d] = %d\n", i, scores[i]);
    }
    return 0;
}
*/

// Lab) 배열에 출석 기록하기
// 비율계산때문에 약간 헷갈림. 그러나 이해는 함.
/*
#include <stdio.h>
#define SIZE 16
int main(void)
{
    int i, j, absent_count = 0; // 결석횟수
    int attendence[SIZE]; // 16번째까지의 수업 출석부 (0 ~ 15)

    for(i = 1; i <= SIZE; i++)
    {
        printf("%d번째 강의에 출석하셨나요? (출석은 1, 결석은 0) : ", i);
        scanf("%d", &attendence[i - 1]);
    }

    for(j = 0; j < SIZE; j++)
    {
        if(attendence[j] == 0) // j+1번째 출석부가 결석이라면, 
        {
            absent_count++; // 결석횟수를 증가시킴
        }
    }

    double ratio = absent_count / 16.0; // 결석율. 16번의 수업 중 몇 번 결석했는지.
    if(ratio > 0.3) // 결석횟수/16 이 100분의 30, 즉 0.3보다 크다면(30% 초과 지각한다면)
    {
        printf("수업 일수 부족입니다.(%f%%)\n", ratio * 100.0); // 결석횟수/16 에다가 100 곱해서 백분율로 만들기
    }

    return 0;
}
*/

// Lab 가장 싼 물건 찾기
/*
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, minimum;
    int prices[SIZE] = {12, 3, 19, 6, 18, 8, 12, 4, 1, 19};

    printf("[ ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", prices[i]);
    }
    printf("]");
    printf("\n");

    minimum = prices[0];

    for(i = 1; i < SIZE; i++)
    {
        if(prices[i] < minimum)
        {
            minimum = prices[i];
        }
    }

    printf("최소값은 %d입니다.\n", minimum);

    return 0;
}
*/

// Lab 배열에서 특정한 값 탐색하기
#include <stdio.h>
#define SIZE 10
int main(void)
{
    int i, quest;
    int index[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    printf("[ ");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ", index[i]);
    }
    printf("]\n");

    printf("탐색할 값을 입력하시오 : ");
    scanf("%d", &quest);

    for(i = 0; i < SIZE; i++)
    {
        if(index[i] == quest)
        {
            printf("탐색 성공 인덱스 = %d\n", i);
            break; 
            // break를 걸지 말지는 상황에 따라 결정. 
            // 만약 배열 안에 우리가 탐색하고자 하는 값이 2개 이상 존재하는데,
            // break를 걸어버리면, 첫 번째로 등장하는 탐색값의 인덱스만 출력이 되고 종료되므로 배열 안에 존재하는 모든 탐색값의 인덱스를 찾을 수 없음 
            // 만약 break를 걸지 않는다면, 첫 번째 탐색값의 인덱스를 찾아 출력한 뒤에도 for문이 종료될 때까지 계속 탐색하므로 전부 찾을 수 있음
        }
    }
    return 0;
}