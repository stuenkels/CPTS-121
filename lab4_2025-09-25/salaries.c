#include "salaries.h"


double read_double(FILE* infile) {
	double return_val;
	fscanf(infile, "%lf", &return_val);
	return return_val;
}


void part_one() {
	FILE* infile = fopen("salaries.txt", "r");

	double sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += read_double(infile);
	}

	char bracket;
	if (sum >= 200000) {
		bracket = 'h';
	}
	else if (sum >= 15000) {
		bracket = 'm';
	}
	else {
		bracket = 'l';
	}

	printf("Total: %0.2lf\nBracket %c\n", sum, bracket);


	fclose(infile);
	return;
}

void part_two() {
	FILE* infile = fopen("data.txt", "r");
	FILE* outfile = fopen("output.txt", "w");

	int lines = 0;
	double sum = 0;
	while (!feof(infile))
	{
		sum += read_double(infile);
		lines++;
	}
	printf("Average: %lf\n", sum / lines);
	fprintf(outfile, "Average: %lf", sum / lines);
	fclose(infile);
	fclose(outfile);
	return;
}

void part_three() {
	int number1, number2, remainder;

	printf("Number1: ");
	scanf("%d", &number1);
	//number1 = -252;
	//number2 = 735;
	printf("Number2: ");
	scanf("%d", &number2);

	number1 = abs(number1);
	number2 = abs(number2);


	while (1) {
		remainder = number1 % number2;
		if (remainder == 0) {
			break;
		}
		else {
			number1 = number2;
			number2 = remainder;
		}
	}

	printf("GCD: %d\n", number2);
	return;
}


void part_four() {
	FILE* infile = fopen("minmax.txt", "r");
	double min;
	double max;
	int val;

	val = read_double(infile);
	min = val;
	max = val;

	while (!feof(infile)) {
		val = read_double(infile);
		if (val > max) {
			max = val;
		}
		if (val < min) {
			min = val;
		}
	}
	printf("MIN: %lf\n", min);
	printf("MAX: %lf\n", max);
	fclose(infile);
	return;
}