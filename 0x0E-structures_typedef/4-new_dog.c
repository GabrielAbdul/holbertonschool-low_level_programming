#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));
	char *namecpy = malloc((_strlen(name) + 1) * 1);
	char *owncpy = malloc((_strlen(owner) + 1) * 1);

	if (my_dog == NULL || namecpy == NULL || owncpy == NULL)
	{
		free(my_dog);
		free(namecpy);
		free(owncpy);
		return (NULL);
	}

	_strcpy(namecpy, name);
	_strcpy(owncpy, owner);

	my_dog->name = namecpy;
	my_dog->age = age;
	my_dog->owner = owncpy;
	return (my_dog);
}

/**
 * _strcpy - function that copies the string pointed to by *src
 * , including the terminating null byte, to the buffer pointed to by dest
 * @dest: copied string
 * @src: string to be copied
 * Return: (void)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - functino that returs the length of a string
 * @s: string input by a user
 * Return: (void)
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
