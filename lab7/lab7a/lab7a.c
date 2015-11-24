/*
	file:lab7a.c this program calcuate the avarege of student grades
	Nov 20, 2015: created by Abdullah Alshubaili

*/
#include <stdio.h>
#include <stdlib.h>
#include "lab7a.h"

int main (int argc, char* argv[])
{
   	if (argc==1)
	{
	fprintf(stderr, "usage: %s grade\n", argv[0]);
	exit(1);
	}
	
    float entry[100];
	int i=0;
	float a;
	for(i=0; i<argc-1; i++)
	{
		entry[i]=convert(argv[argc-1-i]);
	}

	a = average(entry, i);
	printf("the average is : %f.\n",a);
   return 0;

} // main
