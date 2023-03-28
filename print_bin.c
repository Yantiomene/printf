#include "main.h"

/**
 * print_bin - prints unsigned int in binary
 * @arg_list: arguments list
 * @buf: pointer to buffer
 * @ibuf: current index to buffer
 *
 * Return: number of characters printed
 */
int print_bin(va_list arg_list, char *buf, unsigned int ibuf)
{
	int count = 0, i, first_one, limit = sizeof(unsigned int) * 8;
	unsigned int input;
	char *binary;

	input = va_arg(arg_list, int);
	if (input == 0)
	{
		ibuf = handle_buf(buf, '0', ibuf);
		return (1);
	}
	binary = malloc(sizeof(char) * (limit + 1));
	binary = conv_to_binary(binary, input, limit);
	first_one = 0;
	for (i = 0; binary[i]; i++)
	{
		if (first_one == 0 && binary[i] == '1')
			first_one = 1;
		if (first_one == 1)
		{
			ibuf = handle_buf(buf, binary[i], ibuf);
			count++;
		}
	}
	free(binary);
	return (count);
}
