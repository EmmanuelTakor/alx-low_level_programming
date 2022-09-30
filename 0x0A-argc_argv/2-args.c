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
{int count = 0;
if (argc > 0)
{
while (count < argc)
{ printf("%s\n", argv[count]);
count++; }}
return (0); }
