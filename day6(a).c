///Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/


#include <stdio.h>
int main(){
    int x;
    printf("Enter Number:");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("Number is Even");
    }
    else{
        printf("Number is Odd");
    }
        
    return 0;
}