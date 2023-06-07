#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: arguments list
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int j = 0;
	char *p = "", *sc;

	va_start(args, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 's':
				sc = va_arg(args, char *);
				if (sc == NULL)
					sc = "(nil)";
				printf("%s%s", p, sc);
				break;
			case 'i':
				printf("%s%i", p, va_arg(args, int));
				break;
			case 'c':
				printf("%s%c", p, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", p, va_arg(args, double));
				break;
			default:
				j++;
				continue;
		}
		p = ", ";
		j++;
	}
	putchar('\n');
	va_end(args);
}
