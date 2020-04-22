// This program asks the user for the radii of two circles inscribed in a rectangle. Then, it prints out values such as the diameter of a circle, circumfrence, total area of circles, etc.

#include <stdio.h>
#define pi 3.14f
int main()
{
int radii, diameter, rectperim, rectarea;
float circumference, areacirc, diffarea;
printf("This program computes values related to circles inscribed in a rectangle.\n");
printf("Enter the value of the radii of the two circles:\n");
scanf("%d",&radii);
diameter=radii*2;
rectperim=((diameter*2)*2)+(diameter*2); /*The first diameter times two, times two is to calculate the top and bottom sides of the rectangle. The second diameter times two is to calculate the left and right sides of the rectangle.*/
rectarea=diameter*(diameter*2); /*The first diameter is the side of the rectangle, the second diameter times two is representative of the top or bottom of the rectangle.*/
circumference=2*pi*radii;
areacirc=2*(pi*radii*radii); /*Equivalent to formula for the area of a circle, pi*r^2. Multiply by two to account for two circles being inscribed in the rectangle, rather than one.*/
diffarea=rectarea-areacirc;
printf("The perimeter of the rectangle is: %d\n", rectperim);
printf("The area of the rectangle is: %d\n", rectarea);
printf("The diameter of a circle is: %d\n", diameter);
printf("The circumference of a circle: %.3f\n", circumference);
printf("The total area of the circles is: %.3f\n", areacirc);
printf("The difference between the area of the rectangle and the total area of the circles is: %.3f\n", diffarea);
return 0;
}

