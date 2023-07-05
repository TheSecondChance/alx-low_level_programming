#include <stdio.h>
#include "main.h"
/**
 * _puts_recurstion - print a string followed by newline
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	printf("%c", *s)
		_puts_recurstion(s + 1);
}
