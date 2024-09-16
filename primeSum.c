#include <stdio.h>
int i,j,n,count;
int checkPrime(int n){
	for(i=2;i<=n/2;i++){
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
int main()
{

    scanf("%d",&n);
    for(j=2;j<n/2;j++){
        if(checkPrime(j)==0 && checkPrime(n-j)==0){
            printf("%d = %d + %d\n",n,j,n-j);
        }
        
    }

	return 0;
}