#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  a function that frees dogs
 * @d: ...
 * Return: ...
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
