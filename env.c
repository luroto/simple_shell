 #include "shell.h"
char *_compare(char *str)
{
	extern char **environ;
	char *name = "PATH", **aux = environ, *tok, *temp, *s = "/";
	int i;
	struct stat st;

	if (stat(str, &st) == 0)
	{
		return (str); /* str is a corret arg*/
	}
	str = str_concat(s, str);
	for (i = 0; aux[i] != NULL; i++)
	{
		tok = strtok(aux[i], "=");
		if (_strcmp(name, tok) == 0)
		{
			temp = str_concat(tok, str);
			if (stat(temp, &st) == 0)
			{
				free(str);
				return (temp);
			}
			while (tok != NULL)
			{
				tok = strtok(NULL, "=:");
				free(temp);
				temp = str_concat(tok, str);
				if (stat(temp, &st) == 0)
				{
					free(str);
					return (temp);
				}
			}
			break;
		}
	}
	free(str);
	temp[0] = '1';
	return (temp);
}
