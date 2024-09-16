#include <stdio.h>
int main() {
    int billamt,amtgiven;
    int q,r;
    printf("Enter bill amount and then amount given: ");
    scanf("%d",&amtgiven);
    scanf("%d",&billamt);
    q=amtgiven/billamt;
    r=amtgiven%billamt;
    printf("Quotient:%d\nRemainder:%d",q,r);
}