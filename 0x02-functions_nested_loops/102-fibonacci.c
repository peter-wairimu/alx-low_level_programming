#include <stdio.h>
/**
 * main - Prints the first 50 fibanacci numbers starting with 1 and 2
 * Return: Always 0
 *
 */
int main(void)
{
int c;
long int o1, o2, fo;

o1 = 1;
o2 = 2;
printf("%ld, %ld", o1, o2);
for (c = 0; c < 48; c++)
{
fo = o1 + o2;
printf(", %ld", fo);
o1 = o2;
o2 = fo;
}
printf("\n");
return (0);
}
