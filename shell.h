#ifndef _SHELL_
#define _SHELL_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stddef.h>
extern char **environ;
void _strtok_execv(char *buffer, char *name, int num);
char *_path(char *str);
char *str_concat(char *s1, char *s2);
int _strcmp(char *s1, char *s2);
int _strlen_recursion(char *s);
int _env(int cont);
char *_strtok(char *str, char *separator, int flag);
char *_convert_num(int k);
void _error(char *name, char *comand, int num);
void free_grid(char **grid, int height);
#endif
