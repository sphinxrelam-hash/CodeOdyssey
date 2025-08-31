#include <stdio.h>
int main(){
    float cel;
    printf("Enter The Temp in Celsius :");
    scanf("%f",&cel);

    float fer;
     fer= cel*(1.8)+32;

     printf("Temperature in Fahrenheit:%f\n",fer);

     return 0;
}