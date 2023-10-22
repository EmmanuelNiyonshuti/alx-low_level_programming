#include "lists.h"
/**
 * the_Hare_and_the_Tortoise - prints a string before main is executed.
 *
 * Return: Void.
 */
void the_Hare_and_the_Tortoise(void) __attribute__((constructor));

void the_Hare_and_the_Tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

