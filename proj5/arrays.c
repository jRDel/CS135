//This program asks the user to enter an NxM dimensional array containing single digit values(only the digits between 0 and 9) and counts the number of times each one of the 10 digits appears in the array.

#include <stdio.h>

int main()
{

int sizerow, sizecolumn;

int countarray[10]={0};
printf("This program counts occurrences of digits 0 through 9 in an NxM array.\n");
printf("Enter the size of the array (Row Column):");
scanf("%d", &sizerow);
scanf("%d", &sizecolumn);
int array[sizerow][sizecolumn];
for(int realsizerow=0; realsizerow<sizerow; realsizerow++){ /*This section of code is for the user input, where the loop reads into a number at array[0][0] and so on incrementing each value to store it at that spot. It will continue to read 6 integers per row, based on the example problem if the user inputs 2 6.*/
printf("Enter row %d:", 0+realsizerow);	
	for(int realsizecol=0; realsizecol<sizecolumn; realsizecol++){
	scanf("%d", &array[realsizerow][realsizecol]);
	}
}

for(int realsizerow=0; realsizerow<sizerow; realsizerow++){ /*This section of code is for counting the number of times each digit appears in the original array, with countarray that has only 10 values, 0-9. For example, if array[0][0] happened to be 5, then countarray[5] would be incremented to 1, meaning digit 5 appeared one time so far.*/
	for(int realsizecol=0; realsizecol<sizecolumn; realsizecol++){
	countarray[array[realsizerow][realsizecol]]++;
	}
}

for(int index=0; index<10; index++){
printf("Digit %d occurs %d times\n", index, countarray[index]); /*This counts 0-9 with index, then prints countarray[index]. For example, if index is at 5, then the next %d will print countarray[5], or how many times digit 5 appeared in the 2D array above.*/
}

printf("The digit counts directly from the 1D array:\n");
for(int index=0; index<10; index++){ /*This performs the same function as the above array.*/
printf("%d ", countarray[index]);
}

printf("\n");
printf("The original 2D array entered by the user:\n"); /*This prints the array that was filled in the first for loop.*/
for(int realsizerow=0; realsizerow<sizerow; realsizerow++){
	for(int realsizecol=0; realsizecol<sizecolumn; realsizecol++){
	printf("%d ", array[realsizerow][realsizecol]);
	}
printf("\n");
}

return 0;
}









	
