#include <stdio.h>
#include <string.h>

int main(){
    char a[100];
    char b[100];
    char c[100];
    printf("Enter String 1:\n");
    scanf("%s",a);
    printf("Enter String 2:\n");
    scanf("%s",b);
    printf("Enter Substring:\n");
    scanf("%s",c);
    printf("Length of String 1: %d\n",strlen(a));
    printf("Length of String 2: %d\n",strlen(b));
    if(strstr(a,c)){
        printf("Present in %s\n",a);
    }
    else{
        printf("Not present in %s\n",a);
    }
    if(strstr(b,c)){
        printf("Present in %s\n",b);
    }
    else{
        printf("Not Present in %s\n",b);
    }

    return 0;
}
    