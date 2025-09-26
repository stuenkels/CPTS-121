/*************************************************************************
	File: generic.c
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: C file which defines genearic non-project specific functions.
				 Keeping this seperate makes the code easier to read, and better
				 logically organizes functions within their respecitve C files

*************************************************************************/

#include "craps.h"
#include "generic.h"

// Init random
void _init_random(void) {
	// Set random seed based off current time
	srand(time(NULL));
}

// Returns an int value read from scanf
int read_int(void) {
	int val;
	scanf("%d", &val);
	return val;
}

// Returns a double value read from scanf
double read_double(void) {
	double val;
	scanf("%lf", &val);
	return val;
}

void clear_screen(void) {
	for (int i = 0; i < 100; i++) {
		printf("\n");
	}
}