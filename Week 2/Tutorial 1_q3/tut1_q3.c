//HIT365 C Programming
//Tutorial 1 Question 3
//Write program prompts user enter 2 numbers, prints their sum, product, difference, quotient and remainder.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;	//user input variable x
	int y; //user input variable y

	printf("Enter two numbers to calculate the sum, product, difference, quotient and remainder.\n");
	printf("Please enter your first number: ");
	scanf_s("%d", &x);	//stores first integer as x
	printf("Please enter your second number: ");
	scanf_s("%d", &y);	//stores second integer as y

	int sum = x + y;
	int product = x * y;
	int difference = x - y;
	int quotient = x / y;
	int remainder = x % y;

	printf("The sum of %d and %d is %d\n", x, y, sum);
	printf("The product of %d and %d is %d\n", x, y, product);
	printf("The difference of %d and %d is %d\n", x, y, difference);
	printf("The quotient of %d and %d is %d\n", x, y, quotient);
	printf("The remainder of %d and %d is %d\n", x, y, remainder);

	return 0;
}