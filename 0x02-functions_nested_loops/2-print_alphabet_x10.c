#include "main.h"
/**
 * main - check the code.
 * print_alphabet_x10 - prints alphabet x10
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
