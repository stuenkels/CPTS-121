/*************************************************************************
	File: generic.h
	Programmer: Elijah Stuenkel
	Date: 9/26/2025
	Assignment: PA4

	Description: C file which defines all the functions prototyped in
				 craps.h. Refer to craps.h for individual function
				 specifications such as return value and purpose.

*************************************************************************/

/*
	Includes
*/
#include "craps.h"
#include "generic.h"

// Game Manager Function, called by main()
void play_craps( void ) {
	// Settup the screen and persent a nice logo to users
	print_banner();

	// How much cash will the player be playing with during program
	// execution?
	int starting_cash = get_player_init_cash();
	int cash = starting_cash;
	printf("\n\n");
	
	// Declare control vars
	int rounds = 1;
	int cash_bet;
	int hand_result;
	int point_result;

	// Main game loop, as long as a user wants
	// to keep playing, this loop will keep 
	// running. 
	for (;;) {
		// Quit if a player is out of money
		if (cash <= 0) {
			printf("YOU ARE OUT OF CASH\n");
			break;
		}

		// Print out game information to the user
		// and get their bet ammout
		printf("TOTAL CASH: %d\n", cash);
		cash_bet = get_bet(cash);
		printf("\n");
		printf("HAND NUMBER %d\n", rounds);

		// Play the first hand, this is where a user
		// can get a Natural, Craps, or point target
		// in which the round keeps going
		hand_result = play_first_hand(rounds);
		
		// hand result returns 1 on win and 0 on loss
		// adjust cash ammout accordingly
		if (hand_result == 1) {
			cash += cash_bet;
		}
		else if (hand_result == 0) {
			cash -= cash_bet;
		}

		// If the return value from the first hand is
		// not 0 or 1, the function will return the point
		// target
		else {
			point_result = play_point_hand(hand_result);

			// play_point_hand will play as many hands as
			// required, and will always return 0 or 1
			if (point_result == 0) {
				cash -= cash_bet;
			}
			else {
				cash += cash_bet;
			}
		}

		// Keep track of how many rounds have been played
		rounds++;

		// Check if the user wants to play again. If they
		// do not, break from game loop. 
		if(!play_again()){
			clear_screen();
			break;
		}
		clear_screen();
	}
	// Program reaches this point once the user no longer
	// wants to keep playing, therefore a final result 
	// should be displayed
	print_final_standings(starting_cash, cash, rounds);
	return;
}

// Play First Hand function, called by play_craps()
// Called once per round of play
int play_first_hand(int hand_number) {
	int sum, die1, die2;

	// I need to study up on stdin, for whatever reason
	// if i don't clear the buffer here then the roll_dice
	// function will not wait for user input correctly
	int ch;
	while ((ch = getchar()) != '\n' && ch != EOF);

	// Simulate dice rolling and assign die1, die2, and sum 
	// to values determined in roll_dice
	roll_dice(&die1, &die2, &sum);
	
	// Print the result of the throw
	printf("\THROW RESULT:\n");
	Throw_Result result;

	// check_score determines if a user got a natural,
	// crap, or point target, then returns a type of Throw_Result
	// We can use a switch statement to figure out what happened
	result = check_score(sum);
	switch (result) {
	case NATURAL:
		printf("NATURAL! YOU WIN!\n\n");
		return 1;
		break;
	case CRAPS:
		printf("CRAPS, YOU LOOSE!\n\n");
		return 0;
		break;
	case POINT:
		printf("POINT TARGET OF %d\n\n", sum);
		return sum;
		break;
	}

	// Sometimes compliers throw a fit if they cannot dtermine explicitly
	// which return statement will execute
	return 69420;
}

// Play Point Hand, this plays n number of hands
// Until the user either looses or wins
int play_point_hand(int point) {
	// Keep track of how many times we have rolled the dice
	int try = 1;
	for(;;){
		// Print out general information
		printf("TRY NUMBER %d\n",try);
		printf("TARGET POINT: %d\n", point);

		// Simulate a dice roll
		int sum, die1, die2;
		roll_dice(&die1, &die2, &sum);

		// Check if we win or loose
		if (sum == point) {
			printf("YOU MADE YOUR POINT\n\n");
			return 1;
		}
		else if (sum == 7) {
			printf("7 ROLLED, POINT LOST\n\n");
			return 0;
		}

		// If we did not win and did not loose, the loop repeats
		// and the user will roll the dice again
		try++;
		// Keep output clean
		printf("\n");
	}
}

// Generate a random die roll
int roll_die(void) {
	// Return value within range [1,6]
	return (rand() % 6) + 1;
}

