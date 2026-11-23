#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *srcFile, *destFile;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter the source file name: ");
    scanf("%99s", sourceName);

    printf("Enter the destination file name: ");
    scanf("%99s", destName);

    srcFile = fopen(sourceName, "r");
    if (srcFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    
    destFile = fopen(destName, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(srcFile);
        return 1;
    }

    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from '%s' to '%s'.\n", sourceName, destName);

    fclose(srcFile);
    fclose(destFile);

    return 0;
}
