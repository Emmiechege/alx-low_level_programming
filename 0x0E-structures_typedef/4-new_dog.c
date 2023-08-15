#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: The string to be measured.
 * Return: the length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - copies a string pointed toby src, including
 * the terminating null byte to a buffer pointed to by dest.
 * @dest: the buffer storing the string copy
 * @src: the source string
 *
 * Return: the pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = '\0';

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
 * new_dog -create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return:the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
			return (NULL);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	return (NULL);

	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
	free(doggy);
	return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
		if (doggy->owner == NULL)
		{
		free(doggy->name);
		free(doggy);
		return (NULL);
		}

		doggy->name = _strcopy(doggy->name, name);
		doggy->age = age;
		doggy->owner = _strcopy(doggy->owner, owner);

		return (doggy);
}
