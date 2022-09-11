#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "This program prints the sizes of different types."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{ printf("Size of a char: %c \n", sizeof(char));
printf("Size of an int: %d \n", sizeof(int));
printf("Size of a long int: %ld \n", sizeof(long int));
printf("Size of a long long int: %ld \n", sizeof(long long int));
printf("Size of a float: %f \n", sizeof(float));
return (0); }
