#include "main.h"

/**
 * print_prg - writes '%' to stdout
 * @arg: arg_list
 * @buf: pointer to buffer
 * @ib: current index to buffer
 *
 * Return: 1 (Success)
 */
int print_prg(va_list arg __attribute__((unused)), char *buf, unsigned int ib)
{
	handle_buf(buf, '%', ib);
	return (1);
}
