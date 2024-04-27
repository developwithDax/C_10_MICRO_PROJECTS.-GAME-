// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int random,guess;
  int no_of_guess=0;
  srand(time(NULL));
  
  printf("Welcome to the world of Guessing Number\n");
  random = rand() % 100 + 1;
  do
  {
   printf("\n Please enter your Guess between (1 to 100):");
   scanf("%d",&guess);
   no_of_guess++;
   
   if(guess < random)
   {
       printf("Guess a larger number.\n");
   }
   else if(guess > random)
   {
       printf("Guess a smaller Number.\n");
   }
   else
   {
       printf("congratulations !!! you have successfully guess the Number in %d attemps",no_of_guess);
   }
  }while(guess != random);
  
  printf("\n Bye Bye , Thanks for Playing.");
  printf("\n Develop by: DAX PATEL.");
}