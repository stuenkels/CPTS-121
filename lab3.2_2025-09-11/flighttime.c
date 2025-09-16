#include "flighttime.h"


double get_theta() {
	double theta;
	printf("Theta: ");
	scanf(" %lf", &theta);
	return theta;
}

double get_distance() {
	double distance;
	printf("Distance: ");
	scanf(" %lf", &distance);
	return distance;
}

double get_velocity() {
	double velocity;
	printf("Velocity: ");
	scanf(" %lf", &velocity);
	return velocity;
}

void print_results(double time, double height) {
	printf("Object flew for %lf seconds and reached a height of %lf\n", time, height);
	return;
}

double calculate_time(double distance, double velocity, double theta) {
	return distance / (velocity * cos(theta));
}

double calculate_height(double velocity, double theta, double time) {
	return velocity * sin(theta) * time - ((G * pow(time, 2)) / 2);
}
