#include "shell.h"

int main()
{
	char *buffer = NULL;
	size_t bufsize = 1;
	ssize_t checkget;

	while (checkget != -1)
	{
		write(1, "$ ", 2);
		checkget = getline(&buffer, &bufsize, stdin);
		if (checkget == -1)
			break;
	       	_strtok(buffer);
	}
	write(1,"\n",1);
	free(buffer);
	return(0);
}
