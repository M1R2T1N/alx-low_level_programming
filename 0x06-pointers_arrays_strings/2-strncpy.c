#include "main.h"

/**
 * _strncpy - Writes a function that concatenates two strings, it will use at
 * most n bytes from src
 *
 * @dest: This is the output dest
 * @src: This is input source
 * @n: This is the number of bytes to copy
 *
 * Return: Copied string with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
i	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
