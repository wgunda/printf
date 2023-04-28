#include "main.h"
#include <stdarg.h>

/**
 * _printf- produces output according to a format
 * @format: parameter
 * Return: a value
 */

int _printf(const char *format, ...)
{
	unsigned int n;
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

		else if (format[countr + 1] == 'c')
		{
			zputcha(va_arg(plist, int));
			countr++;
		}

		else if (format[countr + 1] == 's')
		{
			(return_value = zput(va_arg(plist, char *)));
			countr++;
		}

		else if (format[countr + 1] == '%')
		{
			zputcha('%');
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

		else if (format[countr + 1] == 'b')
		{
			zbin_print(va_arg(plist, int));
			
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
