#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    char path[100];

    char ch;
    int characters, words, lines;

    printf("Enter File name with extension: ");
    scanf("%s", path);

    // Open source file in 'r' mode
    file = fopen(path, "r");

    // Check if file opened successfully
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have entered the correct file name with extension.\n");

        exit(EXIT_FAILURE);
    }

    // Logic to count characters, words and lines.

    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        // Check new line
        if (ch == '\n' || ch == '\0')
            lines++;

        // Check words
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }

    // Increment words and lines for last word
    if (characters > 0)
    {
        words++;
        lines++;
    }

    // Print the file statistics
    printf("\n");
    printf("Total Characters = %d\n", characters);
    printf("Total Words      = %d\n", words);
    printf("Total Lines      = %d\n", lines);

    // Close files to release memory
    fclose(file);

    return 0;
}