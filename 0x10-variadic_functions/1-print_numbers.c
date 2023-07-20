#include <stdio.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print number separated comma followed by new line.
 * @separator: print between number.
 * @n: number of parameater.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ar);

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
				if (i != n - 1 && separator != NULL)
				printf("%s", separator);
	}
}
