/* 
	file: lab6bfunc.c is the finction for lab6b.c
	
	Nov 13, 15: creaded by Abdullah Alshubaili
*/

#include <stdio.h>
#include "lab6bfunc.h"
int doit(int *x, int y)
{

        if ((*x)>y)
        { (*x) = y;
        return 1; }
        return 0;

}	

