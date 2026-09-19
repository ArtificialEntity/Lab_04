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

	if ((A + B + C) % 3 == 0)
	{
		puts("Тройка является счастливой!");
	}
	else
	{
		puts("Тройка не является счастливой!");
	}

	return 0;
}