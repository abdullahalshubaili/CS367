/*

	file: lab7af.c is the function for lab7a.c
	Nov 20, 2015: created  by Abdullah Alshunaili

*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lab7a.h"



float convert(char *str)
{
	float grade; 
	int num;
	num=sscanf(str, "%f", &grade); 
	if (!num || grade<0 || grade>10)
	{
		printf("Error: grade is not acceptable,bad input.\n");
		exit(1);
	}
	return grade;
}
float average(float *grade, int gradenumber)
{
 	int num =0;
	int i;
	float average;
	for ( i=0; i<gradenumber; i++)
	{
		average += grade[i];
	}
	average = average/gradenumber;
	return average;
}
	
