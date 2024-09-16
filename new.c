#include <stdio.h>

int main(){
    int n;
    printf("Enter the Month number (1-12): ");
    scanf("%c",&n);
    switch(n){
        
        case 'A':
            printf("January");
            break;
        case 'B':
            printf("February");
            break;
        case 'C':
            printf("March");
            break;
        case 'D':
            printf("April");
            break;
        case 'E':
            printf("May");
            break;
        case 'F':
            printf("June");
            break;
        case 'G':
            printf("July");
            break;
        case 'H':
            printf("August");
            break;
        case 'I':
            printf("September");
            break;
        case 'J':
            printf("October");
            break;
        case 'K':
            printf("November");
            break;
        case 'L':
            printf("December");
            break;
        
}


    return 0;
}