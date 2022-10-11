#include "main.h"
/**
* init_dog - initializes variable of type dog
* struct dog - points to the d pointer
* @d: pointer for dog
* @name: pointer for name
* @age: age of dog
* @owner: name of owner
* Return: 0 always
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *d{

		char *name;
		char *owner;
		float age;
	} dog;
	struct dog my_dog = {name, age, owner};
	struct dog *d = &my_dog;

	return (0);
}
