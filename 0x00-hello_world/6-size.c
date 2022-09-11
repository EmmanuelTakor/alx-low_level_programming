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
printf("Size of a char: %zu \n", sizeof(charType));
printf("Size of an int: %zu \n", sizeof(intType));
printf("Size of a long int: %zu \n", sizeof(longIntType));
printf("Size of a long long int: %zu \n", sizeof(longLongIntType));
printf("Size of a float: %zu \n", sizeof(floatType));
return (0); }
