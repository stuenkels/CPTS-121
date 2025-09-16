#ifndef EQUATIONS_HEADER
#define EQUATIONS_HEADER

#define _CRT_SECURE_NO_WARNINGS

#define PI 3.141592635


#include <stdio.h>
#include <math.h>

/*
	1. Total series resistance: series_resistance = R1 + R2 + R3, for 3 resistors. R1, R2,
	and R3 are integers.
*/
int calculate_series_resistance(int r1, int r2, int r3);

/*
	2. Sales tax: total_sales_tax = sales_tax_rate * item_cost
*/
double calculate_total_sales_tax(double sales_tax_rate, double item_cost);

/*
	3. Volume of a right rectangular pyramid: volume_pyramid = (l * w * h) / 3, where
	l and w are the length and width of the base, respectively, and h is the height
	of the pyramid.
*/
double calculate_volume_pyramid(double l, double w, double h);

/*
	4. Total parallel resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3),
	for 3 resistors. R1, R2, and R3 are integers
*/
double calculate_parallel_resistance(int r1, int r2, int r3);

/*
	5. Character encoding: encoded_character = (plaintext_character – 'a') + 'A' –
	shift_int; shift_int is an integer
*/
char calculate_encoded_character(char plaintext_character, int shift_int);

/*
	6. Distance between two points: distance = square root of ((x1 - x2)2 + (y1 - y2)2)
*/
double calculate_distance_between_points(double x1, double y1, double x2, double y2);

/*
	7. General equation: y = y / (3/17) - z + x / (a % 2) + PI
*/
double calculate_equation_answer(double y, double z, double x, int a);


#endif