//This program repeatedly asks the user to enter information regarding inventory for a business (item part number, quantity, price) and then saves the information to a file called inventory.txt.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

int partnum, quantity;
float price;

FILE *fp;

fp=fopen("inventory.txt", "w");

printf("This program stores a business inventory.\n");

while(partnum!=0){
printf("Please enter item data (part number, quantity, price):");
scanf("%d, %d, %f", &partnum, &quantity, &price);

	if(partnum!=0){
	fprintf(fp, "%d, %d, %f\n", partnum, quantity, price);
	}

}

printf("Thank you. Inventory stored in file inventory.txt.\n");

return 0;
}



