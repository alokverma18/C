#include <stdio.h>
int main()
{
    int a[5],i,j,k,p;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            for(k=j+1;k<5;k++){
                p=a[i]+a[j]+a[k];
                if(p==0)
                    printf("%d %d %d \n",a[i],a[j],a[k]);
            }
        }
    }
    

	return 0;
}