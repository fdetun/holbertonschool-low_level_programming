#ifndef _DOGH_
#define _DOGH_

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_f;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* _DOGH_ */
