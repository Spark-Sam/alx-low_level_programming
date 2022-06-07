#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Three digit combination without repetition
 *
 * Return: 0
 */
int main(void)

{
	int left;
	int middle;
	int right;



	for (left = 48; left <= 57; left++)
	{
		for (middle = left + 1; middle <= 57; middle++)
		{
			for (right = middle + 1 ; right <= 57; right++)


			{
				putchar(left);
				putchar(middle);
				putchar(right);

				if ((left == 55) && (middle == left + 1) && (right == middle + 1))
				{
					break;
				}

				putchar(',');
				putchar (' ');

			}

		}

	}

	putchar('\n');

	return (0);

}
