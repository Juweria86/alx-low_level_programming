#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy -function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer
 * @src: pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
/**
 * _strlen -function that returns the length of a string.
 *@s: character
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: pointer to the memory
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc((_strlen(name) + 1) * sizeof(char));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	_strcpy(ptr->name, name);

	ptr->owner = malloc((_strlen(owner) + 1) * sizeof(char));

	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	_strcpy(ptr->owner, owner);

	ptr->age = age;

	return (ptr);
}

