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

	printf("size of char is : %lu byte(s).\n", (unsigned long)sizeof(a));
	printf("size of int is : %lu byte(s).\n", (unsigned long)sizeof(b));
	printf("size of long int is : %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("size of long long int is : %lu byte(s).\n", (unsigned long)sizeof(d));
	printf("size of float is : %lu byte(s).\n", (unsigned long)sizeof(f));
	return (0);
}
