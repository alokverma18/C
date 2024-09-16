#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;

    printf("Quadratic Equation is of the form : A*x^2 + B*x + C \n");
    printf("Enter the value of A : ");
    scanf("%d",&a);

    printf("Enter the value of B : ");
    scanf("%d",&b);

    printf("Enter the value of C : ");
    scanf("%d",&c);

    d=pow(b,2)-4*a*c;

    printf("Roots are : ");

    if(b*b-4*a*c>=0){
        printf("%.2f and %.2f",((-b)+sqrt((float)d))/(2*a),((-b)-sqrt((float)d))/(2*a));
    }
    else{        
        printf("(%.2f + %.2f i) and (%.2f - %.2f i) ",(float)-b/(2*a),sqrt((float)(4*a*c-b*b))/(2*a),(float)-b/(2*a),sqrt((float)(4*a*c-b*b))/(2*a));
    }

	return 0;
}