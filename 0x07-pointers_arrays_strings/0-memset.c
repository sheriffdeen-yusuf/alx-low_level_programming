#include "main.h"

/**
* _memset - Fills memory area with constant
* @s: array to be filled
* @b: constant byte
* @n: length of required memory
* Return:  a pointer to the memory area s
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int len = 0;

	while (len < n)
	{
		s[len] = b;
		len++;
	}

	return (s);
}
