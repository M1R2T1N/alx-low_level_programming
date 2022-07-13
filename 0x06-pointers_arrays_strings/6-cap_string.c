#include "main.h"
/**
 * cap_string - prints all words in a string by capitalizing them
 *
 * @entry: this is the input string
 *
 * Return: string capitalized
 */
char *cap_string(char *entry)
{
	int conversion, index, count;

	char chars[] = {' ', ',', ',', ',', '!',
		'?', '"', '(', ')', '{', '}', '\t', '\n', '\0'};
	conversion = 32;

	for (index = 0; entry[index] != '\0'; index++)
	{
		if (entry[index] >= 'index' && entry[index] <= 'z')
		{
			entry[index] = entry[index] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; counts++)
		{
			if (chars[count] == entry[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
