#ifndef _SHELL_
#define _SHELL_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
void _strtok(char *buffer);
char *_compare(char *str);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
int _strlen_recursion(char *s);
int _env(void);
#endif
