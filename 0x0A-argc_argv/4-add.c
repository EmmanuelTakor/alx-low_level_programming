#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* check_num - writes character vc to stdout
* @str:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int check_num(char *str)
{ unsigned int count;
count = 0;
while (count < strlen(str))
{
if (!isdigit(str[count]))
{ return (0); }
count++; }

return (1); }

#include <stdio.h>
#include "main.h"
/**
* main - writes character vc to stdout
* @argc:"This is a parameter"
* @argv:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int count;
int str_to_int;
int sum = 0;
count = 1;
while (count < argc)
{
if (check_num(argv[count]))
{
str_to_int = atoi(argv[count]);
sum += str_to_int; }
else
{printf("Error\n");
return (1); }
count++; }
printf("%d\n", sum);

return (0); }
