#include <stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
};

void main() {
    struct student s[3]; // Array of 3 students

    // Input data for each student
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d (rollno name marks): ", i + 1);
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
        printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", 
               i + 1, s[i].rollno, s[i].name, s[i].marks);

    }
}
