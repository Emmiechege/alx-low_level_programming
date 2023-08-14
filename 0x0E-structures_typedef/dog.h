#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type of dog
 * @name: name of dog
 * @age: age of dog
 * @owner:owner of dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
