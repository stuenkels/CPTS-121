#include <stdio.h>
#include <math.h>
#define PI 3.141592635




int main() {
	int number1_int = 0, number2_int = 0;
	double number1_float = 0.0, number2_float = 0.0;

	printf("Enter two integer values: "); // prompt/ask the user
	scanf("%d%d", &number1_int, &number2_int); // read the integers typed through the
	// keyboard - %d is for "decimal", i.e. integers
	printf("Enter two floating-point values: "); // prompt/ask the user
	scanf("%lf%lf", &number1_float, &number2_float); // read the integers typed through
	// the keyboard - %lf is for "long float", i.e.
	// double precision number

	printf("Result of int1 + int2 %d\n", number1_int + number2_int);
	printf("Result of float1 - float2 %f\n", number1_float - number2_float);
	printf("Result of int1 / int2 as int %d\n", number1_int / number2_int);
	printf("Result of int1 / int2 as float %f\n", (float)number1_int / (float)number2_int);
	printf("Result of int1 / float2 as int %d\n", number1_int / (int)number2_float);
	printf("Result of int1 / float2 as float %f\n", number1_int / number2_float);
	printf("Result of int1 casted as float / int2 as float %f\n", (float)number1_int / number2_int);
	printf("Result of float1 %% float 2, both casted as int %d\n", (int)number1_float % (int)number2_float);

	int number1_odd = number1_int % 2;
	int number2_odd = number2_int % 2;

	switch (number1_odd) {
	case 0:
		printf("Number 1 is even\n");
		break;
	case 1:
		printf("Number 1 is odd\n");
		break;
	default:
		break;
	}
	switch (number2_odd) {
	case 0:
		printf("Number 2 is even\n");
		break;
	case 1:
		printf("Number 2 is odd\n");
		break;
	default:
		break;
	}

	int v, i, r;

	printf("Ohms Law Calculator\n");
	printf("I: ");
	scanf("%d", &i);
	printf("R: ");
	scanf("%d", &r);

	printf("Voltage: %d\n", i * r);

	printf("Joule's Law Calculator\n");
	printf("V: ");
	scanf("%d", &v);
	printf("R: ");
	scanf("%d", &r);
	printf("Power: %d\n", pow(v, v) / r);

	printf("Polynomial: y = 3 * ax^3 + (1/4) * bx^2 + 10 * cx + (-5) *d\n");
	int x, y, a, b, c, d;
	printf("Enter in this order, X, A, B, C, D\n");
	scanf("%d", &x);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);

	int result = 3 * a * pow(x, 3) + (float)(1 / 4) * b * pow(x, 2) + 10 * c * x + (-5) * d;

	printf("Result %d \n", result);

	printf("Circle Calc\n");
	float radius;
	printf("Radius: ");
	scanf("%f", &radius);
	printf("Circumfrance %f", 2 * PI * radius);





	return 0;
}