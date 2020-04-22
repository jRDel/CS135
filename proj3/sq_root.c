//This program guesses the square root of a number input by the user.

#include <stdio.h>
#include <math.h>
int main(){
double input, guess;

printf("Enter a number:");
scanf("%lf", &input);
guess=1;
while(fabs(((guess*guess)-input))>=.00001){ /*This while statement is used to keep getting closer and closer until the real square root of a number, or it keeps looping until the absolute value of the program's guess squared, minus the input, is no longer within five decimal places (meaning more accurate).*/
printf("%10.5lf\n",guess);
guess=(guess+(input/guess))/2.0; /*Used as the means to make the guess smaller and more accurate towards the real square root.*/
}
printf("Estimated square root of %10.5lf: %10.5lf\n", input, guess);
return 0;
}

