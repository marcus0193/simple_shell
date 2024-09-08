#include "shell.h"


/**
 * INTERACTIVE - returns true if the shell is interactive mode
 * @info: struct add
 *
 * Return: 1 if interactive, 0 if else
*/

int INTERACTIVE(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if the character is delimeter
 * @c: the char to check
 * @delim: the delimeter string
 *
 * Return: 1 if true, 0 if else
*/
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to input
 *
 * Return: 1 if c is a alphabetic, 0 if not
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts a string into a integer
 * @s: the string to be coverted
 *
 * Return: 0 if no numbers in string, or converted number
*/
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int ersult = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}
	if (sign == -1)
		output = -result;
	else
		output = result;
	return (output);
}
