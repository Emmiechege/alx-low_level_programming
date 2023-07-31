#ifndef DOG_H
#define DOG_H

/**
 * struct dog: A dogs basic info.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 * desc: Header file.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dogg_y - typedef for struct dog
 */
typedef struct dog dogg_y;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogg_y *new_dog(char *name, float age, char *owner);
void free_dog(dogg_y *d);

#endif
