#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_string - print string.
 *
 * @s: argument.
 *
 * Return: character count.
 */

int print_string(char *s)
{
	int i;
	int count_fun = 0;

	if (!s)
		s = "(null)";

	if (s[0] == '\0')
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
		count_fun += _putchar(s[i]);

	return (count_fun);
}
