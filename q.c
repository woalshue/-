// 20221241 손재민

#define _CRT_SECURE_NO_WARNINGS

/*
#include <stdio.h>
int main(void)
{
	FILE* wfp;
	int i, k;

	wfp = fopen("C:\\Users\\chosun\\Desktop\\gugu.txt", "w");

	for (i = 2; i <= 9; i++)
	{
		fprintf(wfp, " #제%d단# ", i);
	}

	fprintf(wfp, "\n\n");

	for (i = 1; i <= 9; i++)
	{
		for (k = 2; k <= 9; k++)
		{
			fprintf(wfp, "%2dX%2d=%2d ", k, i, k * i);
		}
		fprintf(wfp, "\n");
	}

	fclose(wfp);
}
*/

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	FILE* rfp, * wfp;
	char str1[200], str2[200];
	int size, i;

	rfp = fopen("C:\\Users\\chosun\\Desktop\\in.txt", "r");
	wfp = fopen("C:\\Users\\chosun\\Desktop\\out.txt", "w");

	for ( ; ; )
	{
		fgets(str1, 199, rfp);

		if (feof(rfp))
			break;

		size = strlen(str1);
		for (i = size - 1; i >= 0; i--)
		{
			str2[size - 1 - i] = str1[i - 1];
		}

		str2[size - 1] = '\0';
		fputs(str2, wfp);
		fputs("\n", wfp);
	}

	fclose(rfp);
	fclose(wfp);
}
*/

/*
#include <stdio.h>
int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("변수 number의 주소 = %u\n", &number);
	printf("포인터의 값 = %u\n", p);
	printf("변수 number의 값 = %d\n", number);
	printf("포인터가 가리키는 값 = %d\n", *p);
}
*/

/*
#include <stdio.h>
void swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);

	printf("swap() 호출 후 a = %d, b = %d\n", a, b);

	return 0;
}
*/

#include <stdio.h>
void swap(int* px, int* py)
{
	int tmp;

	tmp = *px;
	*px = *py;;
	*py = tmp;
}

int main(void)
{
	int a = 100, b = 200;
	printf("swap() 호출 전 a = %d, b = %d", a, b);

	printf("\n");

	swap(&a, &b);

	printf("swap() 호출 후 a = %d, b = %d", a, b);

	return 0;
}