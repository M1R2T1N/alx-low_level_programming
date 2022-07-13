#inclue "main.h"

/**
 * _strncpy - writes a function that copies a string
 * @dest: this is the output dest
 * @src: this is the input src
 * @n: this is the number of bytes to copy
 *
 * Return: copied string with number of bytes
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	for (; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
