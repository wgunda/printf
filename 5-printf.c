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
 * zput- prints strings
 * @str: parameter
 * Return: a value
 */

int zput(char *str)
{
	int g;
	int return_value = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (g = 0; str[g] != '\0'; g++)
		{
			zputcha(str[g]);
			(return_value += 1);
		}
	}
	return (return_value);
}

/**
 * _printf- produces output according to a format S
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int countr = 0;
	int return_value = 0;
	int asc_val;

	va_list plist;

	va_start(plist, format);

	for (; format[countr] != '\0'; countr++)
	{
		if (format[countr] != '%')
		{
			zputcha(format[countr]);
		}

		else if (format[countr + 1] == 'S')
		{
			asc_val = va_arg(plist, int);
			{
				if (asc_val < 32 || asc_val >= 127)
				{
					zputcha(asc_val);
				}
			}
			countr++;
		}

		(return_value += 1);
	}
	return (return_value);
}
