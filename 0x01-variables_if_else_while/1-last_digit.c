#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints string
* Description: prints last digit of number stored in variable n
* Return: 0
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
printf("Last digit of %d is %d and is greater than 5\n", n);
else if (lastDigit == 0)
printf("Last digit of %d is %d and is 0\n");
else
printf("Last digit of %d is %d and is less than 6 and not 0\n");
return (0);
}
