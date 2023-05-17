// 20221241 손재민

/*
// 리눅스에서는 안 되는듯
#include <windows.h>
#include <stdio.h>
#define SIZE 10
int main(void)
{
	int list[SIZE] = { 100, 30 20, 78, 89, 12, 56, 38, 99, 66 };

	for(int k = 0; k < SIZE; k++)
	{
		system("cls");
		for(int i = 0; i < SIZE- 1; i++)
		{
			if(list[i] > list[i + 1])
			{
				int tmp = list[i]; list[i] = list[i + 1]; list[i + 1] = tmp;
			}
		}
		for(init i = 0; i < SIZE; i++)
		{
			for(int m = 0; m < list[i] / 10; m++)
				printf("*");
			printf("\n");
		}
		_getch();
	}
	return 0;
}
*/

/*
#include <stdio.h>
int main(void)
{
	int i, j;

    int a[3][5] = {
    		{0, 1, 2, 3, 4},
			{0, 1, 2, 3, 4},
			{0, 1, 2, 3, 4}
    };

    for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 5; j++)
    	{
    		printf("a[%d][%d] = %d ", i, j, a[i][j]);
    	}
    	printf("\n");
    }
    return 0;
}
*/

/*
// oj 실습한 것
#include <stdio.h>
#define SIZE 5
int main(void)
{
    int maximum, prices[SIZE], count = 0;

    scanf("%d %d %d %d %d", &prices[0], &prices[1], &prices[2], &prices[3], &prices[4]);

    maximum = prices[0];
    for(int i = 1; i < SIZE; i++)
    {
    	if(prices[i] > maximum)
    		maximum = prices[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
    	if(prices[i] == maximum)
    		count++;

    }
    printf("%d %d\n", maximum, count);

    return 0;
}
*/

/*
#include <stdio.h>
#define ROWS 3
#define COLS 3
int main(void)
{
	int r, c;

	int A[ROWS][COLS] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; // A행렬
	int B[ROWS][COLS] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}}; // B행렬
	int C[ROWS][COLS];

	for(r = 0; r < ROWS; r++)
	{
		for(c = 0; c < COLS; c++)
		{
			C[r][c] = A[r][c] + B[r][c];
			printf("%d ", C[r][c]);
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
	char board[3][3];
	int x, y, k, i;

	for(x = 0; x < 3; x++)
	{
		for(y = 0; y <3; y++)
		{
			board[x][y] = 0;
		}
	}
	for(k = 0; k <9; k++)
	{
		printf("(x,y)좌표 : ");
		scanf("%d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'x' : 'O';

		for(i = 0; i < 3; i++)
		{
			printf("---|---|---\n");
			printf("%c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");
	}
	return 0;
}
*/












