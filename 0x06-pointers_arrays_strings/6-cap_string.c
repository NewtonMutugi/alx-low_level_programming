#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  *
  * @string: pointer to character array
  *
  * Return: charcter
 */

char *cap_string(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			if (string[i - 1] == ' ' || string[i - 1] == '\t' || string[i - 1] == '\n'
				|| string[i - 1] == ',' || string[i - 1] == ';' || string[i - 1] == '.'
				|| string[i - 1] == '!' || string[i - 1] == '?' || string[i - 1] == '"'
				|| string[i - 1] == '(' || string[i - 1] == ')' || string[i - 1] == '{'
				|| string[i - 1] == '}' || i == 0)
			{
				string[i] -= 32;
			}
		}
		i++;
	}
	return (string);
}

