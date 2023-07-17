#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated
 * @d: Pointer to be to freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
