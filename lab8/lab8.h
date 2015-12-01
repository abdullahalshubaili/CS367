//abdullah alshubaili
#ifndef LAB8_H
#define LAB8_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Error 0
#define Correct 1
typedef struct Record{
	char *car_model;
	int year;
	float rental_rate;
}Car;

void print_car(Car *car);
int input_car(Car *car);
int fill_cars(Car *car,int count);
void systemout_rental_rate(Car *cars,int count,float rental_rate);
void free_cars(Car *cars,int count);
#endif
