// -----------------MAIN-----------lab7b
#include <stdio.h>
#include "lab7b.h"
#include <stdlib.h>
int main(int argc, char* argv[])
{
	int i;

	if (argc <=2) {
	fprintf(stderr, "Error: please enter more strings\n");
	exit(1);
	}//if
	
	char* ks = argv[1];
	char* cs;

	for (i=argc-1; i>1;i--)
	{
	cs = argv[i];
	sysOut(ks,cs);
	}
	return 0;
} // main

