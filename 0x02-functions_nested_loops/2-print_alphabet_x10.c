
#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - prints lowercase alphabet using putchar
*
* Return: 0
*/
void print_alphabet_x10(void)
{
char c, i;

for (i = 0; i <= 9; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
}
