//HIT365 C Programming
//Tutorial 1 Question 4
//User enters two integers, program prints the larger number followed by words "is larger"
//if the numbers are equal, prints the message "These numbers are equal"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;	//first integer from user
	int y;	//second integer from user

	printf("This program will determine which number is larger (if either).\n");
	printf("Please enter your first integer: ");
	scanf_s("%d", &x);	//store first user integer as x
	printf("Please enter your second integer: ");
	scanf_s("%d", &y);	//store second user integer as y

	if (x == y) {
		printf("These numbers are equal!");
	}	//conditional statement determine if numbers are equal

	if (x > y) {
		printf("%d is larger!", x);
	}	//conditional statement determine if x is greater

	if (y > x) {
		printf("%d is larger!", y);
	}	//conditional statement determine if y is greater

	
}