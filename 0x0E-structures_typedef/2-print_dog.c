#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: The struct dog to be printed
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
print("Name: (nil)\n");
else
printf("Name: %s\n", d->name);
if (d->age < 0)
printf("age: (nil)\n");
else
printf("Age: %f\n", d-age);
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("owner: %s\n", d->owner);
}