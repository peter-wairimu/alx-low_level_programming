#include "main.h"
/**
 * print_times_table - Prints the n times table starting from 0
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
int a, b, ij;

if (n >= 0 && n <= 15)
{
for (a = 0; a <= n; a++)
{
_putchar(48);
for (b = 1; b <= n; b++)
{
ij = a * b;
_putchar(44);
_putchar(32);
if (ij <= 9)
{
_putchar(32);
_putchar(32);
_putchar(ij + 48);
}
else if (ij <= 99)
{
_putchar(32);
_putchar((ij / 10) + 48);
_putchar((ij % 10) + 48);
}
else
{
_putchar(((ij / 100) % 10) + 48);
_putchar(((ij / 10) % 10) + 48);
_putchar((ij % 10) + 48);
}
}
_putchar('\n');
}
}
}
