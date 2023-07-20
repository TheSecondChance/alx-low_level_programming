#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string followed by a new line.
 * @separator: printed between the strings.
 * @n: number of string passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ma);
	unsigned int i;
	char *str;

	va_start(ma, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ma, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ma);
}
