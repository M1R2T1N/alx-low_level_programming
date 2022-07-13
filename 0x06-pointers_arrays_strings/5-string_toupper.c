#include "main.h"

/**
 * string_toupper - print and changes all the letters of the string from
 * lowercase to uppercase
 * @hi: thi is the input string
 *
 * Return: lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int index = 0;
	int desp = 'a' - 'A';

	for (index = 0; hi[index] != '\0'; ++index)
	{
		if (hi[index] >= 'a' && hi[index] <= 'z')
		{
			hi[index] = hi[index] - desp;
		}
	}
	return (hi);
}
