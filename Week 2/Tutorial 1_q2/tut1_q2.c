//HIT365 C Programming
//Tutorial 1 Question 2
//Using the statements wrote in Question 1, write a complete program that calculates the product of three integers.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;	//first integer entered by user
	int y;	//second integer entered by user
	int z;	//third integer entered by user

	printf("This program will calculate the product of three integers\n");
	printf("Enter your first integer: ");
	scanf_s("%d", &x);	//read first integer store as x
	printf("Enter your second integer: ");
	scanf_s("%d", &y);	//read second integer store as y
	printf("Enter your third integer: ");
	scanf_s("%d", &z);	//read third integer store as z

	int product = x * y * z;

	printf("The product of your three integers is %d", product);


	return 0;
}	