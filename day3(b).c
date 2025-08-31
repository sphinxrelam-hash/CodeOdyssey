///Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main(){
    int x,y,var;
    printf("Enter  Number:");
    scanf("%d %d",&x ,&y);
    

    var=x;
    x=y;
    y=var;

    printf("After swap:%d %d\n",x,y);

    return 0;


}
