<<<<<<< HEAD
Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
=======
///Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

<<<<<<< HEAD



=======
>>>>>>> 2a286e62ad44ce43917ef5a3e5f8bcb72ec0a5f6
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
