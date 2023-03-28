#include "main.h"
/**
 * get_format_func - choose the correct function to print according to format
 * @s: format
 * @index: index of format string
 *
 * Return: pointer to the correct function
 */
int (*get_format_func(const char *s, int index))(va_list, char *, unsigned int)
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
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
