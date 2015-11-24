//----------------------FUNCTION-------------lab7bf
#include <stdio.h>
#include "lab7b.h"
#include <stdlib.h>
#include <string.h>
//for(i=0; i<strlen(s); i++)
void reverse(char* str)
{

/*{
  int num=0;
  int i=strlen(str);
  char klam[i];
  for (i=0;i>=strlen(str);i--)
  {
    klam[num]=str[i-1];
     num++;
  }
*/
  	int tol = strlen(str);
	int i; 
	char klam;
	for (i=0; i<tol/2;i++)
	{	
	klam = str[0+i];
	str[0+i] = str[tol-1-i];
	str[tol-1-i] = klam;
	}

}
//search, replace
int replace(char first, char second, char* s)
{	
	int num=0;
	int i; 
	
	for(i=0; i<strlen(s); i++)
	{
        if(s[i]==first)
		{
        	s[i]=second;
        	num++;
		}
	}
	return num;
}
//str1.str2
void sysOut(char *s, char *ss)
{
	int num;
	printf("First string is %s.\n",s);
        printf("Second string is %s.\n", ss);

        if(strcmp(s, ss)==0)
	{
        printf("first string is equal to the second.\n");
        }
        else
	{
        printf("the two strings are not equal.\n");
        }
        num = replace(ss[strlen(ss-1)], 'X', ss);
        printf("Replaced str2 is: %s \n", ss);
        printf("the number of changes is: %d \n ", num);
        reverse(ss);
        printf("New str2 is: %s \n", ss);
}
