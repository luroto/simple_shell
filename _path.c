 #include "shell.h"
/**
 *_path - look for the route and concatenate it with the argument in str
 *
 *@str: firts argument capturede for the getline
 *
 *Return: the argument with the route, if the comand don't exist then 1
 */
char *_path(char *str)
{
	char *name = "PATH", *tok, *temp, *s = "/";
	int i;
	struct stat st;

	if (stat(str, &st) == 0)
		return (str); /* str is a corret arg*/
	str = str_concat(s, str);
	for (i = 0; environ[i] != NULL; i++)
	{
		tok = _strtok(environ[i], "=", 0);
		if (_strcmp(name, tok) == 0)
		{
			temp = str_concat(tok, str);
			if (stat(temp, &st) == 0)
			{
				free(tok);
				free(str);
				return (temp);
			}
			while (tok != NULL)
			{
				free(tok);
				tok = _strtok(environ[i], "=:", 1);
				free(temp);
				temp = str_concat(tok, str);
				if (stat(temp, &st) == 0)
				{
					free(tok);
					free(str);
					return (temp);
				}
			}
			break;
		}
		free(tok);
	}
	free(str);
	temp[0] = '1';
	return (temp);
}
