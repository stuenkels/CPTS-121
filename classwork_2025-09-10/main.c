/*
	Description:	This program will read 3 exam scores from a file and
					deterine the corsponding letter grades or each exam score, and display
					the letter grades and scores in another file



*/



#include "LetterGrade.h"
int main(void) {
	FILE* input_stream = fopen("scores.txt", "r");

	int score1 = read_score(input_stream);
	int score2 = read_score(input_stream);
	int score3 = read_score(input_stream);

	printf("Score1: %c\nScore2: %c\nScore3: %c\n", get_grade(score1), get_grade(score2), get_grade(score3));

	fclose(input_stream);

	return 0;
}