#include <stdlib.h>
#include <time.h>
#include <stfio.h>
/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L % 10

		if (L > 5)
			printf("%s %d is %d and is greater than 5\n", str, n, L);
		else if (L == 0)
			printf"%s %d is %d and is 0\n", str, n, L);
		else if (L < 6)
			printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);

	return (0);
}

