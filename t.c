// 20221241 손재민

/*
#include <stdio.h>

struct vector {
    float x;
    float y;
};

struct vector get_vector_sum(struct vector a, struct vector b);

int main(void)
{
    struct vector a = {2.0, 3.0};
    struct vector b = {5.0, 6.0};
    struct vector sum;

    sum = get_vector_sum(a, b);
    printf("벡터의 합은 (%f, %f)입니다.\n", sum.x, sum.y);
    
    return 0;
}

struct vector get_vector_sum(struct vector a, struct vector b)
{
    struct vector result;

    result.x = a.x + b.x;
    result.y = a.y + b.y;

    return result;
}
*/

/*
#include <stdio.h>

struct student
{
    int number;
    char name[20];
    double grade;
};

int main(void)
{
    struct student s = { 20221241, "손재민", 4.3 };
    struct student *p;

    p = &s;

    printf("학번 = %d 이름 = %s 학점 = %.1f \n", s.number, s.name, s.grade);
    printf("학번 = %d 이름 = %s 학점 = %.1f \n", (*p).number, (*p).name, (*p).grade);
    printf("학번 = %d 이름 = %s 학점 = %.1f \n", p -> number, p -> name, p -> grade);

    return 0;
}
*/

/*
#include <stdio.h>

union example 
{
    int num;
    char c;
};

int main(void)
{
    union example data;
    data.c= 'A';
    printf("data.c : %c data.num : %i\n", data.c, data.num);

    data.num = 20221241;
    printf("data.c : %c data.num : %i\n", data.c, data.num);

    return 0;
}
*/

/*
#include <stdio.h>

enum days {MON, TUE, WED, THU, FRI, SAT, SUN};

char *days_name[] = {
    "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"
};

int main(void)
{
    enum days d;

    for(d = MON; d <= SUN; d++)
    {
        printf("%d번째 요일의 이름은 %s입니다.\n", d, days_name[d]);
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *pc;
    pc = (char *)malloc(1 * sizeof(char));

    if(pc == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    *pc = 'a';
    printf("%c\n", *pc);
    free(pc);

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p;
    int i, items;

    printf("항목의 개수는 몇개입니까?");
    scanf("%d", &items);
    p = (int *)malloc(items * sizeof(int));

    for(i = 0; i < items; i++)
    {
        printf("항목(정수)을 입력하시오 : ");
        scanf("%d", &p[i]);
    }

    printf("\n...입력된 값은 다음과 같습니다...\n");
    for(i = 0; i < items; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
int main(void)
{
    int *p = NULL;
    int i = 0;

    p = (int *)malloc(SIZE * sizeof(int));
    if(p == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    for(i = 0; i < SIZE; i++)
    {
        p[i] = rand();
    }

    int max = p[0];

    for(i = 1; i < SIZE; i++)
    {
        if(p[i] > max)
        {
            max = p[i];
        }
    }

    printf("최대값 = %d\n", max);
    free(p);
    
    return 0;
}