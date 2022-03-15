#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
int c, boolean, boolean2;
long int o1, o2, fn, fn2, n11, n22;

o1 = 1;
o2 = 2;
boolean = boolean2 = 1;
printf("%ld, %ld", o1, o2);
for (c = 0; c < 96; c++)
{
if (boolean)
{
fn = o1 + o2;
printf(", %ld", fn);
o1 = o2;
o2 = fn;
}
else
{
if (boolean2)
{
n11 = o1 % 1000000000;
n22 = o2 % 1000000000;
o1 = o1 / 1000000000;
o2 = o2 / 1000000000;
boolean2 = 0;
}
fn2 = (n11 + n22);
fn = o1 + o2 + (fn2 / 1000000000);
printf(", %ld", fn);
printf("%ld", fn2 % 1000000000);
o1 = o2;
n11 = n22;
o2 = fn;
n22 = (fn2 % 1000000000);
}
if (((o1 + o2) < 0) && boolean == 1)
boolean = 0;
}
printf("\n");
return (0);
}
