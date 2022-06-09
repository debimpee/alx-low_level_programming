#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: the character to be checked
 * Return: 1 if c is a letter, uppercase or lowercase, 0 if otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}
