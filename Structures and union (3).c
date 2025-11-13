#include <stdio.h>

struct StudentData {
    int roll;
    char name[50];
    float physics, maths, chemistry, total;
};

int main() {
    struct StudentData s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    getchar();

    printf("Enter Name: ");
    gets(s.name);

    printf("Enter marks in Physics, Maths and Chemistry: ");
    scanf("%f %f %f", &s.physics, &s.maths, &s.chemistry);

    s.total = s.physics + s.maths + s.chemistry;

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Physics: %.2f\n", s.physics);
    printf("Maths: %.2f\n", s.maths);
    printf("Chemistry: %.2f\n", s.chemistry);
    printf("Total Marks: %.2f\n", s.total);

    return 0;
}
