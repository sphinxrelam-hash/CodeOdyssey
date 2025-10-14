///Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/


#include <stdio.h>
int main(){
    int s;
    printf("Enter time in Seconds:");
    scanf("%d",&s);

    int hr ;
    hr= s/3600;

    int min;
    min= (s%3600)/60; 

    int sec;
    sec= s%60;

    printf("%d:%d:%d",hr,min,sec);
    return 0;


}