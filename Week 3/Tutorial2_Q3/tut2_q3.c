//HIT365 C Programming
//Tutorial 2 Question 3
//Determine if store customer has exceeded credit limit on a charge account
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int accountNum;
	float openBalance;
	float totalCharge;
	float totalCredit;
	float creditLimit;

	printf("Enter account number (-1 to end):\n");
	scanf_s("%d", &accountNum);

	while (accountNum != -1) {

		printf("Enter beginning balance: \n");
		scanf_s("%f", &openBalance);
		printf("Enter total charges: \n");
		scanf_s("%f", &totalCharge);
		printf("Enter total credits: \n");
		scanf_s("%f", &totalCredit);
		printf("Enter credit limit: \n");
		scanf_s("%f", &creditLimit);

		openBalance += totalCharge - totalCredit;

		if (openBalance > creditLimit) {
			printf("Account: %d\n", accountNum);
			printf("Credit limit: %.2f\n", creditLimit);
			printf("Balance: %.2f\n", openBalance);
			printf("Credit Limit Exceeded\n");
		}

		printf("Enter account number (-1 to end):\n");
		scanf_s("%d", &accountNum);

		
	}


	getchar();

}