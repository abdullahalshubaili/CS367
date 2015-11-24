/* 
	file: lab6b.c is the main for lab6b which taketakes two integer form the use ...

	Nov 13, 15: created by Abdullah Alshubaili
*/
#include <stdio.h>
#include "lab6bfunc.h" //i get werid error when  include this

int doit(int *x, int y)
{
	if ((*x)>y)
	{ (*x) = y;
	return 1; }
	return 0;
}
/*
void doitt(int z)
{
	int *x = &z;
	//printf(xp = x)
 
}
*/
int main (int argc, char* argv[])
{
	int x= 0;
	printf("Enter a value: "); 
	
	while (!scanf("%d",&x)) // check user input for valid input
	{
	scanf("%*s"); //chech it string then output ERROR
	printf("ERROR enter a number: ");
	}
	
	int xp=0;
	printf("Enter a maximum value: ");
	while (!scanf("%d", &xp))
	{
	scanf("%*s");
	printf("ERROR enter max '*value' in numbers please: ");
	}
	
	
	if(doit(&x, xp)) printf("Value you entered %d is changed to the maximum allowable value:  %d.\n", x, xp);
	else printf("No change in the value that was input %d \n", x);
	return 0;

}
