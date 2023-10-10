#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog.
 *
 * Description: If an element of d is NULL, print (nil).
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	return;
	}
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
