#include <stdio.h>
int main(){
   float radius, area, circumference;
   float pi = 3.14;
   
   printf("Enter radius: ");
   scanf("%f", &radius);
   
   area = pi * radius * radius;          // Formula: πr²
   circumference = 2 * pi * radius;      // Formula: 2πr
   
   printf("Area = %.2f\n", area);
   printf("Circumference = %.2f\n", circumference);
   
   return 0;
}

