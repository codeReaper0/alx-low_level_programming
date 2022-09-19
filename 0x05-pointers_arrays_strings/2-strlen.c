#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: checks the string
 * Tella Boluwatife - Author
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int i = 0;

	for (i = 0; *s[i] != '0'; i++)
		i++;
	
	return (i);
}
