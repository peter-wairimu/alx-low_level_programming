#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
int i, k, j, h, k1, k2;

i = k = j = h = 48;
while (h < 58)
{
j = 48;
while (j < 58)
{
k = 48;
while (k < 58)
{
i = 48;
while (i < 58)
{
k1 = (h * 10) + j;
k2 = (k * 10) + i;
if (k1 < k2)
{
putchar(h);
putchar(j);
putchar(' ');
putchar(k);
putchar(i);
if (h == 57 && j == 56 && k == 57 && i == 57)
break;
putchar(',');
putchar(' ');
}
i++;
i++;
}
j++;
}
h++;
}
putchar('\n');
return (0);
}
}
