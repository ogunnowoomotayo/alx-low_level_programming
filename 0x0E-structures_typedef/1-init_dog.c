#include "main.h"
#define DOG_H

/**
 * init_dog - function that intialize variable
 * @d: initaiize d
 * @name: 2 parameter
 * @age: 3rd parameter
 * @owner: 4th parameter
 * Return: zero
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}

