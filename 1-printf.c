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
 * _printf- produces output according to a format: d, i
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int countr = 0;
	int return_value = 0;

	va_list plist;

	va_start(plist, format);

	for (; format[countr] != '\0'; countr++)
	{
		if (format[countr] != '%')
		{
			zputcha(format[countr]);
		}

		else if (format[countr + 1] == 'd')
		{
			zputcha(va_arg(plist, int));
			countr++;
		}

		else if (format[countr + 1] == 'i')
		{
			zputcha(va_arg(plist, int));
			countr++;
		}

		(return_value += 1);
	}
	return (return_value);
}
