#include "main.h"
#include <stdio.h>
#include <unistd.h>

#define BUFFER 1024

/**
 * buffer_write- writes to buffer as little as possible
 * @buffer: parameter
 * Return: nothing
 */

void buffer_write(char *buffer)
{
	unsigned int i;

	for (i = 0; i < BUFFER; i++)
	{
		write(1, &buffer[i], 1);
	}
}
