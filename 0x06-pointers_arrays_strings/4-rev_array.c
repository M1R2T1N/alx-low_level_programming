#include "main.h"

/**
 * rev_array - writes a function that reverses the content of the array of int
 *
 * @a: this is the iput array
 * @n: this is the position that have the array
 *
 * Return: void
 */
void rev_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
