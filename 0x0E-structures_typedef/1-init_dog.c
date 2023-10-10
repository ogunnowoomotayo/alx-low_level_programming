#include "main.h"
#include "dog.h"

/**
 * init_dog - function that intialize variable
 * @d: initaiize d
 * @name: 2 parameter
 * @age: 3rd parameter
 * @owner: 4th parameter
 * Return: void
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

