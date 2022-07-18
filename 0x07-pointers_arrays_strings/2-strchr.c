#include "main.h"
/**
 * _strchr - locates a charcater in a string
 * @s: string s.
 * @c: string .
 * Return: a pointer to the first ocuurence.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (0);
}
