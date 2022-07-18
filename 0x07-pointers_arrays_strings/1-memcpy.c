#include "main.h"

/**
* _memcpy - copys memor area
* @dest: where memory area  would ne copy to
* @src: where memory area is copy from
* @n: n bytes
* Return: pointer to dest
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
