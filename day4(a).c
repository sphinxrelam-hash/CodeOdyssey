///Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/


<<<<<<< HEAD



=======
>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6
#include <stdio.h>
int main(){
    int a , b;
    printf("Enter Numbers:");
    scanf("%d%d",&a,&b);
    a=a-b;
    b=a+b;
    a=b-a;

    printf("After Swapping: %d %d",a,b);
    return 0;
}
