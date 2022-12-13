/*
 * File: putchar.c
 * Author: Abebe Teferi
 *
 */


#include<stdio.h>

/**
 * main: prints the string "putchar" to the stdout
 *@putchar: the aray of characters to be printed
 *
 *Return: on success 0
 */
int main(void)
{

int i;
char s[] = "putchar";

for (i = 0; i < 8; i++)
{
	putchar(s[i]);

}
	putchar('\n');

	return (0);
}

