#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	int len, len2;

	len = _printf("let's try to print a simple sentence.\n");
	len2 = printf("let's try to print a simple sentence.\n");
	len += _printf("character:[%c]\n", 'H');
	len2 += printf("character:[%c]\n", 'H');
	len += _printf("String:[%s]\n", "I am a string");
	len2 += printf("String:[%s]\n", "I am a string");
	len += _printf("Percent:[%%]\n");
	len2 += printf("Percent:[%%]\n");
	_printf("length: [%d, %i]\n", len, len);
	printf("length: [%d, %i]\n", len2, len2);
	_printf("Negative: [%d]\n", -762534);
	printf("Negative: [%d]\n", -762534);
	printf("len = %d\nlen2 = %d\n", len, len2);

	return (0);
}
