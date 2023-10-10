#include "dog.h"
#include <stdlib.h>
/**
 * calculateStringLength - Calculates the length of a string
 * @str: Pointer to a string
 *
 * Return: Length of the string
 */
int calculateStringLength(const char *str)
{
	int length = 0;

	while (*str != '\0')
	{
	length++;
	str++;
	}
	return (length);
}
/**
 * copyString - Copies a string from source to destination
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
*/
void copyString(char *dest, const char *src)
{
	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';
}
/**
 * init_dog - Initializes a dog structure
 * @d: Pointer to a struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int nameLength, ownerLength;

	if (d != NULL)
	{
	nameLength = calculateStringLength(name);

	d->name = malloc(sizeof(char) * (nameLength + 1));

	if (d->name != NULL)
	{
		copyString(d->name, name);
	}

	d->age = age;

	ownerLength = calculateStringLength(owner);

	d->owner = malloc(sizeof(char) * (ownerLength + 1));

	if (d->owner != NULL)
	{
	copyString(d->owner, owner);
	}
	}
}
