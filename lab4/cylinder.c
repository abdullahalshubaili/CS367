/* 
	cylinder.c: calculate a given height and raduis of
	a cylinder surface area and volume.  
	
	Oct 29, 2015: created by Abdullah Alshubaili
*/

#include <stdio.h>
#define pi 3.1415926
int main (int argc, char* argv[])
{
	double h = 5.77;
	double r = 6.1;
	double s, v;
	
	s = (r+h) * 2 * pi * r;
	v = pi * r * r * h;

	

	printf("The raduis is %.3f, the height of the cylinder is %.3f, the surface area of the cylinder is %.3f\n and the valume of the cylinder is %.3f\n\n ", r,  h, s, v);
	
	if (r > h)
	printf("The raduis %.1f is larger than height %.1f\n", r, h);
	
	if (h > r)
	printf("The height %.1f is larger than raduis %.1f\n", h, r);

	return 0;
	

} // main
	
