//This program converts input of four times from the user in the format h:m:s and prints them out in a tabular format.

#include <stdio.h>

int main()
{
int hone, htwo, hthree, hfour, mone, mtwo, mthree, mfour, sone, stwo, sthree, sfour; /*Declares all variables that will be used*/
printf("Enter time 1 (h:m:s):\n");
scanf("%d:%d:%d", &hone, &mone, &sone);
printf("Enter time 2 (h:m:s):\n");
scanf("%d:%d:%d", &htwo, &mtwo, &stwo);
printf("Enter time 3 (h:m:s):\n");
scanf("%d:%d:%d", &hthree, &mthree, &sthree);
printf("Enter time 4 (h:m:s):\n");
scanf("%d:%d:%d", &hfour, &mfour, &sfour);

printf("Hours\tMinutes\tSeconds\n"); /*The following printf statements set a width for each variable that will be printed as well as left or right justified.*/
printf("%-5d\t%4d\t%7d\t\n", hone, mone, sone);
printf("%-5d\t%4d\t%7d\t\n", htwo, mtwo, stwo);
printf("%-5d\t%4d\t%7d\t\n", hthree, mthree, sthree);
printf("%-5d\t%4d\t%7d\t\n", hfour, mfour, sfour);
return 0;
}
