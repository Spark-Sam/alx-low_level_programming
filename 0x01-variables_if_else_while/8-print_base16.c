#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: All base 16 numbers in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char hex;

	for (hex = 48; hex <= 57; hex++)
	{
		putchar(hex);
	}

	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
