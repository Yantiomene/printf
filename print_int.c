#include "main.h"

/**
* print_int - prints integer
* @arg_list: argument list
* @buf: pointer to buffer
* @ibuf: current index of pointer
*
* Return: number of characters printed.
*/
int print_int(va_list arg_list, char *buf, unsigned int ibuf)
{
	int int_in, isneg = 0, j, i;
	unsigned int temp, div;

	i = va_arg(arg_list, int);
	if (i < 0)
	{
		int_in = i * -1;
		ibuf = handle_buf(buf, '-', ibuf);
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

	for (j = 0; div > 0; div /= 10, j++)
		ibuf = handle_buf(buf, (int_in / div) % 10 + '0', ibuf);
	return (j + isneg);
}
