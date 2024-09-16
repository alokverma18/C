#include <stdio.h>
#include <string.h>
int main(){
    char str[20],temp;
    int i,j,k;
    printf("Enter a String : ");
    //scanf("%s",str);
    fgets(str,sizeof(str),stdin);
    k=strlen(str);

    //printf("%s \n",strrev(str));

    for(i=0,j=k-1;i<k/2;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("Reversed : %s",str);
    return 0;
}