/***************************************
* EECS2031M – Lab4 *
* Author: Pan, Ziyi *
* Email: pppanziyi@gmail.com*
* eecs_username: stevenpa *
* York num: 215485188 *
***************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define ROWS 20
#define COLUMNS 30

int main(int argc, char *argv[])
{
    char input_table[ROWS][COLUMNS];
    
    char name[10];
    char ageS[10];
    char rateS[10];
    char row[30];
    int current_row = 0;
	int x; float f;
    
     printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);   // add a /n
	 
     while(strcmp(name, "xxx"))        
     {    
	 /* need to 'tokenize' the current input */	    
	 sscanf(input_table[current_row]," %s %s %s", name , ageS, rateS);
	 int checked = 0;
	  char upper[10] = {0};
	  char character;
	  while(name[checked]){
	      character = name[checked];
	     
	      upper[checked]= toupper(character);
	      check++;
	  }
	 
         x = 10 + atoi(ageS);
         f += 1.5 * (float)atof(rateS);
		
	  
	 sprintf(row, "%s %d %0.2f\n",upper, x, f);
	 sprintf(input_table[current_row],row);
	 
	 current_row++;

        // read again
        printf("Enter name age and rate: ");
     fgets(input_table[current_row], 30, stdin);
     sscanf(input_table[current_row],"%s %s %s", name, ageS, rateS);
     }

     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__);
     /* now display the input_table row by row */
	  int i;
	  for(i = 0; i < current_row; i++){
	      fputs(input_table[i],stdout);
	      
	  }

     return 0;
}
