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

// not finished with the while condition;
void my_strcat(char a[], char b[]);
int main(){
   char a[SIZE];
   char b[SIZE];
   char c[SIZE];
   char d[SIZE];

   scanf("%s",a);
   scanf("%s",b);
   while (strcmp(a, "xxx") || strcmp(b, "xxx")){
    
      strcpy(c,a); strcpy(d,b);
      strcat(a,b);
      my_strcat(c,d);
      
      printf("strcat:   %s\n", a); 
      printf("mystrcat: %s\n\n", c);

       scanf("%s",a);
       scanf("%s",b);
 
   }
}


void my_strcat(char a[], char b[]){
    int m=strlen(a);
    int n=strlen(b);
    int i;
    for(i = 0; i <= n; i++){
        
        a[i + m]=b[i];
        
    }


}


