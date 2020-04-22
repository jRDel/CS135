//This program is a calculator! It allows the user to choose a binary arithmetic operation and enter two terms to which to apply the operation. The program computes the result and displays it to the user.

#include<stdio.h>

int main()
{

int input;
int toggle=1; /*This toggle option allows for switching between int and double precision mode.*/
double term1,term2;
printf("The program implements a calculator.\n");
while(input!=6){
printf("Options:\n");
printf("1 - addition\n");
printf("2 - subtraction\n");
printf("3 - multiplication\n");
printf("4 - division\n");
printf("5 - toggle calculator type\n");
printf("6 - exit program\n");
printf("Please enter your option:");
scanf("%d",&input);	

	switch(input) /*The switch statement here is what allows the program to read user input, then perform that option embedded within each case.*/
	
	case 1:
	printf("Enter first term:");
	scanf("%lf",&term1);
	printf("Enter second term:");
	scanf("%lf",&term2);
	printf("The sum is: %.15lf\n", term1+term2);
	break;
	
	case 2:
	printf("Enter first term:");
	scanf("%lf",&term1);
	printf("Enter second term:");
	scanf("%lf",&term2);
	printf("The difference is: %.15lf\n", term1-term2);
	break;

	case 3:
	printf("Enter first term:");
	scanf("%lf",&term1);
	printf("Enter second term:");
	scanf("%lf",&term2);
	printf("The product is: %.15lf\n", term1*term2);
	break;

	case 4:
	printf("Enter first term:");
	scanf("%lf",&term1);
	printf("Enter second term:");
	scanf("%lf",&term2);
	if(term2==0){
	printf("Cannot divide by zero!");
	break;	
	}
	printf("The quotient is: %.15lf\n", term1/term2);
	
	break;

	case 5: /*Toggle by default is 1, so the case here goes to the else automatically and decrements toggle to 0. Then, the case has another while and switch loop within it which 											can print integers instead of doubles.*/
	if(toggle<=0){
	printf("Calculator now works with doubles.\n");
	toggle++;
	double term1,term2;
	}
	else{
	printf("Calculator now works with integers.\n");
	toggle--;
	int term1,term2;
		while(input!=6&&toggle!=1){ /*This while loop continues as long as the user does not exit, and the toggle does not equal 1. In integer mode, the toggle is defaulted 							to 0 by the else statement above.*/
		printf("Options:\n");
		printf("1 - addition\n");
		printf("2 - subtraction\n");
		printf("3 - multiplication\n");
		printf("4 - division\n");
		printf("5 - toggle calculator type\n");
		printf("6 - exit program\n");
		printf("Please enter your option:");
		scanf("%d",&input);	
		int term1, term2;		
		switch(input){	
			case 1:
			printf("Enter first term:");
			scanf("%d",&term1);
			printf("Enter second term:");
			scanf("%d",&term2);
			printf("The sum is: %d\n", term1+term2);
			break;
			
			case 2:
			printf("Enter first term:");
			scanf("%d",&term1);
			printf("Enter second term:");
			scanf("%d",&term2);
			printf("The difference is: %d\n", term1-term2);
			break;

			case 3:
			printf("Enter first term:");
			scanf("%d",&term1);
			printf("Enter second term:");
			scanf("%d",&term2);
			printf("The product is: %d\n", term1*term2);
			break;

			case 4:
			printf("Enter first term:");
			scanf("%d",&term1);
			printf("Enter second term:");
			scanf("%d",&term2);
			if(term2==0){
			printf("Cannot divide by zero!");
			break;			
			}
			printf("The quotient is: %d\n", term1/term2);
			break;
			case 5:
			if(toggle<=0){
			printf("Calculator now works with doubles.\n"); /*The toggle right now is at 0, which executes this if statement, making the toggle 1, changing the terms to 					doubles, and breaks out of this switch statement. Then, the while loop for integers reads the toggle as 1, then exits to once again be in the doubles 					while loop.*/
			toggle++;
			double term1,term2;
			break;
			default:
			if(input!=6&&input!=5&&input!=4&&input!=3&&input!=2&&input!=1){
			printf("Invalid option.\n");			
			}			
			break;		
			}
		
			}
	
	
	
		}
	}
	break;
	default:
	if(input!=6&&input!=5&&input!=4&&input!=3&&input!=2&&input!=1){
	printf("Invalid option.\n");
	}
	break;
	}
}
return 0;
}

