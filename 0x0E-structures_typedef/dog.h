#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Short defines a dog
 * @name: Name of dog
 * @age: Age of Dog
 * @owner: Owner of dog
 *
 *
 */

typedef struct dog
{
	char *name;
	double age;
	char *owner;
} dog;

/**
 * dog_t - New struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
