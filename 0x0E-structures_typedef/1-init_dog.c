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
	struct dog my_dog;

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	if (d == 0)
		return;

	*d = my_dog;
}
