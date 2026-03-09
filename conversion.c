/* The distance between two cities (in kilometers) is input through the 
keyboard. Write a program to convert and print this distance in meters, 
feet, inches and centimeters.*/
#include <stdio.h>

void main()
{
   float distanceinkm, dinm, dinfeet,dininches, dincm;
   
   printf("ENTER DISTANCE IN KM");
   scanf("%f",&distanceinkm);
   
   dinm=distanceinkm*1000;
   printf("Distance in meters %f", dinm);
   
   dinfeet=dinm*3.28084;
   printf("\nDistance in feet %f",dinfeet);
   
   dininches=dinm*39.37008;
   printf("\nDistance in inches %f",dininches);
   
   dincm=dinm*100;
   printf("\nDistance in cm %f",dincm);
}
