#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -  function that frees dogs.
 * @dog:pointer
 */

void free_dog(dog_t *dog)
{
	if (dog == NULL)
		return;
	free(dog->name);
	free(dog->owner);
	free(dog);
}
