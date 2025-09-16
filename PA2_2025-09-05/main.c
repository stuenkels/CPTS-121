/**************************************************************************************************
 * Programmer: Elijah Stuenkel                                                                    *
 * Class: CptS 121; Lab Section 12                                                                *
 * Programming Assignment: 2																	  *
 * Date: 9/12/2025                                                                                *
 *                                                                                                *
 * Description: This program builds off of the previous PA assignment, splitting the			  *
 *				calculations into seperate functions. This project follows the 3 file			  *
 *				structure, two c files and one header file. All function prototypes exist		  *
 *				in the header file, equations.h, with their definitons in equations.c			  *
 *                                                                                                *
 *************************************************************************************************/

#include "equations.h"

int main(void) {
	// Print cool looking title
	printf("PA2 General Equation Solver\n---------------------------\n");

	// Calculate series resistance of 3 intiger value resistors 
	int r1, r2, r3;
	printf("Enter series resistor values for R1, R2, and R3: ");
	scanf("%d%d%d", &r1, &r2, &r3);
	printf("Total series resistance =R1+R2+R3 =%d+%d+%d: %d ohms\n", r1, r2, r3, calculate_series_resistance(r1,r2,r3));

	// Calculate sales tax by taking in sales tax rate and the cost of an item
	double sales_tax_rate, item_cost;
	printf("Enter sales tax rate and item cost: ");
	scanf("%lf%lf", &sales_tax_rate, &item_cost);
	printf("Total Sales Tax = sales_tax_rate*item_cost =%0.2lf*%0.2lf =%0.2lf\n", sales_tax_rate, item_cost, calculate_total_sales_tax(sales_tax_rate, item_cost));

	// Calcualte the volume of a pyramid using the length width and height as inputs
	double l, w, h;
	printf("Enter length, width, height of a rectangular pyramid: ");
	scanf("%lf%lf%lf", &l, &w, &h);
	printf("Pyramid Volume =(l*w*h)/3 =(%0.2lf*%0.2lf*%0.2lf)/3 %0.2lf\n", l, w, h, calculate_volume_pyramid(l, w, h));
	
	// Calculate parallel resistance of 3 intiger value resistors
	// Vars already defined in equation 1, we can reuse them
	printf("Enter parallel resistor values for R1, R2, and R3: ");
	scanf("%d%d%d", &r1, &r2, &r3);
	printf("Parrallel resistance =1/(1/R1+1/R2+1/R3) =1/(1/%d+1/%d+1/%d) %0.2lf ohms\n", r1, r2, r3, calculate_parallel_resistance(r1, r2, r3));
	
	// "Encode" a character by shifting it by a given intiger
	char plaintext_character;
	int shift_int;
	printf("Enter plaintext character and shift integer: ");
	scanf(" %c %d", &plaintext_character, &shift_int);
	printf("Encoded Character =(plaintext_character-'a')+'A'-shift_int =(%c-'a')+'A'-%d  =%c\n", plaintext_character, shift_int, calculate_encoded_character(plaintext_character, shift_int));
	
	// Calculate the distance between two points
	double x1, x2, y1, y2;
	printf("Enter (x1,y1) and (x2,y2): ");
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
	printf("Distance between (%0.2lf,%0.2lf) and (%0.2lf,%0.2lf) =sqr((x1-x2)^2)+(y1-y2)^2) =sqr((%0.2lf-%0.2lf)^2)+(%0.2lf-%0.2lf)^2) =%0.2lf\n", x1, y1, x2, y2, x1, y1, x2, y2, calculate_distance_between_points(x1,y1,x2,y2));
	
	// Find the result of a random calculation
	double y, z, x;
	int a;
	printf("Solving y/(3/17)-z+x/(a%2)+PI, enter y, z, x, and a: ");
	scanf("%lf%lf%lf%d", &y, &z, &x, &a);
	printf("Result =y/(3/17)-z+x/(a\%2)+PI =%0.2lf/(3/17)-%0.2lf+%0.2lf/(%d\%2)+PI =%0.2lf\n", y, z, x, a, calculate_equation_answer(y,z,x,a));

	// Return success
	return 0;
}