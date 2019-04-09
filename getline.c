#include "shell.h"


int input(char *s,int length);

int main()
{
	char *buffer;
	size_t bufsize = 32;

	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	printf("$");
	for (;;)
	{
	getline(&buffer,&bufsize,stdin);
	_strtok(buffer);
	printf("$");
	}
	return(0);
}
