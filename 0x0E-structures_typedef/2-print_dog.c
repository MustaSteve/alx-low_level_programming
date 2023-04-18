#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - function that prints a struct dog
* @d: struct dog
*/
void print_dog(struct dog *d)
{
	if (d != 0)
	{
	printf("Name: %s\n", (d->name) ? (d->name) : "Name: (nil)");
	printf("Age: %f\n", (d->age) ? (d->age) : 0);
	printf("Owner: %s\n", (d->owner) ? (d->owner) : "Owner: (nil)");
	}
}
