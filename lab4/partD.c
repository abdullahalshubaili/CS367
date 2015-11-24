
/*
	rtD.c: this program print ascii values along with their 
        corresponding ascii character.

        Oct 30, 2015: created by Abdullah Alshubaili

*/

#include <stdio.h>
#define min 32
#define max 126

int main (int argc, char* atgv[])
{
        int i;
 
        for (i = min; i<=max; i++)
        {
        printf("%d   <%c> \n", i, i);
        }
        return 0;
}
