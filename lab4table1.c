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
    char inputs_table [ROWS][COLUMNS];
    char name[10]; char ageS[10]; char rateS[10];
     
    int x; float f;
	int count = 0;
    
    printf("Enter name age and rate: ");
    scanf("%s %s %s", name, ageS, rateS); 
       
    while (strcmp(name, "xxx"))
    {  
	   sprintf(inputs_table[count],"Row[%d]: %s %s %s\n", count, name, ageS, rateS);
	  count++;
	  int checked = 0;
	  char upper[10] = {0};
	  char character;
	  while(name[checked]){
	      character = name[checked];
	     
	      upper[checked] = toupper(character);
	      checked++;
	  }
        
		x = 10 + atoi(ageS);
		f+=1.5*(float)atof(rateS);
		
	   sprintf(inputs_table[count],"Row[%d]: %s %d %0.2f\n", count, upper, x, f);
	   count++;
	
          

       /* read again using scanf(%s %s %s) */ 
    
        printf("Enter name age and rate: ");
        scanf("%s %s %s", name, ageS, rateS);
    
    }
    
     printf("\nRecords generated in %s on %s %s\n", __FILE__, __DATE__, __TIME__); 
    
    /* now display the input_table row by row */   
    int i;
    for(i = 0; i < count; i++){
    fputs(inputs_table[i], stdout);
        
    }

     return 0;
}
