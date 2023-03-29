#include "main.h"

/**
 * print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
 * @arg_list: List of arguments
 * @buffer: Buffer array to handle print
 * @flags:  Calculates active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list arg_list, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(arg_list, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
