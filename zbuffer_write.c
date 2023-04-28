#include "main.h"

/**
 * zbuffer_write- writes to buffer as little as possible
 * @buffer: parameter
 * Return: nothing
 */

void zbuffer_write(char *buffer)
{
	unsigned int i;

	for (i = 0; i < BUFFER; i++)
	{
		write(1, &buffer[i], 1);
	}
}
