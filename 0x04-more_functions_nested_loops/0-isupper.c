#include <ctype.h>

/**
* _isupper - return 1 if a char is uppercase, 0 otherwise
*
* Return: 0 or 1
*/

int _isupper(int c)
{
	int result;
	
	result = isupper(c);
	
	if (result)
		return 1;
	else
		return 0;
}
