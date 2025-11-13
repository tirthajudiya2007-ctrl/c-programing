#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char *words[10];
     int count = 0;
    char *token;

    printf("Enter full name: ");
    gets(name);

    token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    printf("Abbreviated name: ");
    for (int i = 0; i < count - 1; i++)
        printf("%c. ", *(*(words + i)));

    printf("%s\n", *(words + count - 1));

    return 0;
}

