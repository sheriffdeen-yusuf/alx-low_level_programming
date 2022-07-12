#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (succss)
*/

int main(void)
{
	int n;
	
	n = 402;
	
	reset_to_98(&n);
	printf("n=%d\n", n);

    	return (0);
}
