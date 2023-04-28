#include "main.h"

/**
 * zput- prints strings
 * @str: parameter
 * Return: a value
 */

int zput(char *str)
{
	int g;
	int ren_value = 0;

	if (str != NULL)
	{
		for (g = 0; str[g] != '\0'; g++)
		{
			zputcha(str[g]);
			ren_value += 1;
		}
		zputcha(10);
	}
	return (ren_value);
}
