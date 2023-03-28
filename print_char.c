#include "main.h"

/**
 * print_char - writes the character c to stdout
 * @arg_list: argument list
 * @buf: pointer to buffer
 * @ibuf: current index of buffer
 *
 * Return: On success 1.
 */
int print_char(va_list arg_list, char *buf, unsigned int ibuf)
{
	handle_buf(buf, va_arg(arg_list, int), ibuf);
	return (1);
}
