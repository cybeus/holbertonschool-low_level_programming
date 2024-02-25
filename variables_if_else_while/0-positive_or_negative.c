#include <time.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	srand(time(NULL));
	int z = rand(); 
	if(z>0)
	{
		printf("%d is positive\n", z);
	}
	else if(z<0)
	{
		printf("%d is negative\n", z);
	}
	else()
	{
		printf("%d is zero\n", n);
