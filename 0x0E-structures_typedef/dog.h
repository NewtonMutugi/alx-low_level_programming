#ifndef DOG_H
#define DOG_H


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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
