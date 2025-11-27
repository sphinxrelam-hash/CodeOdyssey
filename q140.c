/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[20];
    enum Gender g;
};

int main() {
    struct Person p1;
    strcpy(p1.name, "Rohan");
    p1.g = MALE;

    printf("Name: %s\n", p1.name);
    
    if(p1.g == MALE) {
        printf("Gender: Male");
    } else {
        printf("Gender: Female");
    }

    return 0;
}