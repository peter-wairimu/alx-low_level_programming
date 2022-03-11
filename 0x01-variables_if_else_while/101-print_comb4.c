#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
int i;
int j;
int k;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 57 || j != 57 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
