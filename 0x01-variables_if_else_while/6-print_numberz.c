#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
int c;
for (c = 0; c < 10 ; c++)
{
	putchar((c % 10) + '0');
}
putchar('\n');
return (0);
}
