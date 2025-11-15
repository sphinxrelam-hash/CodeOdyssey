////Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

int main() {

    enum operation {
        ADD,
        SUBTRACT,
        MULTIPLY
    };
    
    enum operation choice = ADD;
    int a = 10;
    int b = 20;
    int result;

    switch (choice) {
        case ADD:
            result = a + b;
            break;
        case SUBTRACT:
            result = a - b;
            break;
        case MULTIPLY:
            result = a * b;
            break;
    }

    printf("%d\n", result);

    return 0;
}