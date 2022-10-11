#include "dog.h"
#include <stdlib.h>

/**
 * free dog - frees dogs.
 * @d: The dog to be freed.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->owner);
	free(d->name);
	free(d);
}
