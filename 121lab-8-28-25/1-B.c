#include <stdio.h>
#define PI 3.141592635

int asdf(){
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

	int result = 3 * a*pow(x, 3) + (float)(1 / 4) * b* pow(x, 2) + 10 * c * x + (-5) * d;

	printf("Result %d \n", result);

	printf("Circle Calc\n");
	float radius;
	printf("Radius: ");
	scanf("%f", &radius);
	printf("Circumfrance %f", 2 * PI * radius);






	return 0;
}