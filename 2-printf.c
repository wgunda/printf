#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
 * zputcha- prints a character
 * @a: parameter
 * Return: a value
 */

int zputcha(char a)
{
	return (write(1, &a, 1));
}

/**
 * bin_print- converts numbers from decimal to binary and prints
 * @number: parameter
 * Return: nothing
 */

void bin_print(int number)
{
	int u;

	for (u = 6; u >= 0; u++)
	{
		if ((number >> u) & 1)
		{
			zputcha(49);
		}

		else
		{
			zputcha(48);
		}
	}
}

/**
 * _printf- prints unsigned int argument and converts to binary
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int countr = 0;
	int return_value = 0;

	va_list blist;

	va_start(blist, format);

	for (; format[countr] != '\0'; countr++)
	{
		if (format[countr] != '%')
		{
			zputcha(format[countr]);
		}
		else if (format[countr + 1] == 'b')
		{
			bin_print(va_arg(blist, int));
		}
		(return_value += 1);
	}
	return (return_value);
}
