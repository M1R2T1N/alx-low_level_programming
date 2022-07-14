#include "main.h"

/**
 * _strcat - write a function that concatenates two strings.
 *
 * @dest: this is the output dest
 * @src: this is the input source
 *
 * Return: this return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
