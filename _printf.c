#include "main.h"

/**
 * _printf - prints a string in the stdout following a format
 * @format: string that specifies the format
 *
 * Return: the number of character printed in the stdout
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, ibuf = 0;
	va_list arg_list;
	int (*func)(va_list, char *, unsigned int);
	char *buffer;

	va_start(arg_list, format), buffer = malloc(sizeof(char) * 1024);
	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
			print_buf(buffer, ibuf), free(buffer), va_end(arg_list);
			return (-1);
			}
			else
			{
			func = get_format_func(format, i + 1);
			if (func == NULL)
			{
			if (format[i + 1] == ' ' && format[i + 2])
				handle_buf(buffer, format[i], ibuf), count++, i--;
			}
			else
			{
				count += func(arg_list, buffer, ibuf);
				i += ev_print_func(format, i + 1);
			}
			} i++;
		}
		else
			handle_buf(buffer, format[i], ibuf), count++;
		for (ibuf = count; ibuf > 1024; ibuf -= 1024)
			;
		i++;
	} print_buf(buffer, ibuf), free(buffer), va_end(arg_list);
	return (count);
}
