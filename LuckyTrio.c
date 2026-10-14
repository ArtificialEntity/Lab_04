#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	int A;

	puts("Введите номер первого игрока: ");

	scanf("%d", &A);

	int B;

	puts("Введите номер второго игрока: ");

	scanf("%d", &B);

	int C;

	puts("Введите номер третьего игрока: ");

	scanf("%d", &C);

	int res = ((A + B + C) % 3 == 0);

	printf("Условие выполнено (1 - да, 0 - нет): %d\n", res);

	return 0;
}
