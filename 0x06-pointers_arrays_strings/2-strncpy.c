#include "maincpy.h"
#include "string.h"
#include "stdio.h"

/**
 * _strncpy -copies a string
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */

 char *_strncpy(char *dest, char *src, int n)
 {
 int i;

 i=0;
 	while (i < n && *(src  + 1))
	{
	*(dest + i)=*(src + i);
	i++;
	}
	while (i < n)
	{
	*(dest + i)='\0';
	i++;
	}
	return (dest);
 }
 
