// 20221241 손재민

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SOL "apple"
int main(void)
{
    char s[100] = SOL; // s에 apple 저장
    char ans[100]; 
    int i, len;

    len = strlen(s); // s의 길이를 len 에 저장. 5가 저장될 것

    for(i = 0; i < len; i++) // 0부터 4까지 5회 반복
    {
        int pos1 = rand() % len; // rand() % 5 즉 0부터 4까지 임의의 난수 생성해서 pos1에 저장하여 s의 인덱스로 작용하게 함 
        int pos2 = rand() % len; 
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }

    do {
        printf("%s의 원래 단어를 맞춰보세요 : ", s);
        scanf("%s", ans);
    } while(strcmp(ans, SOL) != 0); // strcmp()는 파라미터 두 개가 완전히 같을 시 0을 리턴하므로, 0이 안 나올 동안 반복 

    printf("축하합니다.\n");

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#define WORDS 5
int main(void)
{
    int i, index;
    char dic[WORDS][2][30] = {
        { "book", "책" },
        { "boy", "소년" }, 
        { "computer", "컴퓨터" }, 
        { "language", "언어" },
        { "rain", "비" },
    };

    char word[30];
    printf("단어를 입력하시오 : ");
    scanf("%s", word);
    
    index = 0;
    for(i = 0; i < WORDS; i++)
    {
        if(strcmp(word, dic[index][0]) == 0)
        {
            printf("%s : %s\n", word, dic[index][1]);
            return 0;
        }
        index++;
    }
    printf("사전에서 발견되지 않았습니다.\n");

    return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#define SIZE 6
int main(void)
{
    int i, k;
    char fruits[SIZE][20] = {
        "pineapple",
        "banana",
        "apple",
        "tomato",
        "pear",
        "avocado"
    };

    for(k = 0; k < SIZE; k++)
    {
        for(i = 0; i < SIZE - 1; i++)
        {
            if(strcmp(fruits[i], fruits[i + 1]) > 0) // strcmp()는 첫 번째 파라미터가 두 번째 파라미터보다 더 크면 1을 리턴. 
            {
                char tmp[20];
                strcpy(tmp, fruits[i]);
                strcpy(fruits[i], fruits[i + 1]);
                strcpy(fruits[i + 1], tmp);
            }
        }
    }

    for(k = 0; k < SIZE; k++)
    {
        printf("%s \n", fruits[k]);
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student 
{
    int number;
    char name[10];
    double grade;
};

int main(void)
{
    struct student s;

    s.number = 20221241;
    strcpy(s.name, "손재민");
    s.grade = 4.3;

    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);

    return 0;
}
*/

/*
#include <stdio.h>
#include <math.h>
struct point 
{
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;

    double xdiff, ydiff, dist;

    printf("점의 좌표를 입력하시오 (x y) : ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("다른 한 점의 좌표를 입력하시오 (x y) : ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt(pow(xdiff, 2) + pow(ydiff, 2));

    printf("두 점 사이의 거리는 %f입니다.\n", dist);

    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
struct QUESTION
{
    char question[SIZE];
    char item1[SIZE];
    char item2[SIZE];
    char item3[SIZE];
    char item4[SIZE];
    int solution;
};

struct QUESTION bank[100] = {
    {"임베디드 장치에 가장 적합한 프로그래밍 언어는?", "1. Python", "2. Java", "3. C", "4. Javascript", 3},
    {"서로 다른 자료형을 모을 수 있는 구조는?", "1. 배열", "2. 변수", "3. 구조체", "4. 포인터", 3},
};

int main(void)
{
    int select, i;
    for(i = 0; i < 2; i++)
    {
        printf("%s\n", bank[i].question);
        printf("%s  ", bank[i].item1);
        printf("%s  ", bank[i].item2);
        printf("%s  ", bank[i].item3);
        printf("%s  ", bank[i].item4);
        scanf("%d", &select);

        if(select == bank[i].solution)
        {
            printf("맞았습니다.\n");
        }

        else 
        {
            printf("틀렸습니다.\n");
        }
    }

    return 0;
}