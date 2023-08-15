#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs.
 * @d: the dogs to be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
