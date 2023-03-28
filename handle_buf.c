#include "main.h"

/**
 * handle_buf - concatenates the buffer
 * @buf: pointer to buffer
 * @c: character to be concatenates to buffer
 * @ibuf: current index of buffer
 *
 * Return: current index of the buffer
 */
unsigned int handle_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
