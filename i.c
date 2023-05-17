// 20221241 손재민

/*
#include <stdio.h>
int main(void)
{
	int i;
	for(i = 0; i <3; i++)
	{
		printf("안녕하세요? \n");
		printf("반갑습니다 \n");
	}

	printf("\n\n");

	for(i = 0; i <3; i++)
		printf("안녕하세요? \n");
	printf("반갑습니다 \n");

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int i;

	for(i = 0; i <= 10; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d \n", i);
		}
	}
	return 0;

}
*/

/*
#include <stdio.h>
int main(void)
{
	int i, sum = 0;

	for(i = 1; i <= 100; i++)
	{
		if(i % 3 == 0)
		{
			sum = sum + i;
		}
	}
	printf("1부터 100까지의 3의 배수의 합 = %d", sum);
	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int i, num1, num2, num3, sum = 0;

	printf("시작값, 끝값, 증가값 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	for(i = num1; i <= num2; i = i + num3)
	{
		sum = sum + i;
	}
	printf("%d에서 %d까지 %d씩 증가한 합 : %d", num1, num2, num3, sum);

	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int i,k;

	for(i = 2; i <= 9; i++)
	{
		printf(" #제%d단#  ", i);
	}
	printf("\n");

	for(i = 1; i <= 9; i++)
	{
		for(k = 2; k <= 9; k++)
		{
			printf("%2dx%d=%2d", k, i, k * i);
		}
		printf("\n");
	}
	return 0;
}
*/

/*
#include <stdio.h> 
int main(void)
{
    int i, k;

    for(i = 0; i < 3; i++)
    {
        for(k = 0; k < 2; k++)
        {
            printf("중첩 for문입니다. (i값 : %d, k값 : %d)\n", i, k);
        }
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
    int i, j;

    for(i = 2; i <= 9; i++)
    {
        printf(" #제%d단", i);
    }
    printf("\n");

    for(i = 1; i <= 9; i++)
    {
        for(j = 2; j <= 9; j++)
        {
            printf("%2dx%d=%2d", j, i, j * i); // 좀 더 예쁘게 출력하기 위해 i가 들어갈 %d에는 두 자리로 안 맞춤
        }
        printf("\n");
    }
    return 0;
}
*/

