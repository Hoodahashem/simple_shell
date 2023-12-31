#include "main.h"
/**
 *intlength- calculates the number of digits
 *@n:number
 *Return: lol
 */

int intlength(unsigned int n)
{
	int lol = 0;

	do {
	lol++;
	n /= 10;
	}

	while (n > 0);
	return (lol);

	}

/**
 * arrayrev - reverses the order of characters in a string s
 *@s:string
 *@len:length
 *
 */


void arrayrev(char *s, int len)
{
	int i, j;
	char temp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	}
}

/**
 * *inttostr - converts an unsigned integer n
 *@n:number
 *
 *Return: str
 *
 */



char *inttostr(unsigned int n)
{
	int len = 0, i = 0;
	char *str;

	len = intlength(n);
	str = malloc(len + 1);
	if (str == NULL)
	{
	free(str);
	return (NULL);
	}
	while (n / 10)
	{
	str[i] = (n % 10) + '0';
	n /= 10;
	i++;
	}
	str[i] = (n % 10) + '0';
	arrayrev(str, len);
	str[len] = '\0';
	return (str);
}
