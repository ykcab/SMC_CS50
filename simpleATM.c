/*
Author: Alain Mbuku
Section: SMC CS50
Module: 7
Assignment: 7
Date: November 5th,2017

This program constitue of an miniamal ATM simutalition.
WARNING: This program was compiled in visual studio 2017 Professional edition

*/



#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int k, pin;

int main()
{
	//Declaring variables
	int amount, withdraw, choice;
	int current_balance = 0;

	//this is just adding some flavor
	printf("*************************************************\n");
	printf("\t\Welcome to SUPERCASH Service\n");

	/*
	from here, the program will continue to prompt the user to select a choice after completing the initial selection
	and extis with choice = 4 since k=1.
	for choice 2 there won't be any computation for values higher then max but retain the current state of current_balance.
	choice 3: the program returns the inititial value of current_balance with value that falls under the conditional
	statement.
	*/
	do {
		printf("*************************************************\n");
		printf("Make a selection:\n\n");
		printf("1. Check Balance\n");
		printf("2. Cash Deposit\n");
		printf("3. Cash Withdrawal\n");
		printf("4. Quit\n");
		printf("*************************************************\n\n");
		printf("Enter your choice: ");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("\nYOUR BALANCE IS: %.2f\n\n", (double)current_balance);
			break;
		case 2:
			printf("\nENTER THE AMOUNT TO DEPOSIT: ");
			scanf_s("%d", &amount);
			if (amount > 0 && amount < MAX) {
				current_balance = Deposit(current_balance, amount);
			}
			printf("\nYOUR BALANCE IS %.2f: \n\n", (double)current_balance);
			break;
		case 3:
			printf("\nENTER THE AMOUNT TO WITHDRAW: ");
			scanf_s("%d", &withdraw);
			printf("\nYOUR BALANCE IS: %.2f\n\n", (double)(current_balance = Withdrawal(current_balance, withdraw)));
			break;

		case 4:
			k = 1;
			printf("\nTHANK YOU FOR USING SUPERCASH SERVICE\n\n");
			system("pause");
			break;
		default:
			printf("Invalide choice. Enter numbers 1 to 4, please try again\n\n");
			system("pause");
		}

	} while (k != 1);


}

/*Both Deposit and Withdrawall are declared with basics inputs
accepting 2 arguments. Withdrawall() retains the orginal value of x if the condition are not match. meaning should be less
then max and difference > 10.
*/
int Deposit(int x, int y) {
	return x += y;
}

int Withdrawal(int x, int y) {
	if (y < MAX) {
		if ((x - y) < 10) {
			return x;
		}
		else {
			return x = x - y;
		}
	}

}
