#include <stdio.h>
int main(){
    char *str="Raghav";
    char a[]="Raghav";
    printf("%c ",*(str+0));
    printf("%c ",*(str+1));
    printf("%c ",*(str+2));
    printf("%c ",*(str+3));
    printf("%c ",*(str+4));
    printf("%c ",*(str+5));
    printf("%c ",*(str+6));
    printf("%c \n",'!');
    printf("%s \n",str);
    printf("%d",sizeof(str));     //Size of Pointer = Address # Not the String

    return 0;
    
}