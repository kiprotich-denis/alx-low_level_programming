#include "stdio.h"
/**
* print_to_98 - prints all natural numbers
* @y: first number
*/
void print_to_98(int y)
{
int x;
if (y <= 98)
{
for (x = y; x < 98; x++)
{
printf("%i, ", x);
}
}
else
{
for (x = y; x > 98; x--)
{
printf("%i, ", x);
}
}
printf("98\n");
}
