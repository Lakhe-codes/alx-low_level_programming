#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet ten times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int n;
int i;
for (i = 'a'; i <= 'j'; i++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
