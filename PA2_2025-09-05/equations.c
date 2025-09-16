#include "equations.h"

// 1
int calculate_series_resistance(int r1, int r2, int r3) {
	return r1 + r2 + r3;
}

// 2
double calculate_total_sales_tax(double sales_tax_rate, double item_cost) {
	return sales_tax_rate * item_cost;
}

// 3
double calculate_volume_pyramid(double l, double w, double h) {
	return (l * w * h) / 3;
}

// 4
double calculate_parallel_resistance(int r1, int r2, int r3) {
	return 1 / (1 / (double)r1 + 1 / (double)r2 + 1 / (double)r3);
}

// 5
char calculate_encoded_character(char plaintext_character, int shift_int) {
	return (plaintext_character - 'a') + 'A' - shift_int;
}

// 6
double calculate_distance_between_points(double x1, double y1, double x2, double y2) {
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

// 7
double calculate_equation_answer(double y, double z, double x, int a) {
	// If a is even then this has a divide by 0 error, i'm not sure why they the problem didn't just add PI to the result then divide but whatever
	return y / ((double)3 / (double)17) - z + x / ((a % 2) + PI);
}
