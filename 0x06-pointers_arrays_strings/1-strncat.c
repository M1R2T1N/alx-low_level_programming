#include "main.h"

/**
 * _strncat - write a function that concatenates two stings
 *
 *  @dest: this is the output dest
 *  @src: this is the input src
 *  @n: this is the number bytes from src
 *
 *  Return: this is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[index] = src[count];
		index++;
	}
	if (count < n)
	{
		dest[index] = '\0';
	}
	return (dest);
}
