#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if new_dog fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (len1 + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (len2 + 1));
	if (doggie->owner == NULL)
	{
		free(doggie);
		free(doggie->name);
		return (NULL);
	}
	_strcpy(doggie->name, name);
	_strcpy(doggie->owner, owner);
	doggie->age = age;

	return (doggie);
}
