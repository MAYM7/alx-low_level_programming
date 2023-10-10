#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function to free memory
 * @d: is pointer to dog_t
 *
 * Return: nothing.
**/

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
