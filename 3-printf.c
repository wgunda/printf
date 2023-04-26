#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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
 * _printf- produces output according to a format: u, o, x, X
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int countr = 0;
	int return_value = 0;
	unsigned int n;

	va_list plist;

	va_start(plist, format);

	for (; format[countr] != '\0'; countr++)
	{
		if (format[countr] != '%')
		{
			zputcha(format[countr]);
		}

		else if (format[countr + 1] == 'u' || format[countr + 1] == 'o')
		{
			n = va_arg(plist, int);
			zputcha(n);
			countr++;
		}

		else if (format[countr + 1] == 'x' || format[countr + 1] == 'X')
		{
			n = va_arg(plist, int);
			zputcha(n);
			countr++;
		}

		(return_value += 1);
	}
	return (return_value);
}
