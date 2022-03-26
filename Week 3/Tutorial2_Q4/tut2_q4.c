/*HIT365 C Programming
Tutorial 2 Question 4
Read three nonzero float values and determine if they could 
represent the sides of a right angled triangle*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

	float x;
	float y;
	float z;
	float hyp;
	float adj;
	float opp;

	printf("Input the side lengths of your triangle: \n");
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	scanf_s("%f", &z);


	if (x > y && x > z) {
		hyp = x;
		adj = y;
		opp = z;
	}
	if (y > x && y > z) {
		hyp = y;
		adj = x;
		opp = z;
	}
	if (z > x && z > y) {
		hyp = z;
		adj = x;
		opp = y;
	}

	if (pow(adj, 2) + pow(opp, 2) == pow(hyp, 2)) {
		printf("Congratulations you have a right triangle!");
	}
	else {
		printf("Sorry you do not have a right triangle");
	}

	return 0;
}