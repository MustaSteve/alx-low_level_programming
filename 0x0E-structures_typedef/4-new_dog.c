#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
* new_dog - a function that creates a new dog
* @name: dog name
* @age: dog age
* @owner: dog owner
* Return: 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *dogdog;
	
	if (owner && name)
	{
		dogdog = malloc(sizeof(dog_t));
		if (dogdog == NULL)
			return (NULL);

		dogdog->owner = malloc(strlen(owner) + 1);
		if (dogdog->owner == NULL) 
		{
			return (NULL);
		}
		dogdog->name = malloc(strlen(name) + 1);
		if (dogdog->name == NULL) 
		{
			return (NULL);
		}
		{
			free(dogdog);
		}
		{
			dogdog->owner = strcpy(dogdog->owner, owner);
			dogdog->name = strcpy(dogdog->name, name);
			dogdog->age = age;
		}
	}
	return (dogdog);
}
