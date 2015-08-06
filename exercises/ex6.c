#include <stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'L';
	char first_name[] = "Jeronimo";
	char last_name[] = "Osorio";

	printf("You are %d kms away.\n", distance);
	printf("You have %f levels of power.\n", power);
	printf("You have %f awesome super powers.\n", super_power);
	printf("I have an initial of %c.\n", initial);
	printf("My first name is %s.\n", first_name);
	printf("My last name is %s.\n", last_name);
	printf("My whole name is %s %s\n", 
			first_name, last_name);

	return 0;
}