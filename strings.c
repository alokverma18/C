#include <stdio.h>
#include <string.h>

int main(){
    char str1[]={'R','A','G','H','A','V','\0'};
    char str2[]={'R','I','Y','A','\0'};
    char str3[20]="DJ";
    printf("%s \n",str1);
    printf("Strlen: %d \n",strlen(str1));
    printf("Sizeof: %d \n",sizeof(str1));      //Counts the Null character as well '\0'
    printf("%s \n",strcat(str1,str2));
    printf("%s \n",strcpy(str3,str2));
    printf("%s",str3);


}