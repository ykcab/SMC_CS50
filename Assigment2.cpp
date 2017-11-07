/*
This is Assigment 2 in CS50
College: Santa Monica College
Author: Alain Mbuku
Version: 1.0 x86
The program consist of evaluating the total mark of a student using the formula:
Total Weighted Score = (average assignments)*40% + (midterm)*30% + (final exam)*30%

*/


#include "stdio.h"
#include "stdafx.h"
#include "process.h"

int main()
{
	//Declaring all variables

	double total;
	int scoreAssignment_1;
	int scoreAssignment_2;
	int scoreAssignment_3;

	float average;
	int midScore;
	int finalExam;
	int finalTotal;
	const float &val = 0.3; //30%
	const float &n = 0.4; //40%



	/* Prompt the user to enter assigment scores 3 times and which will be stored repectiveley 
	in scoreAssignment_1, scoreAssignment_2 and scoreAssignment_3
	*/

	printf("Enter the score of the first assignement:\n");
	scanf_s("%d", &scoreAssignment_1);

	printf("Enter the score of the second assignement:\n");
	scanf_s("%d", &scoreAssignment_2);

	printf("Enter the score of the third assignement:\n");
	scanf_s("%d", &scoreAssignment_3);

	//Compute the average of the assignment score and save it as float variable "average"
	 average = (scoreAssignment_1 + scoreAssignment_2 + scoreAssignment_3) / 3;
	 
	 //show the avareage result (formated to two digits decimal
	 printf("Your Average score is: %.2f\n", average); 


	 //prompt to enter mid term and final exam score
	 printf("Now let calculate your Final score\n");
	 printf("Enter the Midterm score:\n");

	 scanf_s("%d", &midScore); //storing the value of mid term score

	 printf("Enter the Final Exam score\n");

	 scanf_s("%d", &finalExam); //storing the value of the final exam
	 
	 //compute the Total Weighted score
	 total = (average * n) + (midScore * val) + (finalExam * val);
	 printf("Your Final Score is: %.2f\n ", total); //total is rounded or formated to two digits decimal.
	 
	 //exiting the program but upon user confirmation by pressing any key
	 system("pause");
	
	return 0;
}