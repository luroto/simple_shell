#include "shell.h"
/**
 *_strtok_execv - tokenizes the initial string and execute it
 *
 *@buffer: It's the initial string captured for getline
 *@name: name of function
 *@num: number of times that the principal function has been executed
 */
void _strtok_execv(char *buffer, char *name, int num)
{
	char *tok[2], *aux, *temp, *er = "env";
	int i = 0, ex;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (buffer[0] == '\n')
		{ free(buffer);
			exit(0); }
		tok[i] = strtok(buffer, " \n");
		if (tok == NULL)
		{perror("Error"), exit(0); }
		temp = tok[0];
		while (tok[i] != NULL)
		{i++;
			tok[i] = strtok(NULL, " \n"); }
		if (_strcmp(er, buffer) == 0)
		{_env(i);
			exit(0); }
		er = "1";
		aux = _path(temp);
		if (aux[0] == er[0])
		{free(aux);
			_error(name, tok[0], num);
			free(buffer);
			exit(0); }
		else
			tok[0] = aux;
		ex = execv(tok[0], tok);
		if (ex == -1)
		{_error(name, tok[0], num);
			exit(0);
		}		}
	if (pid > 0)
		wait(NULL);
	if (pid == -1)
	{perror("Error");
		exit(0);	}
}
