// 20221241 손재민

/*
#include <stdio.h>
#define SIZE 5
double get_array_avg(int values[], int n);
void print_array(int valuees[], int n);

int main(void)
{
    int i;
    int data[SIZE] = { 10, 20, 30, 40, 50 };
    double result;

    print_array(data, SIZE);
    result = get_array_avg(data, SIZE);
    printf("배열 원소들의 평균 = %f\n", result);

    return 0;
}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int values[], int n)
{
    int i;
    double sum = 0.0;
    for(i = 0; i < n; i++)
    {
        sum = sum + values[i];
    }
    return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int values[], int n) // return 값 없으니 void 로 처리
{
    int i;
    printf("[ ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", values[i]);
    }
    printf("]\n");
}
*/

/*
#include <stdio.h>
int main(void)
{
    char line[100] = "";
    char line2[100] = "";

    printf("문자열을 입력하시오 : ");
    // gets(line, sizeof(line)); // 한 줄의 문자열 입력
    gets(line);

    int k = 0;
    for(int i = 0; line[i] != '\0'; ++i)
    {
        while(line[i] >= 'A' && line[i] <= 'z') 
        {
            line2[k++] = line[i++];
        }
    }
    line2[k] = '\0';
    printf("출력 문자열 : %s\n", line2);

    return 0;
}
*/

/*
#include <string.h>
#include <stdio.h>
int main(void)
{
    char s1[80];
    char s2[80];
    int result;

    printf("첫 번째 단어를 입력하시오 : ");
    scanf("%s", s1, sizeof(s1));
    printf("두 번째 단어를 입력하시오 : ");
    scanf("%s", s2, sizeof(s2));

    result = strcmp(s1, s2);
    
    if(result < 0)
    {
        printf("%s가 %s보다 앞에 있습니다.\n", s1, s2);
    }

    else if(result == 0)
    {
        printf("%s가 %s와 같습니다.\n", s1, s2);
    }

    else 
    {
        printf("%s가 %s보다 뒤에 있습니다.\n", s1, s2);
    }

    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SOL "apple"
int main(void)
{
    char s[100] = SOL;
    char ans[100];
    int i, len;
    len = strlen(s);
    for(i = 0; i < len; i++)
    {
        int pos1 = rand() % len;
        int pos2 = rand() % len;
        char tmp = s[pos1];
        s[pos1] = s[pos2];
        s[pos2] = tmp;
    }
    do {
        printf("%s의 원래 단어를 맞춰보세요 : ", s);
        scanf("%s", ans);
    } while(strcmp(ans, SOL) != 0);

    printf("축하합니다!\n");

    return 0;
}
*/
