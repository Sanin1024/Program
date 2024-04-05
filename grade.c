#include <stdio.h>

int main() {
    char name[50];
    int marks;
    char grade;

    printf("Enter student's name: ");
    scanf("%s", name);
    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (marks >= 85 && marks <= 100) {
        grade = 'S';
    } else if (marks >= 75 && marks <= 84) {
        grade = 'A';
    } else if (marks >= 65 && marks <= 74) {
        grade = 'B';
    } else if (marks >= 55 && marks <= 64) {
        grade = 'C';
    } else if (marks >= 45 && marks <= 54) {
        grade = 'P';
    } else {
        grade = 'F';
    }

    printf("\nName   Mark   Grade\n");
    printf("------ ------ -------\n");
    printf("%-7s %-6d %-2c\n", name, marks, grade);

    return 0;
}

