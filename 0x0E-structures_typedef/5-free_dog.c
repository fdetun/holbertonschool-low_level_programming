#include "dog.h"
#include <stdio.h>
/**
 * free_dog - free_dog
 * @d: d
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
