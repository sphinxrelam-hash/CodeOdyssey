///Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/


#include <stdio.h>
int main(){
    int x;
    printf("Enter First Number:");
    scanf("%d",&x);
    int y;
     printf("Enter Second Number:");
    scanf("%d",&y);
    int sum = x+y;
    printf("The sum is: %d", sum);

    return 0;

}
