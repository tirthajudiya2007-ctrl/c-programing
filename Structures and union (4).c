#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float average;
};

int main() {
    struct Cricketer c[10], temp;
    int n = 5;

    printf("Enter details of %d cricketers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("\nCricketer %d\n", i + 1);
        printf("Name: ");
        getchar();
        gets(c[i].name);
        printf("Age: ");
        scanf("%d", &c[i].age);
        printf("Matches Played: ");
        scanf("%d", &c[i].matches);
        printf("Average Runs: ");
        scanf("%f", &c[i].average);
    }


    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(c[i].average > c[j].average) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers arranged in ascending order of average runs:\n");
    for(int i = 0; i < n; i++) {
        printf("\nName: %s\nAge: %d\nMatches: %d\nAverage Runs: %.2f\n",
               c[i].name, c[i].age, c[i].matches, c[i].average);
    }

    return 0;
}

