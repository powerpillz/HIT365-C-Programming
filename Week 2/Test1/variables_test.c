#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char characterName[] = "Ethan";		//array of characters
	int characterAge = 7;
	printf("The boss is %s and he is %d years old!", characterName, characterAge);		//using format specifiers %s %d

	double gpa = 5.2;		// %f is the specifier for a double or a float
	char grade = 'D';


	return 0;
}	// the code between these braces is known as a block. It is good practise to comment on the right brace.