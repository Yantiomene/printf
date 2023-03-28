#include "main.h"

/**
 * ev_print_func -  counts the  number of format
 * @s: format string
 * @index: index of format string
 *
 * Return: number of format
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_char}, {"s", print_string},
		{"%", print_prg}, {"d", print_int},
		{"i", print_int}, {"b", print_bin},
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index = index;

	while (pr[i].type_format)
	{
		if (s[index] == pr[i].type_format[j])
		{
			if (pr[i].type_format[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0, i++;
			index = first_index;
		}
	}
	return (j);
}
