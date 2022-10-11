#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - initializes variable of type dog
* @d: pointer for dog
* @name: pointer for name
* @age: age of dog
* @owner: name of owner
* Return: 0 always
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
