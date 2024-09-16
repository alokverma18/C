#include <stdio.h>

    int n;
    void square(int n);
    void _square(int* n);
    int main(){
        printf("Enter value of n: ");
        scanf("%d",&n);
        printf("Using square function:\nSquare: ");
        square(n);
        printf("\nValue of n: %d\n\n",n);
        printf("Using _square function:\nSquare: ");
        _square(&n);
        printf("\nValue of n: %d",n);

      return 0;  
}
        void square(int n){
            n=n*n;
            printf("%d",n);
        }

        void _square(int* n){
            *n=(*n)*(*n);
            printf("%d",*n);
        }