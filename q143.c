/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student s[3] = {
        {"Ravi", 101, 95.0},
        {"Sita", 102, 85.0},
        {"Aman", 103, 88.0}
    };
    
    int i, maxIndex = 0;

    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %.0f)\n", s[maxIndex].name, s[maxIndex].marks);
    return 0;
}