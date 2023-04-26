#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * p_address- function to handle conversion specifier p
 * @p: parameter
 * Return: address
 */

void *p_address(void *p)
{
	int i;
	p = &i;
	return (p);
}

/**
 * zputcha- prints characters
 * @a: parameter
 * Return: a value
 */

int zputcha(char a)
{
	return (write(1, &a, 1));
}

/**
 * _printf- produces output according to a format
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int countr = 0;
	int return_value = 0;
	int *z;

	va_list plist;

	va_start(plist, format);

	for (; format[countr] != '\0'; countr++)
	{
		if (format[countr] != '%')
		{
			zputcha(format[countr]);
		}

		else if (format[countr + 1] == 'p')
		{
			z = p_address(va_arg(plist, char *));
			zputcha(z);
			countr++;
		}
		(return_value += 1);
	}
	return (return_value);
}
