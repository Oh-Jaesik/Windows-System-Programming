#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

void Input(int* cnt, int timing, char (*result)[20])
{
	if (*cnt >= 4)
		exit(1);

	if (_kbhit())
	{
		_getch();

		int msec = abs(timing * CLOCKS_PER_SEC - clock());

		if (msec < 250)
			strcpy_s(result[*cnt], sizeof(result[*cnt]), "Great");
		else if (msec < 500)
			strcpy_s(result[*cnt], sizeof(result[*cnt]), "Good");
		else if (msec < 750)
			strcpy_s(result[*cnt], sizeof(result[*cnt]), "Nogood");
		else
			strcpy_s(result[*cnt], sizeof(result[*cnt]), "Bad");

		(*cnt)++;
	}
}

void Render(int* cnt, int timing[], char (*result)[20])
{
	system("cls");

	clock_t current = clock();
	printf("%d.%d Sec\n\n", current / 1000, current % 1000);

	for (int i = 0; i < 4; i++)
	{
		printf("%d sec : ", timing[i]);

		if (*cnt > i)
			printf("%s", result[i]);

		printf("\n");
	}
}

int main()
{
	int timing[10] = { 3,6,9,12 };
	char result[10][20];
	int cnt = 0;

	while (1)
	{
		Input(&cnt, timing[cnt], result);

		Render(&cnt, timing, result);
	}
	return 0;
}