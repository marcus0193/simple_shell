#include "shell.h"


/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: integer length of a string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - lexicographic comparison of two strings
 * @s1: the first
 * @s2: the second
 *
 * Return: negative if s1 < s2, positive if s1 > s2, zero if s1 == s2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - check if needle starts with haystack
 * @haystack: string to check
 * @needle: the substring to search
 *
 * Return: address of the next character of haystack or NULL
*/
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer to dest Buffer
 */
char _*strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src;
	*dest = *src;
	return (ret);
}
