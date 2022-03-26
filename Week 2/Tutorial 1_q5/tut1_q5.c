//HIT365 C Programming
//Tutorial 1 Question 5
//User enters 5 integers, program determines and prints the largest and smallest integers in the group.
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Enter 5 integers to calculate the largest and smallest\n");

	//variable declaration

	int c;
	int d;
	int e;
	int largest;	//placeholder variable for largest integer
	int smallest;	//placeholder variable for smallest integer
	int temp;

	scanf_s("%d %d %d %d %d", &largest, &smallest, &c, &d, &e);	//integer input and store as integer variable


	if (smallest > largest) {
		temp = largest;
		largest = smallest;
		smallest = temp;
	}

	if (c > largest) {
		largest = c;
	}

	if (c < smallest) {
		smallest = c;
	}

	if (d > largest) {
		largest = d;
	}

	if (d < smallest) {
		smallest = d;
	}

	if (e > largest) {
		largest = e;
	}

	if (e < smallest) {
		smallest = e;
	}

	printf("The largest number is %d\nThe smallest number is %d", largest, smallest);

}