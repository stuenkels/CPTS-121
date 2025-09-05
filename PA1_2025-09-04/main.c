/*

	Author: Elijah Stuenkel
	Date Created: 9/4/25
	Course: CptS 121 Section 2 Lab 12

	Description: This is the PA1 assignment, solving various equations with user input

*/


#include <stdio.h>
#include <math.h>

#define PI 3.141592635



int main(void) {
	/*
		1. Total series resistance: series_resistance = R1 + R2 + R3, for 3 resistors. R1, R2,
		and R3 are integers.
	*/

	// Declare required variables
	int r1, r2, r3, series_resistance;

	printf("Enter series resistor values for R1, R2, and R3: ");
	// Retrieve 3 intigers and assign them to declared variables
	scanf("%d%d%d", &r1, &r2, &r3);

	series_resistance = r1 + r2 + r3;
	// Display result
	printf("Total series resistance =R1+R2+R3 =%d+%d+%d: %d ohms\n", r1, r2, r3, series_resistance);


	/*
		2. Sales tax: total_sales_tax = sales_tax_rate * item_cost (note: it’s OK to show
		the result beyond the hundredths place, we don’t know how to show to the
		hundredths place yet)
	*/

	// Declare required variables
	double total_sales_tax, sales_tax_rate, item_cost;

	printf("Enter sales tax rate and item cost: ");
	// Retrieve values and assign them to variables
	scanf("%lf%lf", &sales_tax_rate, &item_cost);

	total_sales_tax = sales_tax_rate * item_cost;
	// Display result
	printf("Total Sales Tax = sales_tax_rate*item_cost =%lf*%lf =%lf\n", sales_tax_rate, item_cost, total_sales_tax);


	/*
		3. Volume of a right rectangular pyramid: volume_pyramid = (l * w * h) / 3, where
		l and w are the length and width of the base, respectively, and h is the height
		of the pyramid.
	*/

	// Declare required variables
	double volume_pyramid, l, w, h;

	printf("Enter length, width, height of a rectangular pyramid ");
	// Retrieve values and assign them to variables
	scanf("%lf%lf%lf", &l, &w, &h);

	volume_pyramid = (l * w * h) / 3;
	// Display result
	printf("Pyramid Volume =(l*w*h)/3 =(%lf*%lf*%lf)/3 %lf\n", l, w, h, volume_pyramid);


	/*
		4. Total parallel resistance: parallel_resistance = 1 / (1 / R1 + 1 / R2 + 1 / R3),
		for 3 resistors. R1, R2, and R3 are integers
	*/

	// Declare required variables
	double parallel_resistance;

	printf("Enter parallel resistor values for R1, R2, and R3: ");
	// Retrieve values and assign them to variables
	scanf("%d%d%d", &r1, &r2, &r3);


	parallel_resistance = 1 / (1 / (double)r1 + 1 / (double)r2 + 1 / (double)r3);
	// Display result
	printf("Parrallel resistance =1/(1/R1+1/R2+1/R3) =1/(1/%d+1/%d+1/%d) %lf ohms\n", r1, r2, r3, parallel_resistance);


	/*
		5. Character encoding: encoded_character = (plaintext_character – 'a') + 'A' –
		shift_int; shift_int is an integer (note: what happens if plaintext_character is
		lowercase? What happens with various shift_int values? Please use the ASCII
		table to help you understand how to interpret the encoded character
		produced.)
	*/

	// Declare required variables
	char encoded_character, plaintext_character;
	int shift_int;

	printf("Enter plaintext character and shift integer: ");
	// Retrieve values and assign them to variables
	scanf("%c%d", &plaintext_character, &shift_int);

	encoded_character = (plaintext_character - 'a') + 'A' - shift_int;
	//Display results
	printf("Encoded Character =(plaintext_character-'a')+'A'-shift_int =(%c-'a')+'A'-%d  =%c\n", plaintext_character, shift_int, encoded_character);


	/*
		6. Distance between two points: distance = square root of ((x1 - x2)2 + (y1 - y2)2)
		(note: you will need to use sqrt ( ) out of <math.h>)
	*/

	// Delcare required variables
	double x1, x2, y1, y2, distance;

	printf("Enter (x1,y1) and (x2,y2): ");
	// Retrieve values and assign them to variables
	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	// Display the Result
	printf("Distance between (%lf,%lf) and (%lf,%lf) =sqr((x1-x2)^2)+(y1-y2)^2) =sqr((%lf-%lf)^2)+(%lf-%lf)^2) =%lf\n", x1, y1, x2, y2, x1, y1, x2, y2, distance);


	/*
		7. General equation: y = y / (3/17) - z + x / (a % 2) + PI (recall: a is an integer;
		the 3 and 17 constants in the equation should be left as integers initially, but
		explicitly type-casted as floating-point values)
	*/

	// Declare required variables
	double y, z, x, result;
	int a;

	printf("Solving y/(3/17)-z+x/(a%2)+PI, enter y, z, x, and a: ");
	// Retrieve values and assign them to variables
	scanf("%lf%lf%lf%d", &y, &z, &x, &a);

	result = y / ((double)3 / (double)17) - z + x / (a % 2) + PI;
	// Display the Result
	printf("Result =y/(3/17)-z+x/(a\%2)+PI =%lf/(3/17)-%lf+%lf/(%d\%2)+PI =%lf\n", y, z, x, a, result);


	// Return with program status 0
	return 0;
}