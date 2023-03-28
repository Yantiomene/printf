#include "main.h"

/**
 * _printf - prints a string in the stdout following a format
 * @format: string that specifies the format
 *
 * Return: the number of character printed in the stdout
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arg_list;
	char *s;

	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	va_start(arg_list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			switch (format[i + 1])
			{
			case 'c':
				count += _putchar(va_arg(arg_list, int)), i += 2;
				break;
			case 's':
				s = va_arg(arg_list, char *);
				if (s == NULL)
					return (-1);
				count += _puts(s), i += 2;
				break;
			case '%':
				count += _putchar('%'), i += 2;
				break;
			case 'd':
				count += print_int(va_arg(arg_list, int)), i += 2;
				break;
			case 'i':
				count += print_int(va_arg(arg_list, int)), i += 2;
				break;
			default: return (-1);
			}
			continue;
		}count += _putchar(format[i]), i++;
	}va_end(arg_list);
	return (count);
}