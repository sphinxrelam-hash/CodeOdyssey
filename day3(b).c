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