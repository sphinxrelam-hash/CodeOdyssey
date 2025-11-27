/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/

#include <stdio.h>

struct Employee {
    char name[20];
    int id;
};

int main() {
    struct Employee e1 = {"Amit", 101}, e2;
    FILE *fp;

    fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from file -> Name: %s, ID: %d\n", e2.name, e2.id);
    return 0;
}