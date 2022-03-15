#include <stdio.h>
#include <unistd.h>
#include "main.h"

void print_putchar(char c) { write(STDOUT_FILENO, &c, 1); }
void print_alphabet(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        print_putchar(i);
        i++;
    }
}
int main(void)
{
    print_alphabet();
    return (0);
}