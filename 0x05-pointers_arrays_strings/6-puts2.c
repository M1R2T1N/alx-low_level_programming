#include "main.h"
/**
 * puts2 - prints other characters of the string,
 * starting with the first character followed by a new line.
 *@s: this pointer pointss to a cahr or string
 *
 * Return: void
 */

void puts2(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
