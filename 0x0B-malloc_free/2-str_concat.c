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
	// s1- lenghth = 6
	// B e t t y   /0--> data
	// 0 1 2 3 4 5 ---> indexes
	//
	// s2- length = 9
	// H o l b e r t o n /0---> data
	// 0 1 2 3 4 5 6 7 8 9
	// 
	// s -
	// B e t t y   H o l b e r t o  n  /0
	// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;
	char *s = malloc(size * sizeof(char));
	for (int i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (int i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	s[size - 1] = '\0';
	}
	return (s);
}
