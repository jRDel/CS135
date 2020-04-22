//This program reads information from inventory.txt, and displays it to the screen.

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

int partnum, quantity;
float price;

FILE *fp;

fp=fopen("inventory.txt", "r");

printf("Below are the items in your inventory.\n");
printf("Part#\tQuantity\tItem Price\n");

while(fscanf(fp, "%d, %d, %f", &partnum, &quantity, &price)!=EOF){
printf("%5d\t%8d\t$%9.2f\n", partnum, quantity, price);
}

return 0;

}
