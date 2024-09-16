#include <stdio.h>
int main(){
    int i,n,temp;

    printf("Enter the Size of Array : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter Element %d : ",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("Reveresd Array : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}