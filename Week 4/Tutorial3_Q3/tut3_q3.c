/*
HIT365 C Programming
Tutorial 3 Question 3
Sum a user defined sequence of integers
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{

	int numInt;	//initialise user specified number of integers
	int count = 1;
	int sum = 0;
	int temp = 0;

	printf("How many integers do you want to sum?: \n");
	scanf_s("%d", &numInt);

	while (count <= numInt) {
		printf("Enter integer %d:\n", count);
		scanf_s("%d", &temp);
		sum += temp;
		count++;
	}

	printf("Total sum of your %d integers is %d\n", numInt, sum);

}