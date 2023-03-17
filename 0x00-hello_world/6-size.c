#include<stdio.h>
/**
 * main - a C program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("size of a char: %lu byte(s)\n", sizeof(a));
printf("size of an int: %lu byte(s)\n", sizeof(b));
printf("size of a long int: %lu byte(s)\n", sizeof(c));
printf("size of a long long int: %lu byte(s)\n", sizeof(d));
printf("size of a float: %lu byte(s)", sizeof(f));
return (0);
}
