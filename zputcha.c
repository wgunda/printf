#include "main.h"

/**
 * zputcha- prints characters
 * @a: parameter
 * Return: a value
 */

int zputcha(char a)
{
	return (write(1, &a, 1));
}
