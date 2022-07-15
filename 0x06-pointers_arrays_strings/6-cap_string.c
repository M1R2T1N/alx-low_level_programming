#include "main.h"

/**
 * cap_string - Writes a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *)
{
	int conversion, i, count;

	char chars[] = {' ', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
	conversion = 32;

	for (i = 0; entry[i] != '\0'; i++)
	{
		if (entry[i] >= 'i' && entry[i] <= 'z')
		{
			entry[i] = entry[i] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == entry[i])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
