#include "main.h"

/**
 * zbin_print- converts numbers from decimal to binary and prints
 * @number: parameter
 * Return: nothing
 */

void zbin_print(int number)
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
