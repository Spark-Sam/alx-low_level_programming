#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: All possible combinations
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);

		if (digit == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
