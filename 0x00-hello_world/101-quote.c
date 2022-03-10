#include <stdio.h>
/**
    * main - prints a string
    *
    * Return:  1 if program is a success
*/
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, str, sizeof(str));
return (1);
}
