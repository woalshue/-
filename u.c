// 20221241 손재민

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book
{
    int number;
    char title[100];
};

int main(void)
{
    struct Book *p;
    p = (struct Book *)malloc(2 * sizeof(struct Book));

    if(p == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    p[0].number = 1; // (*p).number = 1; 
    strcpy(p[0].title, "C Programming");

    p[1].number = 2; // (*p + 1).number = 2;
    strcpy(p[1].title, "Data Structure");

    printf("%s\n", (*p).title); // p[0].title
    printf("%s\n", p[1].title);

    free(p);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>

struct movie 
{
    char title[100];
    double rating;
};

int main(void)
{
    struct movie *ptr;
    int i, n; // n 은 영화 개수

    printf("영화의 개수 : ");
    scanf("%d", &n);
    getchar(); // 줄바꿈 문자 제거

    ptr = (struct movie *)malloc(n * sizeof(struct movie));

    if(ptr == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }

    for(i = 0; i < n; i++)
    {
        printf("영화 제목 : ");
        fgets(ptr[i].title, 100, stdin); // 중간에 공백이 있는 제목도 받을 수 있어야 함. scanf 로 받으면 공백이 있으면 못 받음.
        // 책에서는 gets_s 사용
        printf("영화 평점 : ");
        scanf("%lf", &ptr[i].rating);
        getchar(); // 줄바꿈 문자 제거
    }

    printf("\n=============================================\n");
    for(i = 0; i < n; i++)
    {
        printf("영화 제목 : %s\n", ptr[i].title);
        printf("영화 평점 : %.2lf\n", ptr[i].rating);
    }
    printf("\n=============================================\n");

    free(ptr);

    return 0;
}