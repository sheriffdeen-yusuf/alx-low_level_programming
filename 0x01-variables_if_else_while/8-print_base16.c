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
	char ch;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'g'; ch++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
