#include "grades.h"

int main(void) {
	double exam1, exam2;
	double lab1, lab2;
	double project1, project2;

	double avg_exam, avg_lab, avg_project;

	printf("Enter 2 exams, 2 labs, and 2 project grades: ");
	exam1 = get_grade();
	exam2 = get_grade();
	lab1 = get_grade();
	lab2 = get_grade();
	project1 = get_grade();
	project2 = get_grade();

	avg_exam = get_avg(exam1, exam2);
	avg_lab = get_avg(lab1, lab2);
	avg_project = get_avg(project1, project2);




	avg_exam = get_weighted(avg_exam, 0.6);
	avg_lab = get_weighted(avg_lab, 0.10);
	avg_project = get_weighted(avg_project, 0.30);


	
	printf("Your grade is: %lf\n", avg_exam + avg_lab + avg_project);



	return 0;
}