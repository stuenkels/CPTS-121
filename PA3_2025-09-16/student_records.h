/*
	File: student_records.h
	Programmer: Elijah Stuenkel
	Date: 9/16/2025
	Assignment: PA3

	Description: Header file for the PA3 assignment, functions defined in student_records.c
*/

// Header include guard
#ifndef STUDENT_RECORDS_HEADER
#define STUDENT_RECORDS_HEADER

#define _CRT_SECURE_NO_WARNINGS

// Set to 0 to disable debug output
#define DEBUG 0

// Standared input and output for writing to files and console output
#include <stdio.h>
// pow() and sqrt()
#include <math.h>


// Functions to read from the infile, outputs either an intiger or double
double read_double(FILE* infile);
int read_integer(FILE* infile);

// Returns the sum of the given inputs as a double
double calculate_sum(double number1, double number2, double number3, double number4, double number5);

// Returns sum/number, or the mean
double calculate_mean(double sum, int number);

// Calculates the deviation of a given number compeared to a given mean
double calculate_deviation(double number, double mean);

// Takes 5 deviation values in and deterines the variance between them
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);

// Takes in the standared deviation with given variance
double calculate_standard_deviation(double variance);

// Takes in doubles, outputs either the maximum or minimum respectivly
double find_max(double number1, double number2, double number3, double number4, double number5);
double find_min(double number1, double number2, double number3, double number4, double number5);

// Prints a double to the outfile truncated to the 100th place
void print_double(FILE* outfile, double number);

// Not required by PA3, just makes the output file look like the expected result
void print_newline(FILE* outfile);

#endif