#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 10
#define SIZE2 40

int main (int argc, char *argv[])
{

  char input[SIZE2];
  char name[SIZE];
  int age;
  float rate;
  char resu[SIZE2];


  printf ("Enter name, age and rate (or \"exit\"): ");
  fgets (input, 40, stdin);
  while (strcmp(input, "exit\n"))
    {
      //output original input using two functions.
      printf ("%s", input);	// no \n needed
      fputs (input, stdout);
      sscanf (input, "%s %d %f", name, &age, &rate);
      name[0] -= 32;
      age += 10;
      rate *= 2;
      sprintf (resu, "%s-%d-%0.3f-[%d,%d]\n\n", name, age, rate, (int)floor(rate), (int)ceil(rate));
      fputs (resu, stdout);


      /* use fgets to read again */

      printf ("Enter name, age and rate (or \"exit\"): ");
      fgets (input, 40, stdin);
    }
  return 0;

}
