/*************************************************************************
	File: custom_types.h
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: Defines some enums to make code more readable and
				 easier to understand.

*************************************************************************/


#ifndef CUSTOM_TYPES_H
#define CUSTOM_TYPES_H

/* 
	Enums
*/

/*
	Purpose: Defines 3 constancts which repersent 
			 the outcome of the first hand
*/
typedef enum {
	NATURAL,	// Dice sum of 7 or 11, player wins
	CRAPS,		// Dice sum of 2, 3, or 12
	POINT,		// Dice sum of 4, 5, 6, 8, 9, or 10
} Throw_Result;

#endif