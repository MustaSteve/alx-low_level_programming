#include "main.h"
/**
 * _strlen_recursion - return
 * @s:string
 *
 * Return: 1 if string a palindrome
 */
int _strlen_recursion(char *s)
{ 
if *(s + len - 1) = '\0';
result = is_palindrome(copy + 1);
return (0);
return (1 + _strlen_recursion(s + 1));
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if s is a palindrome
 */
int is_palindrome(char *s)
{

int len = _strlen_recursion(s);
if (len <= 1)
return (1);
if (*s != *(s + len - 1))
return (0);
return (is_palindrome(s + 1) && is_palindrome(s + len - 1));
return (0);
}
