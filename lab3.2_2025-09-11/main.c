#include "flighttime.h"


int main(void) {

	double time, height, velocity, theta, distance;

	theta = get_theta();
	distance = get_distance();
	velocity = get_velocity();

	time = calculate_time(distance, velocity, theta);
	height = calculate_height(velocity, theta, time);

	print_results(time, height);

}