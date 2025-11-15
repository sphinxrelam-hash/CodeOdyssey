//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);
    
    int n = strlen(name);
    printf("Initials with surname: ");
    
    for (int i = 0; i < n; i++) {
    
        if (i == 0 || (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n')) {
            // Check if it's the start of the last word
            int is_last_word = 1;
            for (int j = i; j < n; j++) {
                if (name[j] == ' ') {
                    is_last_word = 0;
                    break;
                }
            }
            if (!is_last_word) {
                printf("%c.", name[i]);
            } else {
               
                for (int k = i; k < n; k++) {
                    putchar(name[k]);
                }
                break;
            }
        }
    }
    
    printf("\n");
    return 0;
}