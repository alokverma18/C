#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];
    int i=0,j=0;
    printf("\nGame : \nThis is a Word Game to be played by two players. \nPlayers have to enter a word starting with the last alphabet of the word entered by the other player.");
    printf("Player 1 must start with 'a'. \nGame ends when the rule is not followed\n\n");

while(i==0){
    
    printf("Player 1: ");
    scanf("%s",str1);
    //printf("string 2 is %s ",str2);
    if(j==0 && str1[0]!='a'){
        printf("You need to start with 'a'");
        break;
    }
    else if(j!=0 && (str1[0]!=str2[strlen(str2)-1])){
        i+=1;
        printf("\n*****   Game Over! Player 2 Won it!!!  *****\n\n");
        break;
    }
    printf("Player 2: ");
    scanf("%s",str2);
    if(str2[0]!=str1[strlen(str1)-1]){
        printf("\n*****   Game Over! Player 1 Won it!!!  *****\n\n");
        i+=1;
    }
    j+=1;

    printf("\n");
}
    return 0;
}