#include <stdio.h>
#include <string.h>

int main(){
    int first=-1,last=-1,i;
    char c,str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    printf("Enter the character to search: ");
    scanf(" %c",&c);
    for(i=0;i<strlen(str);i++){
        if(str[i]==c){
            first=i;
            break;
        }
    }
    for(i=0;i<strlen(str);i++){
        if(str[i]==c){
            last=i;
        }
    }
    if(first!=last)
        printf("The character '%c' occurs first at position %d and last at %d position in '%s' (if we start from 1).",c,first+1,last+1,str);
    else if(first==-1)
        printf("%c is not present in %s",c,str);
    else
        printf("The character '%c' occurs only once at position %d in '%s' (if we start from 1).",c,first+1,str);
    return 0;
}