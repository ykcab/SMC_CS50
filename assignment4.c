/*
Author: ykcab
Section: SMC CS50
Module: 4
Assignment: 4
Date: October 15th,2017

This program constitue of input bunch of numbers and output the miniamal and maximum value.
WARNING: This program was compiled in visual studio 2017 Professional Edition

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

	//declaring & initializing all variables
	double input = 0, max_in = 0, min_in = 0, total = 0, average = 0;
	int num_count = 0;

	//start with the first entry
	printf("Enter a number: ");
	scanf_s("%lf", &input);

	max_in = input;
	min_in = input;

	//the loop starts here, will stop when user enters '0'
	while (input != 0 || input != 0.00 || input != 0.0) {
		total += input; //computing the total of all entries
		num_count++;	//keeping track of the loop/number of entries.

		if (input > max_in) {
			max_in = input;
		}
		if (input < min_in) {
			min_in = input;
		}

		printf("Enter a number: ");
		scanf_s("%lf", &input);
	}

	//computing the average and printing the result
	if (num_count >= 1) {
		average = total / (float)num_count;
		printf("\nThe minimum entry was: \t\t%.2lf\n", min_in);
		printf("The maximum entry was: \t\t%.2lf\n", max_in);
		printf("The average of all entries was: %.2lf\n\n", average);
	}

	//making sure the while loop doesn't go to infinit on bad entries.
	else {
		printf("Soory, wrong inputs! Only numbers\n");
	}

	//making sure human have time to read the output!
	system("pause");

}
