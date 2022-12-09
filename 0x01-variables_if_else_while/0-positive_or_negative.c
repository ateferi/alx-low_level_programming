/*
 * File: 0-positive_or_negative.c
 * Auth: Abebe T. Lemma
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Prints a random number and states
 *       whether is is positive, zero or negative
 *
 * Return: Always 0;
 */
int main(void)
{
	int n;
	srand(time(0));

<<<<<<< HEAD
=======

>>>>>>> e4eff1f046b3c473f4f42e7c0c30d8ac02497756
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}


