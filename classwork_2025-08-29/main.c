/*
	Author: Elijah Stuenkel

	Description: Prompt user for initials, corrosponding GPA and credits for 3 class, compute average and display


*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	char first_initial = '\0';
	char middle_initial = '\0';
	char last_initial = '\0';

	//Prompt user for initials
	printf("Enter first middle last initials: ");
	scanf(" %c %c %c", &first_initial, &middle_initial, &last_initial);

	printf("%c%c%c\n", first_initial, middle_initial, last_initial);




	return 0;
}