#ifndef EQUATIONS_HEADER
#define EQUATIONS_HEADER

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define G 32.17

//Functions

// Inputs
double get_theta();
double get_distance();
double get_velocity();

// Output
void print_results(double time, double height);


// Calculations
double calculate_time(double distance, double velocity, double theta);
double calculate_height(double velocity, double theta, double time);



#endif