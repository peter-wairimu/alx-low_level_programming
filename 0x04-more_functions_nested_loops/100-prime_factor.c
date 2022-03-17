#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
long int n, ij;

n = 612852475143;
for (ij = 2; ij <= n; ij++)
{
if (n % ij == 0)
{
n /= ij;
ij--;
}
}
printf("%ld\n", ij);
return (0);
}
