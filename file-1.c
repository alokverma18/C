#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[50];
    FILE *fptr;
    fptr=fopen("hello.txt","w");
    fprintf(fptr,"%s","ALOK");
    fclose(fptr);

    return 0;
}