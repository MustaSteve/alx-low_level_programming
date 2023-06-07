#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers
 * @separator: string
 * @n: arg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list arg;
unsigned int i = 0;

va_start(arg, n);

while (i++ < n)

if (separator == NULL || i == n)

printf("%d", va_arg(arg, int));

else
printf("%d%s", va_arg(arg, int), separator);


va_end(arg);
putchar('\n');
}
