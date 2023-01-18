#include "main.h"

/**
 * strtow - function that splits a string into words.
 *
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 *
 */

char **strtow(char *str)
{
	int i, j, k, l, m, n;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ' && str[i] != '\0')
				i++, k++;
		}
	}
	if (k == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (k + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0, l = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				;
			s[l] = malloc(sizeof(char) * (j - i + 1));
			if (s[l] == NULL)
			{
				for (m = 0; m < l; m++)
					free(s[m]);
				free(s);
				return (NULL);
			}
			for (n = 0; i < j; i++, n++)
			s[l][n] = str[i];
			s[l][n] = '\0';
			l++;
		}
	}
	s[l] = NULL;
	return (s);
}
