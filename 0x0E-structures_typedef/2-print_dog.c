#include "main.h"
#include "dog.h"
#include "stdio.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: p0inter to the struct
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "nill");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "nill");
	}
}
