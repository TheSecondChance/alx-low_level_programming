#include "main.h"
/**
 * _abs - print out absolute value of integer
 *
 * @i: test absolute ingeger
 * Return: always zero.
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
