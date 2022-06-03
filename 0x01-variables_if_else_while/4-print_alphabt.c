#include <stdio.h>
/**
 * main - Entry point
 * Description: random nymber in n +ve/-ve
 * Return: Always 0n (Succes)
 */
int main(void)
{
int firstLetter, n;
for (firstLetter = 97, n = 1; n < 27; firstLetter++, n++)
{
if (firstLetter == 100 || firstLetter == 113)
continue;
putchar(firstLetter);
}
putchar(10);
return (0);
}
