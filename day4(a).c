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