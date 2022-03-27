/*
HIT365 C Programming
Tutorial 3 Question 4
Find the smallest of a user defined group of integers
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int numInt;		//user specified number of integers
	int count = 1;
	int smallest = 0;
	int temp = 0;


	printf("How many integers do you want to assess?: \n");
	scanf_s("%d", &numInt);

	while (count <= numInt) {
		printf("Enter integer %d of %d\n", count, numInt);
		scanf_s("%d", &temp);

		if (smallest == 0) {
			smallest = temp;
		}
		else if (temp < smallest) {
			smallest = temp;
		}

		count++;

	}

	printf("The smallest integer you entered is %d", smallest);

	return 0;
}