#include "main.h"
/**
* _calloc - function that allocates memory for an array
* @nmemb: number
* @size: number
* Return: 0
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int s;
	void *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (!a)
		return (NULL);

	for (s = 0; s < (nmemb * size); s++)
		*((char *)a + s) = 0;

	return (a);
}
