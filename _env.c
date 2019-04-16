#include "shell.h"
/**
 *_env - print the environ variables
 *
 *@cont: the numers of arguments received for the getline
 *
 *Return: if the function fails: -1, else 0;
 */
int _env(int cont)
{
	int i = 0;

	if (cont > 1)
	{
		perror("Error");
		return (-1);
	}
	for (i = 0; environ[i] != NULL; i++)
	{
		write(1, environ[i], _strlen_recursion(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
