#include "main.h"
/**
 * print_most_numbers - prints the numbers 0 to 9, except 2 and 4
 */
void print_most_numbers(void)
{
	int n = '0';

	for (; n <= '9' ; n++)
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
