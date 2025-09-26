/*************************************************************************
	File: main.h
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: contains the main function for the PA4 craps game
				 programming assingment. This function intializes
				 random then calls play_craps() which manages the
				 game.

*************************************************************************/

/*
	Includes
*/
#include "craps.h"
#include "generic.h"


void main(void) {
	// Set random seed value
	_init_random();
	// Start game
	play_craps();

	return;
}