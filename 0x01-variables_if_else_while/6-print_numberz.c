#include <stdio.h>

/**
 * main - prints single digits in base 10
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putrchar('\n');

	return (0);
}