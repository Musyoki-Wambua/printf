#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}
/**
 * strlen - Strlen function but applied for
 * constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
