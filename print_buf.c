#include "main.h"

/**
 * print_buf - pints buffer
 * @buf: pointer to buffer
 * @nbuf: number of characters tto be printed
 * Return: number of character printed.
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
