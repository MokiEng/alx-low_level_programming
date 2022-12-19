#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s:this is the input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	for (; *s != '\0'; s++)
	{
	i++;
	}
	return (i);
}
