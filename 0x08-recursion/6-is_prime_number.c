include "main.h"
/**
* evaluate_num - recursion loop;
* @num:"This is a parameter"
* @iterator:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/
int evaluate_num(int num, int iterator)
{
if (iterator == num - 1)
{
return (1); }
else if (num % iterator == 0)
{ return (0); }
if (num % iterator != 0)
{return (evaluate_num(num, iterator + 1)); }
return (0); }


/**
* is_prime_number - int is_prime_number(int n);
* @num:"This is a parameter"
* Description: "the program's description"
* Return: Always 0 (Success)
*/

int is_prime_number(int num)
{
int iterator;
iterator = 2;
if (num < 2)
{
return (0); }
if (num == 2)
{
return (1); }
return (evaluate_num(num, iterator)); }



