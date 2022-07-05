#include "main.h"

/**
* main - check the the code
*
* Return: Always 0
*/

int main(void)
{
	int i;
	i = 0;
	
	char text[] = "_putchar";

	while (text[i] != '\n')
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
