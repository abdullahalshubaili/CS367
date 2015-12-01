//abdullah alshubaili
//file:  lab8.c is program that reads list of cars  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lab8.h"
int main(int argc,char ** argv){
 	if(argc<=2){
	int count=0;	
	
	scanf("%d",&count);
	printf("Count: %d \n",count);

Car *cars;
cars=malloc((count)*sizeof(Car));

	float rent=atof(argv[1]);

	printf("Rental cost: %2.f$\n",rent);
	
	int code=fill_cars(cars,count);
	if(code==Correct){
	systemout_rental_rate(cars,count,rent);	
	}else{	
	printf("Error: Cannot read file correctly. Please be sure the file contains the given number of arrays");	
}
free_cars(cars,count);
	fclose(stdin);
	}
	else
	{
	printf("Error: Expected at least one argument found nothing\n");
	exit(1);
	}
	return 0;}

