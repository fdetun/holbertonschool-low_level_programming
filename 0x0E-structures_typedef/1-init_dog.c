#include "dog.h"
#include <stdio.h>
/**
 * init_dog -  init_dog
 * @d: struct
 * @name: name
 * @age: sge
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
