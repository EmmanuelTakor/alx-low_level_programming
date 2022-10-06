#include <stdio.h>
#include "main.h"
/**
* _strstr - writes character vc to stdout
* @needle:"This is a parameter"
* @haystack:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{ char *one = haystack;
char *two = needle;
while (*one == *two && *two != '\0')
{
one++;
two++; }
if (*two == '\0')
return (haystack); }
return (0); }
