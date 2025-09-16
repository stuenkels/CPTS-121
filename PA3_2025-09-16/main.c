/*
	File: main.c
	Programmer: Elijah Stuenkel
	Date: 9/16/2025
	Assignment: PA3

	Description: Entry point to the PA3 assignment. Reads values in from 
				 input.txt and prints a processed output containting averages 
				 and standared deviations to the output file output.txt 
*/

#include "student_records.h"

int main(void)
{
	// Open the two files, input.txt in read mode and output.txt in write mode
	FILE* input = fopen("input.txt", "r"); 
	FILE* output = fopen("output.txt", "w"); 

	/*	
		Since ID is never used, we could just call read_integer()
		and not store its return value, however this makes the code 
		easier to read and understand
	*/

	// Read in all data from the input.txt file

	// Student 1 data
	double student1_id = read_integer(input);
	double student1_gpa = read_double(input);
	double student1_standing = read_integer(input);
	double student1_age = read_double(input);

	// Student 2 data
	double student2_id = read_integer(input);
	double student2_gpa = read_double(input);
	double student2_standing = read_integer(input);
	double student2_age = read_double(input);

	// Student 3 data
	double student3_id = read_integer(input);
	double student3_gpa = read_double(input);
	double student3_standing = read_integer(input);
	double student3_age = read_double(input);

	// Student 4 data
	double student4_id = read_integer(input);
	double student4_gpa = read_double(input);
	double student4_standing = read_integer(input);
	double student4_age = read_double(input);

	// Student 5 data
	double student5_id = read_integer(input);
	double student5_gpa = read_double(input);
	double student5_standing = read_integer(input);
	double student5_age = read_double(input);


	// All data has been read from input.txt, we can now start processing it

	// Find the sum of all GPAs, standings, and ages
	double gpa_sum = calculate_sum(student1_gpa, student2_gpa, student3_gpa, student4_gpa, student5_gpa);
	double standings_sum = calculate_sum(student1_standing, student2_standing, student3_standing, student4_standing, student5_standing);
	double ages_sum = calculate_sum(student1_age, student2_age, student3_age, student4_age, student5_age);

	// Find the mean from the sums of GPA, standings, and ages
	double gpa_mean = calculate_mean(gpa_sum, 5);
	double standings_mean = calculate_mean(standings_sum, 5);
	double ages_mean = calculate_mean(ages_sum, 5);

	// Print the calculated values to output.txt
	print_double(output, gpa_mean);
	print_double(output, standings_mean);
	print_double(output, ages_mean);
	print_newline(output);

	// Calculate deviation of each student's GPA from the mean
	double gpa_deviation1 = calculate_deviation(student1_gpa, gpa_mean);
	double gpa_deviation2 = calculate_deviation(student2_gpa, gpa_mean);
	double gpa_deviation3 = calculate_deviation(student3_gpa, gpa_mean);
	double gpa_deviation4 = calculate_deviation(student4_gpa, gpa_mean);
	double gpa_deviation5 = calculate_deviation(student5_gpa, gpa_mean);

	// Find the average variance of each students deviation
	double gpa_variance = calculate_variance(gpa_deviation1, gpa_deviation2, gpa_deviation3, gpa_deviation4, gpa_deviation5, 5);

	// Calculate the standared deviation using the previously calculated variance value
	double gpa_standared_deviation = calculate_standard_deviation(gpa_variance);

	// Print the calculated standared deviation to output.txt
	print_double(output, gpa_standared_deviation);

	// Find the minimum and maximum of all GPAs
	double min_gpa = find_min(student1_gpa, student2_gpa, student3_gpa, student4_gpa, student5_gpa);
	double max_gpa = find_max(student1_gpa, student2_gpa, student3_gpa, student4_gpa, student5_gpa);

	// Print the results to output.txt
	print_double(output, min_gpa);
	print_double(output, max_gpa);

	// Close the files
	fclose(output);
	fclose(input);

	// This will only run if running in DEBUG mode. Change #define DEBUG 0 to 1 in student_records.h to enable
	if (DEBUG) {
		printf("RUNNING IN DEBUG MODE\n-----------------------\n");

		printf("GPA sum: %lf\n", gpa_sum);
		printf("Standings sum: %lf\n", standings_sum);
		printf("Age sum: %lf\n\n", ages_sum);
		printf("\n");

		printf("GPA mean: %lf\n", gpa_mean);
		printf("Standings mean: %lf\n", standings_mean);
		printf("Ages mean: %lf\n", ages_mean);
		printf("\n");

		printf("GPA standared deviation: %lf", gpa_standared_deviation);
		printf("\n");

		printf("GPA min: %lf\n", min_gpa);
		printf("GPA max: %lf\n", max_gpa);
		printf("\n");
	}
	printf("Data has been processed, results stored in output.txt\n");

	return 0;
}