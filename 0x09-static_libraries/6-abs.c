#include "main.h"

/**
  * _abs - value of an integer.
  * @c: int
  *
  * Return: 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_str;

		abs_str = c * -1;

		return (abs_str);
	}

	return (c);
}