// Simulate rolling two dice
void roll_dice(int* die1, int* die2, int* sum) {
	// Prompt user
	printf("PRESS ENTER TO ROLL");
	// We do not care aobut the return value, only if enter was pressed
	scanf("%*c");

	// Set the vars passed by address to the result of two random die rolls
	*die1 = roll_die();
	*die2 = roll_die();
	*sum = *die1 + *die2;

	// Use extended ASCII box drawing characters to make a pretty picture of two dice
	printf("\xDA\xC4\xBF \xDA\xC4\xBF\n");
	printf("|%d| |%d| SUM: %d\n", *die1, *die2, *sum);
	printf("\xC0\xC4\xD9 \xC0\xC4\xD9\n");
	return;
}

// Prompt user for how much money they have to start
int get_player_init_cash(void) {
	printf("ENTER STARTING CASH: ");
	return read_int();
}

// Prompt user for how much they want to bet
int get_bet(int cash) {
	int bet;
	// Use a do while to make sure the code is run at least once
	do {
		printf("ENTER BET: ");
		bet = read_int();
		// Don't allow the user to bet more than they have
		if (bet > cash) {
			printf("YOU DO NOT HAVE THAT MUCH CASH\n");
		}
	} while (bet > cash);
	return bet;
}

// Prompt the user to play again
// Returns 1 if yes, 0 if no
int play_again(void) {
	char result;
	int return_val;
	printf("WOULD YOU LIKE TO PLAY AGAIN? (y/n): ");
	scanf(" %c", &result);

	// Users are dumb and like to accidently keep caps lock
	// on while providing input
	if (result == 'y' || result == 'Y') {
		return 1;
	}
	else if (result == 'n' || result == 'N') {
		return 0;
	}
	else {
		printf("UNKNOWN VALUE: %c\n", result);
		// Whats this?!?!? Recursion?!?!?!?!
		// Calls the function again to keep going
		// This could be written as a loop but this also works
		return play_again();
	}


}

// Check score, determine the outcome from a given socre
Throw_Result check_score(int score) {
	// Using a custom enum, therefore we can
	// create a highly readable function
	if (score == 7 || score == 11) {
		return NATURAL;
	}
	if (score == 2 || score == 3 || score == 12) {
		return CRAPS;
	}
	// If the score was anything other than Natural or Craps we tell
	// the game manager to play for a target point
	return POINT;
}

// Print Banner
void print_banner(void) {
	// manytools.org/hacker-tools/ascii-banner/
	// This tool did not generate any code I copy and pasted line by line lol
	// I think it looks cool but idk
	printf("      # ###       ##### /##        ##              ##### ##       #######    \n");
	printf("    /  /###  / ######  / ##     /####           ######  /###    /       ###  \n");
	printf("   /  /  ###/ /#   /  /  ##    /  ###          /#   /  /  ###  /         ##  \n");
	printf("  /  ##   ## /    /  /   ##       /##         /    /  /    ### ##        #   \n");
	printf(" /  ###          /  /    /       /  ##            /  /      ##  ###          \n");
	printf("##   ##         ## ##   /        /  ##           ## ##      ## ## ###        \n");
	printf("##   ##         ## ##  /        /    ##          ## ##      ##  ### ###      \n");
	printf("##   ##         ## ###/         /    ##        /### ##      /     ### ###    \n");
	printf("##   ##         ## ##  ###     /      ##      / ### ##     /        ### /##  \n");
	printf("##   ##         ## ##    ##    /########         ## ######/           #/ /## \n");
	printf(" ##  ##         #  ##    ##   /        ##        ## ######             #/ ## \n");
	printf("  ## #      /      /     ##   #        ##        ## ##                  # /  \n");
	printf("   ###     /   /##/      ### /####      ##       ## ##        /##        /   \n");
	printf("    ######/   /  ####    ## /   ####    ## /     ## ##       /  ########/    \n");
	printf("      ###    /    ##     # /     ##      #/ ##   ## ##      /     #####      \n");
	printf("             #             #               ###   #  /       |                \n");
	printf("              ##            ##              ###    /         \\)              \n");
	printf("                                             #####/                          \n");
	printf("                                               ###                           \n");
	return;
}

// Print Final Standings
void print_final_standings(int starting_cash, int cash, int rounds) {
	// Called after the game is over, we should now
	// inform the user on how well they dids
	printf("ROUNDS PLAYED: %d\n", rounds);
	printf("STARTING CASH: %d$\n", starting_cash);
	printf("ENDING CASH:   %d$\n", cash);

	// Determine if they made a profit or lost money
	// then print an approprioute output
	int difference = cash - starting_cash;
	if (difference > 0) {
		printf("PROFIT EARNED: %d$\n", difference);
	}
	else {
		printf("MONEY LOST:    %d$\n", difference);
	}
	return;
}



