#include <stdio.h>
/**
    * main - prints a string
    *
    * Return:  1 if program is a success
*/
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, str, 59);
return (1);
}
