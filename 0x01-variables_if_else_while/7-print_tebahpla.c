#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char le;

	for (le = 'z'; le < 'b'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
