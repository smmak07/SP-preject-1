#include <stdio.h>

struct Student {
    int id;
    char name[50];
    char dept[20];
    float cgpa;
};

void insertRecord() {
    struct Student s;
    FILE *fp = fopen("students.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter ID: ");
    scanf("%d", &s.id);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter Dept: ");
    scanf("%s", s.dept);

    printf("Enter CGPA: ");
    scanf("%f", &s.cgpa);

    fprintf(fp, "%d %s %s %.2f\n", s.id, s.name, s.dept, s.cgpa);
    fclose(fp);

    printf("Record inserted.\n");
}

int main() {
    insertRecord();
    return 0;
}
