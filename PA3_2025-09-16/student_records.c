/*
	File: student_records.c
	Programmer: Elijah Stuenkel
	Date: 9/16/2025
	Assignment: PA3

	Description: Definitions for the functions defined in student_records.h
				 All the functions are commented with expected input and output
				 as well as revelant forumulas
*/

// Function prototypes
#include "student_records.h"

// Takes a file stream and returns the next line read as a double
double read_double(FILE* infile) {
	double return_val;
	fscanf(infile, "%lf", &return_val);
	return return_val;
}

// Takes a file stream and returns the next line read as an intiger
int read_integer(FILE* infile) {
	int return_val;
	fscanf(infile, "%d", &return_val);
	return return_val;
}

// Takes in 5 doubles as input. Returns Σnumber_n
double calculate_sum(double number1, double number2, double number3, double number4, double number5) {
	return number1 + number2 + number3 + number4 + number5;
}

// Takes a sum value as a double and an intiger number. Returns sum/intiger
double calculate_mean(double sum, int number) {
	return sum / (double)number;
}

// Finds the deviation or differences between double number and double mean
double calculate_deviation(double number, double mean) {
	return number - mean;
}

// Finds the average variation of the given double deviation values. The number intiger should always be 5
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	deviation1 = pow(deviation1, 2);
	deviation2 = pow(deviation2, 2);
	deviation3 = pow(deviation3, 2);
	deviation4 = pow(deviation4, 2);
	deviation5 = pow(deviation5, 2);
	
	double sum = calculate_sum(deviation1, deviation2, deviation3, deviation4, deviation5);

	return calculate_mean(sum, number);

}

// Finds the standard deviation by taking the square root of the variance double input
double calculate_standard_deviation(double variance) {
	return sqrt(variance);
}

// Returns the largest value of the given doubles
double find_max(double number1, double number2, double number3, double number4, double number5) {
	double max_value;

	max_value = fmax(number1, number2);
	max_value = fmax(max_value, number3);
	max_value = fmax(max_value, number4);
	max_value = fmax(max_value, number5);
	
	return max_value;
}

// Returns the smallest value of the given doubles
double find_min(double number1, double number2, double number3, double number4, double number5) {
	double min_value;

	min_value = fmin(number1, number2);
	min_value = fmin(min_value, number3);
	min_value = fmin(min_value, number4);
	min_value = fmin(min_value, number5);

	return min_value;
}

// Prints a double value truncated to the hundredths to outfile
void print_double(FILE* outfile, double number) {
	fprintf(outfile, "%0.2lf\n", number);
	return;
}

// Prints an newline character the the outfile
void print_newline(FILE* outfile) {
	fprintf(outfile, "\n");
	return;
}
