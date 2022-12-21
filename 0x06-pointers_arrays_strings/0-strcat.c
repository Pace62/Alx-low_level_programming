#include "main.h"

/**
 * strcat - string to overwrite the (\0) at the end of dest and adds it again
 * @dest: string
 * @src: string
 * Return: pointer to @dest.
 */
char *_strcat(char *dest, const char *src);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
