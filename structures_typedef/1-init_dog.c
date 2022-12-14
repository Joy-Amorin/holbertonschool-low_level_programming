#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer of struct dog
 * @name: dog name of type char
 * @age: age of a dog of type float
 * @owner: name of dog owner of type char
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

