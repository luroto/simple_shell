#include "shell.h"
/**
 *_convert_num - prints int numbers
 *
 *@k: number to print
 *
 *Return: the number of bytes
 */
char *_convert_num(int k)
{
	int j = 0, a = k, b, c = 0, d = 0, e = 1, f = 0, m = 0, n = 0, l = 0;
	char *x;

	f = a;
	d = a;
	for (b = 0; a != 0; b++)
	{a = a / 10;
		if (c == 1)
			e = e * 10;
		c = 1;
	}
	c = b;
	x = malloc(b + 2);
	if (x == NULL)
	{free(x);
		return (NULL);
	}
	for (j = 0; j < (b + 2); j++)
	{
		x[j] = '\0';
	}
	for (; b > 0; b--, l++)
	{       m = d / e;
		n = m % 10;
		e = e / 10;
		if (m < 10)
		{       x[l] = m + '0';
		}
		else
		{x[l] = n + '0';
		}
	}
	if (f == 0)
		x[0] = '0';
	return (x);
}
