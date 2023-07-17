#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - function that returns the length of a string
 * @s: the string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointer to by the pointer, `dest`
 * @dest: the pointer to the buffer in which we copy the string
 * @src: the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int string_length, counter;

	string_length = 0;

	while (src[string_length] != '\0')
	{
		string_length++;
	}

	for (counter = 0; counter < string_length; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the nwe dog (Success),
 * Otherwise, NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;
	int string_length1, string_length2;

	string_length1 = _strlen(name);
	string_length2 = _strlen(owner);

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);

	NewDog->name = malloc(sizeof(char) * (string_length1 + 1));
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}

	NewDog->owner = malloc(sizeof(char) * (string_length2 + 1));
	if (NewDog->owner == NULL)
	{
		free(NewDog);
		free(NewDog->name);
		return (NULL);
	}
	_strcpy(NewDog->name, name);
	_strcpy(NewDog->owner, owner);
	NewDog->age = age;

	return (NewDog);
}
