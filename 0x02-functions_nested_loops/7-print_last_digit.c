#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: number in which last digit is printed
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;
if (n >= 0)
{
last_digit = ((n % 10) + 48);
_putchar(last_digit);
return (last_digit);
}
else
{
last_digit = (((n * -1) % 10) + 48);
_putchar(last_digit);
return (last_digit);
}
}
