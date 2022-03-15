#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
long int o1, o2, no, mno;

o1 = 1;
o2 = 2;
no = mno = 0;
while (no <= 4000000)
{
no = o1 + o2;
o1 = o2;
o2 = no;
if ((o1 % 2) == 0)
{
mno += o1;
}
}
printf("%ld\n", mno);
return (0);
}
