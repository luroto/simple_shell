#include "shell.h"
/**
 *_strcmp - compares two strings
 *
 *@s1: string 1 to compare
 *@s2: string 2 to compare
 *
 *Return: if the string are equal 0, else the diference
 */
int _strcmp(char *s1, char *s2)
{

	int cont1, a = 0;


	for (cont1 = 0; s1[cont1]; cont1++)
	{
		if (s1[cont1] != s2[cont1])
		{
			a = s1[cont1] - s2[cont1];
			break;
		}
		else
		{
			a = 0;
		}
	}
	return (a);
}
