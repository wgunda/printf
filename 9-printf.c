#include "main.h"
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
 * prin_num- prints digits
 * @elem: parameter
 * Return: nothing
 */

void prin_num(int elem)
{
	if (elem >= 10)
	{
		prin_num(elem / 10);
	}
	zputcha(elem % 10 + '0');
}

/**
 * dig_cunt- counts digits
 * @digit: parameter
 * Return: a value
 */

int dig_cunt(int digit)
{
	int z = 0;
	if (digit == 0)
	{
		return 1;
	}

	for (; digit > 0; z++)
	{
		digit /= 10;
	}
	return (z);
}

/**
 * _printf- field width for non-custom conversion speci
 * @format: parameter
 * Return: nothing
 */

void _printf(const char *format, ...)
{
	int g;
	unsigned int dig;
	char ch, *str;
	double f;
	int field_width;

	va_list plist;

        va_start(plist, format);

	for (; *format; format++)
	{
		if (*format == '%')
		{
			field_width = 0;
			for (*format = 0; *format <= 9; format++)
			{
				field_width = field_width * 10 + (*format - '0');
			}
			if (*format == 'c')
			{
				ch = (char) va_arg(plist, int);
				zputcha(ch);
			}
			
			else if (*format == 'd' || *format == 'i')
			{
				g = va_arg(plist, int);
				zputcha(g);
			}
			
			else if (*format == 'u')
			{
			       dig = va_arg(plist, unsigned int);
			       zputcha(dig);
			}
			
			else if (*format == 'f')
			{
			       f = va_arg(plist, double);
			       zputcha(f);
			}
			else if (*format == 's')
			{
				str = va_arg(plist, char *);
				zput(va_arg(plist, char *));
			}

			else
			{
				zputcha(*format);
			}
		}
		va_end(plist);
	}
}

		
