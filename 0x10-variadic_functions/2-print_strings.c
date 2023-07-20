#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string followed by a new line.
 * @separator: printed between the strings.
 * @n: number of string passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(ma);
	va_start(ma, n);

	for (i = 0; i < n; i++)
	{
		if (av_arg == NULL)
			printf("nil");
		printf("%s", av_arg(ma, char));
				if (separator != NULL && i != n - 1)
					printf("%s", separator);
	}
	printf("\n");
	va_end(ma);
}
