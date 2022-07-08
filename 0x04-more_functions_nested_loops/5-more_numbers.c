#include "main.h"
/**
 * more_numbers - prints numbers to 14
 *
 * return: returns nothing
 */
void more_numbers(void)
{
	int number 1, number 2;

	for (number 1 = 0; number 1 < 10; number1++)
	{
		for (number 2 = 0; number 2 <= 14; number2++)

		{
			if (number 2 > 9)
			{
				_putchar((number2 / 10) + '0');
			}
			_putchar((number2 % 10) + '0');
		}
		_putchar(10);
	}
}
