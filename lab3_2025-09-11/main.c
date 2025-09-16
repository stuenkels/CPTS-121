#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

double get_weight() {
	double weight = 0;
	printf("Enter weight in lbs: ");
	scanf("%lf", &weight);
	return weight;
}

double get_height() {
	double height = 0;
	printf("Enter height in feet: ");
	scanf("%lf", &height);
	return height;
}

double convert_feet_to_inches(double height_in_feet) {
	return height_in_feet * 12.0;
}

double calculate_bmi(double weight_in_pounds, double height_in_feet) {
	return (weight_in_pounds / pow(convert_feet_to_inches(height_in_feet), 2)) * 703.00;
}

void display_bmi(double bmi) {
	printf("BMI: %0.2lf\n", bmi);
}


int main(void) {
	double weight = get_weight();
	double height = get_height();
	double bmi = calculate_bmi(weight, height);

	display_bmi(bmi);



	return 0;
}
