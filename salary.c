#include <stdio.h>
float sal(int basic){
    float hr=0.1*basic;
    float da=0.25*basic;
    float gross=basic+hr+da;
    printf("HRA= %.2f \nDA= %.2f \nGross Pay= %.2f \n",hr,da,gross);
    return gross;
}
float net(float gross,float tax){
    return (100-tax)*gross/100;
}
void display_sal(float net_sal){
    printf("Net Salary= %.2f",net_sal);
}
int main(){
    float basic,gross,net_sal,tax;
    printf("Enter the Basic Pay: ");
    scanf("%f",&basic);
    printf("Enter the Tax rate: ");
    scanf("%f",&tax);
    gross=sal(basic);
    net_sal=net(gross,tax);
    display_sal(net_sal);

    return 0;
}