#include <stdio.h>
int main(){
    int sec,h,m,s;
    printf("Enter Time Duration in Seconds : ");
    scanf("%d",&sec);

    printf("Time in HH:MM:SS Format : ");
    printf("%d:",sec/3600);
    printf("%d:",(sec%3600)/60);
    printf("%d",(sec%3600)%60);
    
    return 0;
}