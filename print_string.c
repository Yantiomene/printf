#include "main.h"


/**
 * print_string - print string.
 * @arg_list: list of argument
 * @buf: pointer to buffer
 * @ibuf: current index of buffer
 *
 * Return: character count.
 */

int print_string(va_list arg_list, char *buf, unsigned int ibuf)
{
	char *s, nill[] = "(null)";
	unsigned int i;

	s = va_arg(arg_list, char *);
	if (s == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handle_buf(buf, nill[i], ibuf);
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
		ibuf = handle_buf(buf, s[i], ibuf);

	return (i);
}
