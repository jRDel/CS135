//This program asks the user to input an integer, then completes a mathematical series.

#include <stdio.h>

int main()
{
int input, sum, value;
printf("Enter an integer number:");
scanf("%d", &input);
sum=0;
for(value=1; value<=input; value++){ /*This for statement sets value as 1, then continues to loop until value is no longer lesser than or equal to the user input. With each loop, the value is incremented by one.*/
	if(value%2>0){
	sum=(value*value)+sum; /*This embedded if else statement changes the sum based on the mathematical equation we were given. If the value is odd, then it will be added to the overall sum with a positive sign, while if the value is even, it will be added to the sum with a negative sign. These values are also squared when added, or subtracted from the sum.*/
	}	
	else{
	sum=-(value*value)+sum;
	}
}
printf("The value of the series is: %d\n", sum);
return 0;
}


