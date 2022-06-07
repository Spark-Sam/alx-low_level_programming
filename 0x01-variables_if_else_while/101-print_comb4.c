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
	int left_num;
	int right_num;
	int center_num;



	for (left_num = 48; left_num <= 57; left_num++)
	{
		for (center_num = left_num + 1; center_num <= 57; center_num++)
		{
			for (right_num = center_num + 1 ; right_num <= 57; right_num++)


			{
				putchar(left_num);
				putchar(center_num);
				putchar(right_num);

				if  ((left_num == 55) && (center_num == left_num + 1) && (right_num == center_num + 1))
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
