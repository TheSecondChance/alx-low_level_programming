#include "main.h"
/**
 * _isupper - chaeck uppercase character.
 *
 * @c: pass argument to main
 * Return: 1 if c is uppercase return 0 otherwise.
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
