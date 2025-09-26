/*
	File: student_records.h
	Programmer: Elijah Stuenkel
	Date: 9/16/2025
	Assignment: PA3

	Description: Header file for the PA3 assignment, functions defined in student_records.c
*/

// Header include guard
#ifndef SALARIES_H
#define SALARIES_H

#define _CRT_SECURE_NO_WARNINGS

// Set to 0 to disable debug output
#define DEBUG 0


#include <stdio.h>

#include <math.h>



double read_double(FILE* infile);
void part_one();
void part_two();
void part_three();
void part_four();



#endif