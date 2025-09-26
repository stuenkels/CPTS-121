/*************************************************************************
	File: generic.h
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: Header file for generic.c, this file has prototypes
				 for all the generic functions used in this project. 
				 See generic.c for more information.

*************************************************************************/

#ifndef GENERIC_H
#define GENERIC_H

/*
	Function name:	_init_random
	Purpose:		Initilaizes c random number library with
					a seed based off of the current time. This
					function should only be called once per program
					execution.
	Return type:	N/A
	Return value:	N/A
*/
void _init_random(void);

/*
	Function name:	read_int
	Purpose:		Reads and returns an integer value from stdio.
	Return type:	Integer
	Return value:	Unser input read from stdio
*/
int read_int(void);

/*
	Function name:	clear_screen
	Purpose:		Clears the terminal output by printing 100 newline
					characters to stdio. There is deffently better ways
					to acomplish this, however this implimintation is platform
					independent and does not require any special library.
	Return type:	N/A
	Return value:	N/A
*/
void clear_screen(void);


#endif