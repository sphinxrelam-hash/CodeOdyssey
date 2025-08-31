#include <stdio.h>
int main(){
    int len;
    printf("Enter lenght of the Rectangle:");
    scanf("%d",&len);
    int brea;
    printf("Enter breadth of the Rectangle:");
    scanf("%d",&brea);

    int area = len*brea;
    int per = 2*(len+brea);

    printf("Area of the Reectangle is:%d\n",area);
    printf("Perimeter of the Rectangle is:%d\n",per);

    return 0;
}