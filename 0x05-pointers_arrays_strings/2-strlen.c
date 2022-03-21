#include "main.h"

/**
 * main - return the length of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
        i++;
return (i);
}
