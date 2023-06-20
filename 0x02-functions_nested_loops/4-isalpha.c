#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: character parameter
 * Return: always zero.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) && (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
		return (0);
	_putchar('\n')
}
