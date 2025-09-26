/*************************************************************************
	File: craps.h
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: Header file for craps.c. Lays out function
				 prototypes which are implimented in craps.c.
				 These functions are project specific.

*************************************************************************/


#ifndef CRAPS_H
#define CRAPS_H

/*
	Definitions
*/

// Disables warnings for using insecure functions such as scanf
#define _CRT_SECURE_NO_WARNINGS

/*
	Includes
*/

#include "custom_types.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>


/*
	Functions
*/


/*
	Function name:	play_craps
	Purpose:		Acts as a game manager. Called by main, returns when
					the user is compleatly done with playing craps. This
					keeps the main function clean.
	Return type:	N/A
	Return value:	N/A
*/
void play_craps();


/*
	Function name:	play_first_hand
	Purpose:		Plays the first round or "hand" of a craps game.
					This is split from play_point_hand as you can
					only get a natural or crap on first hand
	Return type:	Integer
	Return value:	1 on Natural, 0 on Craps. For point the target
					point value is retuned.
*/
int play_first_hand(int hand_number);


/*
	Function name:	play_point_hand
	Purpose:		Plays a round of craps when a target point value
					has already been established by the first hand.
	Return type:	Integer
	Return value:	Returns 1 on win and 0 on loss
*/
int play_point_hand(int point);


/*
	Function name:	roll_die
	Purpose:		"Rolls" a singual die using a call to random. Make
					sure _init_random() has been called before calling
					this function.
	Return type:	Integer
	Return value:	Returns a random integer value in the range [1,6]
*/
int roll_die(void);


/*
	Function name:	roll_dice
	Purpose:		Simulates the rolling of 2 dice and prints the output
					to stdio with nice pretty formatting. Takes pointers 
					to 3 integers as paramaters, sets them with the result
					from rolling the dice. Make sure input buffer is clear
					before calling this function or it will not wait for 
					the user to press enter
	Return type:	N/A
	Return value:	N/A
*/
void roll_dice(int* die1, int* die2, int* sum);


/*
	Function name:	get_player_init_cash
	Purpose:		Prompts the user for their initial ammout of cash.
	Return type:	Integer
	Return value:	User input read from stdio
*/
int get_player_init_cash(void);

/*
	Function name:	get_bet
	Purpose:		Prompts the user for how much they would like to bet
					on a round. 
	Return type:	Integer
	Return value:	User input read from stdio
*/
int get_bet(int cash);


/*
	Function name:	play_again
	Purpose:		Prompts the user if they would like to play another 
					round. User input is in the form of y/n.
	Return type:	Integer
	Return value:	1 if the user wants to play again, 0 if they are done
*/
int play_again(void);


/*
	Function name:	check_score
	Purpose:		Takes an input of a first round score (or sum of dice)
					and returns an enum value that defines the outcome of 
					that round. I wanted to use enums to be fancy, this 
					function could have returned integer values of 0, 1, 2.
	Return type:	Integer/Throw_Result enum
	Return value:	NATURAL, CRAPS, POINT
*/
Throw_Result check_score(int score);


/*
	Function name:	print_banner
	Purpose:		Prints a pretty banner that acts as a splashscreen for
					the game.
	Return type:	N/A
	Return value:	N/A
*/
void print_banner(void);


/*
	Function name:	print_final_standings
	Purpose:		Prints number of rounds played, and ammout earned/lost
					from betting.
	Return type:	N/A
	Return value:	N/A
*/
void print_final_standings(int starting_cash, int cash, int rounds);


#endif