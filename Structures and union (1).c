#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printAllNames(struct Student s[], int n) {
    printf("\nList of all students:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", s[i].name);
    }
}

void printByRoll(struct Student s[], int n, int roll) {
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nDetails of Roll Number %d:\n", roll);
            printf("Name: %s\n", s[i].name);
            printf("Course: %s\n", s[i].course);
            printf("Major: %s\n", s[i].major);
            printf("Minor: %s\n", s[i].minor);
            return;
        }
    }
    printf("No student found with Roll Number %d\n", roll);
}

int main() {
    struct Student s[10];
    int n = 3;
    printf("Enter details of %d students:\n", n);
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        getchar();
        printf("Name: ");
        gets(s[i].name);
        printf("Course: ");
        gets(s[i].course);
        printf("Major Subject: ");
        gets(s[i].major);
        printf("Minor Subject: ");
        gets(s[i].minor);
    }

    printAllNames(s, n);

    int roll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printByRoll(s, n, roll);

    return 0;
}
