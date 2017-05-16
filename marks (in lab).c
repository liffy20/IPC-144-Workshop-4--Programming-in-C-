// Workshop 4 - in lab component  //

// By: Daniel Lifchitz //

// St ID: 107719163 //

// For: Gayan Gamage //

// Submit Date: October 7, 2016 //

// Section: SSS



#include<stdio.h>



int main(void) {





	int i = 1;

	int stnum[40];

	int marks[40];

	float nom;

	float total = 0;
	float avg;





	printf("       ---=== IPC mark Analyser V2.0 ===---\n");



	printf("Please enter the number of students(between 3 and 40): ");

	scanf("%f", &nom);





	while (nom < 3 || nom > 40)

	{



		printf("Invalid number, enter a number between 3 and 40 inclusive: ");

		scanf("%f", &nom);

	}



	printf("Row   Std No  Mrk\n");

	printf("--- --------- ---\n");





	for (i = 0; i < nom; i++)

	{
		printf("    _________ ___\r%3d ", i + 1);
		scanf("%d %d", &stnum[i], &marks[i]);
		total = marks[i] + total;
	}

	printf("=================\n");
	printf("Marks Entered, printing results:\n");
	printf("Row   Std No  Mrk\n");

	printf("--- --------- ---\n");

	for (i = 0; i < nom; i++) {

		printf("%03d %09d %3d\n", i + 1, stnum[i], marks[i]);
	}

	printf("=================\n");


	avg = total / nom;

	printf("The average of all marks in this group is %.1f.\n", avg);
	printf("Program Ended.\n");










	return 0;

}


