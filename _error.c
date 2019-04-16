#include "shell.h"
/**
 *_error - print message error when the functions fails
 *
 *@name: name of program
 *@comand: name of comand that fails
 *@num: number of execution of principal function
 */
void _error(char *name, char *comand, int num)
{
	char *aux = NULL;
	int len = 0;

	write(2, name, _strlen_recursion(name));
	write(2, ": ", 2);
	aux = _convert_num(num);
	len = _strlen_recursion(aux);
	if (num < 100)
	{
		len = len - 1;
	}
	write(2, aux, len);
	free(aux);
	write(2, ": ", 2);
	write(2, comand, _strlen_recursion(comand));
	write(2, ": not found\n", 12);
}
