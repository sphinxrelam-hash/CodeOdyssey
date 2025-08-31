///Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

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
