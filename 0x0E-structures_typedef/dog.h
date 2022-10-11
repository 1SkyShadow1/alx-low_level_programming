#ifndef DOG_H
#define DOG_H
/**
* struct dog - Typedef for dog
* @name: name of dog
* @owner: name of owner
* @age: age of dog
*/
typedef struct dog
{	char *name;

	char *owner;

	float age;
} dog_t;

/**
* init_dog - initializes variable of type dog
* @d: pointer for dog
* @name: pointer for name
* @age: age of dog
* @owner: name of owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* print_dog - Prints a struct dog
* @d: pointer to struct dog
*/
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
* new_dog - create a new dog
* @name: char string name
* @age: int age
* @owner: char string owner
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner);

#endif
