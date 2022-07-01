#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: 'Task 6'
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
int i;
long int l
long long int ll;
float d;
char c;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(l)
printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
printf("Size of a float: %lu byte(s)\n", sizeof(d));
return (0);
}
