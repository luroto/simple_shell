#include "shell.h"
/**
 **_strtok - function that segments a string according to separtor
 *
 *@str: string to segment
 *@separator: separator to segment the string
 *@flag: signal to reset the static variable
 *
 *Return: string until is the separator
 */
char *_strtok(char *str, char *separator, int flag)
{
	char *tok = NULL;
	int i, j, n = 0, len = 0;
	static int cont;

	if (flag == 0)
		cont = 0;
	if (!str)
		return (NULL);
	for (i = cont; str[i]; i++)
	{
		for (j = 0; separator[j]; j++)
		{
			if (str[i] == separator[j])
				n = 1; }
		if (n == 1)
			break;
		len++; }
	if (len != 0)
	{tok = malloc(sizeof(char) * (len + 1));
		for (j = 0; j < (len + 1); j++)
			tok[j] = '\0'; }
	if (tok == NULL)
		return (NULL);
	for (i = cont, n = 0; str[i]; i++)
	{cont++;
		for (j = 0; separator[j]; j++)
		{
			if (str[i] == ':' && str[i + 1] == ':'
			    && separator[j] == ':')
			{ tok[0] = ':';
				return (tok); }
			if (str[i] == separator[j])
			{tok[n] = '\0';
				return (tok); }
		}
		tok[n] = str[i];
		n++;
	}
	tok[n] = '\0';
	return (tok);
}
