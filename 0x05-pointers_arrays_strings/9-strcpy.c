#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i]; i++){
		dest[i] = src[i];
		dest[i + 1]= '\0';
	}

	return dest;

}
