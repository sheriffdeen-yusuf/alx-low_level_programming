#include "main.h"

/**
* _isupper - return 1 if a char is uppercase, 0 otherwise
*
* Return: 0 or 1
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
