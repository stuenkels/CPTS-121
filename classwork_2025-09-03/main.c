#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


int main(void) {
	// Create vars
	char first_initial = '\0', middle_initial = '\0', last_initial = '\0';

	double gp1 = 0.0, gp2 = 0.0, gp3 = 0.0;
	int credits1 = 0, credits2 = 0, credits3 = 0;


	// Store initials
	scanf(" %c %c %c", &first_initial, &middle_initial, &last_initial);
	// Print results
	printf("Initials: %c%c%c\n", first_initial, middle_initial, last_initial);


	//Get grade point for class 1
	printf("Enter a grade point for class 1: ");
	scanf("%lf", &gp1);

	//Get grade point for class 2
	printf("Enter a grade point for class 2: ");
	scanf("%lf", &gp2);

	//Get grade point for class 3
	printf("Enter a grade point for class 3: ");
	scanf("%lf", &gp3);

	return 0;
}