#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
	{
	return("");
	}
	if (s2 == NULL)
	{
	return ("");
	}
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	char *s = calloc(size, sizeof(char));
	for (int i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (int i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
