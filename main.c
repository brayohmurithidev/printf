#include <stdio.h>
#include "main.h"

/**
 * main - file to test compilation
 * Return: 0
 */

int main(void)
{
	int count_std = 0;
	int count_cust = 0;


	write(1,"STANDARD:\n",10);
	count_std = printf("Tester\n");
	printf("I printed %d character", count_std);

	//Custome printf
	write(1,"CUSTOM:\n",8);
	count_cust = _printf("Tester\n");
	printf("I printed %d character", count_cust);

	return 0;
}
