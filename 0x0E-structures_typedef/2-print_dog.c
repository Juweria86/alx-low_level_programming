#include "dog.h"
#include <stdio.h>
/**
 *print_dog - function that prints a struct dog
 *@d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	else if (d == NULL)
		printf("(nill)%s\n", d->name);

	else if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}

