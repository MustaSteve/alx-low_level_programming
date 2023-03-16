#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 * Return: 0 when successfull
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
floatf;
printf("Size of char: %lu byte($)\n", (usigned long)sizeof(a));
printf("Size of char: %lu byte($)\n", (usigned long)sizeof(b));
printf("Size of char: %lu byte($)\n", (usigned long)sizeof(c));
printf("Size of char: %lu byte($)\n", (usigned long)sizeof(d));
printf("Size of char: %lu byte($)\n", (usigned long)sizeof(f));
return (0);
}
