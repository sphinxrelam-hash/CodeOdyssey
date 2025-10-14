<<<<<<< HEAD
/////Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
=======
///Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/



<<<<<<< HEAD
=======


>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6
#include <stdio.h>
int main(){

    int x;
    printf("Enter first Number :");
    scanf("%d",&x);
    int y;
    printf("Enter Second Number :");
    scanf("%d",&y);

    int sum = x+y;
    int diff= x-y;
    int prod=x*y;
    
     printf("Sum:%d\n",sum);
     printf("Diff:%d\n",diff);
     printf("Product:%d\n",prod);
    int Quot;
      

     if (y==0)
     {
         printf("Quotient: NOT DEFINED(cannot divide by 0)\n");
     }
     else{
        Quot=x / y;
        printf("Quotient:%d\n",Quot);
     }
     

 return 0;
}
