#include "shell.h"
/**
 *ctrlhandler - receive the comand Crt + C
 *
 *@numa: integer which receives the signal handler before return
 */
void ctrlhandler(__attribute__((unused))int numa)
{
	signal(SIGINT, ctrlhandler);
	write(1, "\n", 1);
}
/**
 *main - receive the info, verific Crt+C Crt+D and exit and exec other func.
 *@argc: number of arguments
 *@argv: argments
 *
 *Return: ) if sucessful
 */
int main(int argc, char **argv)
{
	char *buffer = NULL, *aux = "exit\n";
	size_t bufsize = 1;
	ssize_t checkget = 0;
	int num = 0;

	(void)argc;
	signal(SIGINT, ctrlhandler);
	while (checkget != -1)
	{
		num++;
		checkget = getline(&buffer, &bufsize, stdin);
		if (checkget == -1)
			break;
		if (_strcmp(buffer, aux) == 0)
		{
			exit(0);
		}
		_strtok_execv(buffer, argv[0], num);
	}
	write(1, "\n", 1);
	free(buffer);
	return (0);
}
