#include "shell.h"

void _strtok(char *buffer)
{
	char *tok[2], *aux, *temp, *er = "env";
	int i = 0, ex;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (buffer[0] == '\n')
		{
			exit(0);
		}
		if (_strcmp(er, buffer) == 0)
		{
			_env();
			exit(0);
		}
		er = "1";
		tok[i] = strtok(buffer, " \n");
		if (tok == NULL)
		{
			perror("Error");
			exit(0);
		}
		temp = tok[0];
		while (tok[i] != NULL)
                {
                        i++;
                        tok[i] = strtok(NULL, " \n");
                }
		aux = _compare(temp);
		if (aux[0] == er[0])
		{
			free(aux);
			perror("Error");
			exit(0);
		}
		else
		{
			tok[0] = aux;
		}
		ex = execv(tok[0], tok);
		if (ex == -1)
		{
			perror("Error");
			exit(0);
		}
	}
	if (pid > 0)
	{
		wait(NULL);
	}
	if (pid == -1)
	{
		perror("Error");
		exit(0);
	}
}
