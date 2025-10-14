////Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include <stdio.h>
int main(){
    int p;
    printf("Enter Principle Amount:");
    scanf("%d",&p);
    int r;
    printf("Enter Rate:");
    scanf("%d",&r);
    int t;
    printf("Enter Time:");
    scanf("%d",&t);

  int si;
    si= p*r*t /100;
  

 float ci; 
  ci = p;  
    for(int i = 0; i < t; i++) {
        ci = ci + (ci * r / 100);  
    }
    ci = ci - p; 
    printf("Simple Interest:%d\n Compound Interest:%f \n",si,ci);
    return 0; 
    
}

