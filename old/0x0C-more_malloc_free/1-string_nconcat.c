#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: size of bytes to be allocated
 *
 * Return: NULL if it fails, n is greater or equal to
 * the length of s2 then use the entire string s2
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < n; l++)
		p[k + l] = s2[l];
	p[k + l] = '\0';
	return (p);
}
