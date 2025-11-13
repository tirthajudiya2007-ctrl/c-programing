#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    fprintf(fp, "Roll No,Name\n");

    do {
        printf("\nEnter Roll No: ");
        scanf("%d", &roll);
        getchar();
        printf("Enter Name: ");
        gets(name);

        fprintf(fp, "%d,%s\n", roll, name);

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("\nRecords saved successfully in 'students.csv'.\n");
    printf("You can open this file directly in MS Excel.\n");

    return 0;
}

