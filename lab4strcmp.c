/***************************************
* EECS2031M – Lab4 *
* Author: Pan, Ziyi *
* Email: pppanziyi@gmail.com*
* eecs_username: stevenpa *
* York num: 215485188 *
***************************************/
#include<stdio.h>
#include<string.h>

#define SIZE 30

int main(){
       int resu, resu2;
   char a[SIZE];
   char b[SIZE];

   scanf("%s", a); 
   scanf("%s",b);
    
   while (strcmp(a, "xxx") || strcmp(b, "xxx")){
      int resu = strcmp(a,b); 
      if (resu < 0) printf("strcmp:   \"%s\" appears earlier in dictionary than \"%s\"\n", a,b);
      else if (resu > 0) printf("strcmp:   \"%s\" appears later in dictionary than \"%s\"\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n", a, b);
      
      int resu2 = my_strcmp(a,b);
      if (resu2 < 0) printf("mystrcmp: \"%s\" appears earlier in dictionary than \"%s\"\n\n", a,b);
      else if (resu2 > 0) printf("mystrcmp: \"%s\" appears later in dictionary than \"%s\"\n\n", a,b);
      else printf("\"%s\" and \"%s\" are same\n\n", a,b);

       scanf("%s", a);
       scanf("%s",b);

   }
}


int my_strcmp(char a[], char b[]){
    int i = 0;
    int check = 0;
    
    while(check == 0){
        if(a[i] < b[i])
            check = -1;
        if(a[i] > b[i])
            check = 1;
        if(a[i] == '\0')
        {break;}
        i++;
	}
    
    return check;

}
