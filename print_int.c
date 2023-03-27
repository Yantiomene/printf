#include "main.h"

/**
* print_int - prints integer
* @i: number to be printed
*
* Return: number of characters printed.
*/
int print_int(int i)
{
	int int_in, count = 0, isneg = 0, j;
	unsigned int temp, div;

	if (i < 0)
	{
		int_in = i * -1;
		isneg = 1;
	}
	else
		int_in = i;
	temp = int_in;
	div = 1;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	if (isneg)
		count += _putchar('-');
	for (j = 0; div > 0; div /= 10, j++)
		count += _putchar((int_in / div) % 10 + '0');
	return (count);
}
