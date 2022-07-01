#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (success)
*
*/

int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		for (int j = 1; j <= 9; i++)
		{
			if (i == j)
				continue;
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
