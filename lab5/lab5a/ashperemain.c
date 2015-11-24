/*
	aspheremain.c: main program to test ashpere library
	
	Nov 8, 2015: crearted by Abdullah Alshubaili
*/

#include <stdio.h>
#include "afuncs.h"

int main (int argc, char* argv[])
{

	float r,s,v;
	int wrong;
	do
	{
	printf("Enter the the raduis for a aphere: ");
	scanf("%f", &r);
	
	if (r<0)
	{
		printf ("ERROR " );
		wrong = 1;
	}//if

	else
	{ 
	wrong = 0;
	}//else
	}  while (wrong); //end do

	v = volume(r);
	s = surface(r);

	printf("The  radius is  %.4f.\n", r);
	printf("The surface area is %.4f and volume is %.4f. \n",s,v);
	return 0;
}//main
