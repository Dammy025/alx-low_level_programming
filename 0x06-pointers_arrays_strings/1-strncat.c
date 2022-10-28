#include "main.h"
/**
 * _strncat - concentrates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to use from src
 *
 * Return:a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int destLen, i;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
		;

	for (i = 0; src[i] != '\0' && n > 0; i++, n--, destLen++)
	{
		dest[destLen] = src[i];
	}
	return (dest);
}
