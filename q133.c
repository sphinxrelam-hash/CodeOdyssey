//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

int main() {

    enum months {
        JAN,
        FEB,
        MAR,
        APR,
        MAY,
        JUN,
        JUL,
        AUG,
        SEP,
        OCT,
        NOV,
        DEC
    };

    enum months month = FEB;

    switch (month) {
        case FEB:
            printf("28 or 29 days\n");
            break;

        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;

        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("31 days\n");
            break;
    }

    return 0;
}