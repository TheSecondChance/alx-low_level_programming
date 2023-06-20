#include "main.h"
/**
 * _islower - thsi fuction checks lowercase character
 *
 * @c: ascii code
 *
 * Return: always 0;
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n');
}
