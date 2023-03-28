#include "main.h"

/**
 * conv_to_binary - convert an integer to binary
 * @binary: pointer to binary
 * @int_in: input number
 * @limit: size of the binary
 *
 * Return: binary conversion
 */
char *conv_to_binary(char *binary, unsigned int int_in, int limit)
{
	int i;

	for (i = 0; i < limit; i++)
		binary[i] = '0';
	binary[limit] = '\0';
	for (i = limit - 1; int_in > 1; i--)
	{
		if (int_in == 2)
			binary[i] = '0';
		else
			binary[i] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[i] = '1';

	return (binary);
}
