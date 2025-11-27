/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[20];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e1 = {"Raj", 11, {12, 5, 2020}};

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
           e1.name, e1.id, e1.joiningDate.day, e1.joiningDate.month, e1.joiningDate.year);
    return 0;
}