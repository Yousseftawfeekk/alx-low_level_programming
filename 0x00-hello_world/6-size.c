#include <stdio.h>

/**
 * main - Entry point
 *
 * Descriotion: Uses the sizeof to print the size of various types
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("size of a char %u byte(s):", sizeof(char));
	printf("size of an int: %u byte(s)", sizeof(int));
	printf("size of a long int: %u byte(s)", sizeof(long int));
	printf("size of a long long int: %u byte(s)", sizeof(long long int));
	printf("size of a float: %u byte(s)", sizeof(float));
	return (0);
}
