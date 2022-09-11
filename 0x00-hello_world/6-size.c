#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: "This program prints the sizes of different types."
 *
 * Return: Always 0 (Success)
 */
int main(void)
{int intType;
char charType;
long int longIntType;
long long int longLongIntType;
float floatType;
printf("Size of a char: %c \n", sizeof(charType));
printf("Size of an int: %d \n", sizeof(intType));
printf("Size of a long int: %ld \n", sizeof(longIntType));
printf("Size of a long long int: %ld \n", sizeof(longLongIntType));
printf("Size of a float: %f \n", sizeof(floatType));
return (0); }
