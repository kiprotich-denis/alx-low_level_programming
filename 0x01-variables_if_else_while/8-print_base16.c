#include <stdio.h>
/**
* main - prints numbers base-16
* Description: prints all the numbers of base 16 in lowercase
* Return: 0
*/
int main(void)
{
int x;
for (x = 48; x < 58; x++)
putchar(x);
for (x = 'a'; x <= 'f'; x++)
putchar(x);
putchr('\n');
return (0);
}
