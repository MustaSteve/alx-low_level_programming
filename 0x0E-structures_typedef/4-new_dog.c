#include "dog.h"
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

	if (owner != NULL && name != NULL)
	{
		dogdog = malloc(sizeof(dog_t));
		if (dogdog == NULL)
			return (NULL);

		dogdog->name = malloc(strlen(name) + 1);
		if (dogdog->name == NULL)
		{
			free(dogdog);
			return (NULL);
		}

		dogdog->owner = malloc(strlen(owner) + 1);
		if (dogdog->owner == NULL)
		{
			free(dogdog->name);
			free(dogdog);
			return (NULL);
		}

		dogdog->name = strcpy(dogdog->name, name);
		dogdog->owner = strcpy(dogdog->owner, owner);
		dogdog->age = age;
	}
	return (dogdog);
}
