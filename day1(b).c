





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
