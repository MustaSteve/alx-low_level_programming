#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
* struct dog - check the code
* @name: dog name
* @age: dog age
* @owner: dog owner
*/
struct dog
{
char *name;
float age;
char *owner;
};
/* Another functions */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
