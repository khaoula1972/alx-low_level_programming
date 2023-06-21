#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * new_dog - creating a new dog
 * @name: pointer to the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: pointer to the new dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cp, *owner_cp;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	name_cp = strdup(name);
	if (name_cp == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner_cp = strup(owner);
	if (owner_cp == NULL)
	{
		free(name_cp);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name_cp;
	new_dog->age = age;
	new_dog->owner = owner_cp;

	return (new_dog);
}
