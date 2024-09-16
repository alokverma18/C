#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//Maximum size of the array
#define MAX_SIZE  32
#define FILE_NAME "asish.txt"
//toggle file alphanumeric data
void toggleFileData(FILE *fptr)
{
    FILE *fpTmp = NULL;
    int ch = 0;
    //open the file
    fpTmp = fopen("tmp.txt", "w");
    if(fpTmp == NULL)
    {
        printf("Error in creating tmp file\n");
        fclose(fptr);
        exit(1);
    }
    //until EOF
    while ( (ch = fgetc(fptr)) != EOF)
    {
        /*
         * If current character is uppercase then toggle
         * it to lowercase and vice versa.
         */
        ch = (isupper(ch))? tolower(ch):toupper(ch);
        // write ch in temporary file.
        fputc(ch, fpTmp);
    }
    // Close all files to release resource
    fclose(fptr);
    fclose(fpTmp);
    // Delete original file
    remove(FILE_NAME);
    // Rename temporary file as original file
    rename("tmp.txt", FILE_NAME);
}
int main()
{
    //file pointer
    FILE *fp = NULL;
    //open the file
    fp = fopen(FILE_NAME, "r");
    if(fp == NULL)
    {
        printf("Error in creating the file\n");
        exit(1);
    }
    /**
     * Function to convert lowercase characters to uppercase
     * and uppercase to lowercase in a file.
     * It also close the opened file
     */
    toggleFileData(fp);
    printf("File Modification Successful!!!");
    return 0;
}