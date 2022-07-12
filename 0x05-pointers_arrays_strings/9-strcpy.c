#include "main.h"

/**
 * _strcpy - copies a string poited by src, terminating the null byte,
 * to the buffer pointed to by dest
 * @dest: this is destiny
 * @src: this is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
