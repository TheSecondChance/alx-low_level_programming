#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that print anything.
 * @format: list of types of argument passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list(list);
	unsigned int i = 0, j, f = 0;
	char *str;
	const char f_arg[] = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (f_arg[j])
		{
			if (format[i] == f_arg[j] && f)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), f = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), f = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), f = 1;
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} i++;
	}
	printf("\n"), va_end(list);
}
