#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100], ch;
    int lines = 0, words = 0, chars = 0, spaces = 0;
    int inWord = 0;

    printf("Enter the file name to read: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            if (inWord) {
                words++;
                inWord = 0;
            }
            if (ch == ' ')
                spaces++;
            if (ch == '\n')
                lines++;
        } else {
            inWord = 1;
        }
    }

    if (inWord)
        words++;

    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Number of lines     : %d\n", lines);
    printf("Number of words     : %d\n", words);
    printf("Number of characters: %d\n", chars);
    printf("Number of spaces    : %d\n", spaces);

    return 0;
}
