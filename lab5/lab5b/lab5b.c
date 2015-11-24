/*
	lab5b.c: this program print ascii values along with their 
        corresponding ascii character from user input.

	Nov 8, 2015: created by Abdullah Alshubaili
*/

#include <stdio.h>
#include "lab5bfunc.h"

int main (int argc, char* argv[])
{
	int wrong, max, min, i;
	do {
        printf("Enter a maximum number that don't exceed 126: ");
        scanf("%d",&max);
//        printf("%d   <%c> \n",max, max);
        if (max > maximum || max < minimum || max > 32)
        {
	wrong=1;
	}//if

	if  (max > maximum || max < minimum) printf("Error: enter number between 32 and 126. ");
        
        else {wrong = 0;}
	}while (wrong);
	
	do {
        printf("Enter a minimum number that don't go below 32: ");
        scanf("%d",&min);
//        printf("%d   <%c> \n",min, min); 

        if (min < minimum || min > maximum)
        {
	wrong =1;
	}//if

        if (min < minimum || min > maximum) printf("ERROR enter number between 32 and 126. ");
	else {wrong =0;}
	}while (wrong);
	
	/* do {//which is bigger
	printf("please enter minimum number than the maximum number you entered "); //for max
	scanf("%d",&min);
	if (min < 126)
	{
	wrong =1;
	}//if
	
	else {wrong =0;}
	}while (wrong);
*/	
	max = maximu(max);
	min = minimu(min);

        for (i = min; i<=max; i++)
        {
        printf(" %d   <%c> \n", i ,i);
        }
        return 0;
}//main

