 #include <stdio.h>

/**
 * print_array - prints n elements of array of int,
 * followeed by a new line
 * @a: This is the input array
 * @n: This is the length array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
