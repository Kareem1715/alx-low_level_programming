#include "dog.h"
#include <stdlib.h>

int strlength(char *str);
char *strcopy(char *old, char *new);

/**
 * new_dog - new dog function with struct.
 *
 * @name: struct dog name.
 * @age: struct dog age.
 * @owner: struct dog owner.
 *
 * Description: This function creates a new dog.
 *
 * Return: The new dog :)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (strlength(name) + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (strlength(owner) + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}

	strcopy(newDog->name, name);
	newDog->age = age;
	strcopy(newDog->owner, owner);

	return (newDog);
}

/**
 * strlength - count the length.
 *
 * @str: string parameter.
 *
 * Description: This function the length of string of name and owner.
 *
 * Return: length of string.
 */
int strlength(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * strcopy - copy a string.
 *
 * @old: old string that you want to copy it.
 * @new: the new copied string.
 *
 * Description: This function copy a new string from old string.
 *
 * Return: return the copied string.
 */
char *strcopy(char *new, char *old)
{
	int i;

	for (i = 0; old[i] != '\0'; i++)
		new[i] = old[i];
	new[i] = '\0';

	return (new);
}
