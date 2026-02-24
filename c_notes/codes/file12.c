#include <stdio.h>

int main() {
    FILE *fp;

    // Writing to a file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Hello, File I/O in C!\n");
    fclose(fp);

    // Reading from a file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    char buffer[100];
    while (fgets(buffer, 100, fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);

    return 0;
}