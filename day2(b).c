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