#include <stdio.h>
int main()
{
    int n,s,sum,i,j;
    scanf("%d",&n);
    for(i=1;i<n/2;i++){
        sum=0,j=i;
        while(sum<=n){
            sum+=j;
            j++;
        }
        sum=sum-j+1;
        if(sum==n){
            for(s=i;s<j-1;s++)
                printf("%d ",s);
        printf("\n");
        }
        
    }

	return 0;
}