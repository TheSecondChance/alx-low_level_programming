#include "main.h"
/**
 * factorial - function give factorial of number.
 * @n: the number gives.
 * Return: the fact.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
