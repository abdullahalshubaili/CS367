//abdullah alshubaili

#include "lab8.h"
#define Error 0
#define Correct 1
void print_car(Car *car)
{
	printf("car model: %s year make: %d rental rate: %.2f$\n",car->car_model,car->year,car->rental_rate);
}
	
	int input_car(Car *car){
	car->car_model=(char*)malloc(50);
	scanf("%s",car->car_model);
	scanf("%d",&car->year);
	scanf("%f",&car->rental_rate);
	if(car!=NULL){
		return Correct;
	}
	return Error;
}
int fill_cars(Car *car,int count){
	int i;
	int retCode;
	if(car==NULL){
		printf("Empty array\n");
	}
	for(i=0;i<count;i++){
		retCode=input_car((car+i));
		if(retCode==Error){
			return Error;
		}
	}
	return Correct;
}

void systemout_rental_rate(Car *cars,int count,float rental_rate){
  int i;
	Car *car=cars;
	for(i=0;i<count;i++){
	  //if(car->rental_rate >= 0){
		print_car(car);		
		//}
	car=(car+1);
	}
}

void free_cars(Car *cars,int count){
	int i;	
	for(i=0;i<count;i++){
		free((cars+i)->car_model);
		free(cars+i);
		
	     	}
}

