#include <stdio.h>

int main() {
    char *books[3];
    char names[3][50];
    int i;

    printf("Enter names of 3 books:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d: ", i + 1);
        scanf(" %[^\n]", names[i]);
        books[i] = names[i];
    }

    printf("\nYou entered the following book names:\n");
    for (i = 0; i < 3; i++)
        printf("%s\n", *(books + i));

    return 0;
}

