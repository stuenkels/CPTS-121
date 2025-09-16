#include "grades.h"


double get_grade() {
	double grade;
	scanf("%lf", &grade);
	return grade;
}

double get_avg(double grade1, double grade2) {
	return (grade1 + grade2) / 2;
}

double get_weighted(double value, double weight) {
	return value * weight;
}
