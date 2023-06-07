#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string
 * @n: arg
 * @...: strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i = 0;
char *str;

va_start(arg, n);

while (i < n)

{
if (separator == NULL || i == n - 1)
{

str = va_arg(arg, char *);
printf("%s", (str) ? str : "(nil)");

}
else
{

str = va_arg(arg, char *);
printf("%s%s", (str) ? str : "(nil)", separator);

}
i++;
}
putchar('\n');
va_end(arg);
}
