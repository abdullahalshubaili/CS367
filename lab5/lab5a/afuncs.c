/* 
        lab5partAfun.c :C program that calculates and 
        the volume and surface area of a sphere.

        Nov 8, 2015: created by Abdullah Alshubaili
*/
#include <stdio.h>
#include <math.h>
#include "afuncs.h" 



float volume( float r)
{
        return (4 / 3) * pi * pow(r,3) ;
}// volume

float surface(float r)
{
         return  4 * pi * pow(r,2) ;
}//surface

