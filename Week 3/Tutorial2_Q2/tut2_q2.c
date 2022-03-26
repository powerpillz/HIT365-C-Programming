//HIT365 C Programming
//Tutorial 2 Question 2
//C program that uses the statements in Q1 to calculate:
// x raised to the y power.
// the program should have a while repetition control statement
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int y;
	int i;
	int power;

	i = 1;
	power = 1;

	printf("Enter value for x:\n");
	scanf_s("%d", &x);
	printf("Enter value for y:\n");
	scanf_s("%d", &y);

	while (i <= y) {
		power *= x;		//multiply power by x
		++i;			//increment i by 1
	}

	printf("%d", power);
	getchar();
	getchar();

}