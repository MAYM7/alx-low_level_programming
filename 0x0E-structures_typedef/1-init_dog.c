#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - a function that initializes a variable type
 * @d: pointer to struct
 * @name: parameter of name
 * @age: parameter of age
 * @owner: parameter of owner
 *
 * Return: nothing.
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
