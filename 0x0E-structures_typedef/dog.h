#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct to define a new structure dog
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 */

typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
