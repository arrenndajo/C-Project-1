/*
     Problem:
     We will create a program that generates a random number
     and asks the player to guess it. If the player's guess
     is higher than the actual number, the program displays
     "Enter a lower number". Similarly if the user guess is
     too low, the program prints "Enter a higher number".

     When the user guesses the correct number the program
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
         printf("Guess a number between 1 and 100\n");
         scanf("%d", &guess);
         if (guess>number){
             printf("Enter a lower number\n");
         }
         else if (guess<number){
             printf("Enter a higher number\n");
         }
         else {
             printf("Congrats! Your guess is correct in %d attempts\n", nguess);
         }
         nguess++;
     } while (guess!=number);
     return 0;
}