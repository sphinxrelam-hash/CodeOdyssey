/*
Q148: Take two structs as input and check if they are identical.

Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same
*/

#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Asha", 101, 90};
    struct Student s2 = {"Asha", 101, 90};

    if(s1.roll == s2.roll && s1.marks == s2.marks && strcmp(s1.name, s2.name) == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    return 0;
}