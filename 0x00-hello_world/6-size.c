#include<stdio.h>
/**
 * main - entry poin
 *
 * Return: Always (0);
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
