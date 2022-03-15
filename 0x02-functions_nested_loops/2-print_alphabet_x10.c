#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet.
 *
 */

void print_alphabet_x10(void)
{
int a, b;

for (a = 0; a <= 9; a++)
{
for (b = 97; b <= 122; b++)
{
putchar(b);
}
_putchar('\n');
}
}
