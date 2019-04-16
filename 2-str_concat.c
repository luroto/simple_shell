#include "shell.h"
/**
 **str_concat - function that concatenates two strings
 *
 *@s1: string 1 to concatenate
 *@s2: string 2 to concatenate
 *
 *Return: NULL if there are an empty string or on failure else a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int cont1, cont2, cont3, cont = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (cont1 = 0; s1[cont1]; cont1++)
	{
	}
	for (cont2 = 0; s2[cont2]; cont2++)
	{
	}
	s3 = malloc(sizeof(char) * (cont1 + cont2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (cont3 = 0; cont3 < (cont1 + cont2); cont3++)
	{
		if (cont3 < cont1)
		{
			s3[cont3] = s1[cont3];
		}
		else
		{
			s3[cont3] = s2[cont];
			cont = cont + 1;
		}
	}
	s3[cont3] = '\0';
	return (s3);
}
