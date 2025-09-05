#include <stdio.h>
#include <math.h>


int main(void) {

	// Problem 1, find Perpendicular Bisector
	double x1, y1, x2, y2, slope, middle_x, middle_y, bysector_slope, bysector_yint;

	printf("Input (x1,y1), (x2,y2): ");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

	// Calculate slope of the given points
	slope = (y2 - y1) / (x2 - x1);

	// Find midpoint
	middle_x = (x2 + x1) / 2;
	middle_y = (y2 + y1) / 2;

	printf("Middle is (%lf,%lf)\n", middle_x, middle_y);

	// Calculate bisector slope and midpoint
	bysector_slope = -1.0/(slope);
	bysector_yint = middle_y - (bysector_slope * middle_x);

	// Return the computed values
	printf("Perpendicular Bisector of (%lf,%lf) and (%lf, %lf) is y=%lfx+%lf\n\n", x1, y1, x2, y2,bysector_slope,bysector_yint);


	// Problem 2, find BMI
	double weight, height, bmi;

	printf("Enter weight in lbs and height in feet: ");
	scanf("%lf%lf", &weight, &height);
	
	// Convert height to inches
	height = height * 12;

	// Compute and display results
	bmi = (weight/(height*height) * 703);
	printf("Your BMI is %lf\n", bmi);

	// Return with Success
	return 0;
}