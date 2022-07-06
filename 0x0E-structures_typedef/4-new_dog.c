#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * 
 * Return: NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (name === NULL || age < 0 || owner == NULL)
		return (NULL);
	else
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}
}
