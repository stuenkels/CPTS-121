/* Comment Block*/
#include "LetterGrade.h"

//function definitions

int read_score(FILE* in) {
	int score;
	fscanf(in, "%d", &score);
	return score;
}


char get_grade(int score) {
	char grade;
	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	return grade;
}