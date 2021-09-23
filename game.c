/*
    problem:
     we will create a program that generates a random number
     and asks the player to guess it. if the player's guess
     is higher than the actual number, the program displays
     "enter a lower number". similarly if the user guess is
     too low, the program prints "enter a higher number".

     when the user guesses the correct number the program
     displays the number of guesses the player used to get
     to the number.
*/

#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 

int main(){ 

     int number, guess, nguess=1;
     srand(time(0));
     number=rand()%100 + 1; 
     // generates a random number between 1 and 100
     // printf("the number is %d", number);
     // keep running the loop until the number is guessed

     do {
         printf("guess a number between 1 and 100\n");
         scanf("%d", &guess);
         if (guess>number){
             printf("enter a lower number\n");
         }
         else if (guess<number){
             printf("enter a higher number\n");
         }
         else {
             printf("your guess is correct in %d attempts\n", nguess);
         }
         nguess++;
     } while (guess!=number);
     return 0;
}