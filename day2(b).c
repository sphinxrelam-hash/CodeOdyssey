<<<<<<< HEAD
////q4: Write a program to calculate the area and circumference of a circle given its radius.
=======
///Q4: Write a program to calculate the area and circumference of a circle given its radius.
>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include <stdio.h>
int main(){
    float rad;
    printf("Enetr Radius:");
    scanf("%f",&rad);
    
    float are= 3.14*rad*rad;
    float cer= 2*3.14*rad;

    printf("Area of the circle:%f\n",are);
    printf("Circumference of the Cirlce :%f\n",cer);

    return 0;
}
