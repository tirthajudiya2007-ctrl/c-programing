 #include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 0;
    }

    printf("Enter text (type 'stop' to finish):\n");

    while (1) {
        gets(line);
        if (strcmp(line, "stop") == 0)
            break;
        fputs(line, fp);
        fputs("\n", fp);
    }

    fclose(fp);
    printf("Data written successfully into myfile.txt\n");

    return 0;
}

