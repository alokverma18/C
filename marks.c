#include <stdio.h>

int i,d,number_of_students,total,sum=0;

char gender;
int marks_summation(int marks[],int number_of_students,char a);


int main(){
    printf("Enter the number of students: ");
    scanf("%d",&number_of_students);
    int marks[number_of_students];
    printf("Enter the marks:\n");
    for(i=0;i<number_of_students;i++){
        scanf("%d",&marks[i]);
    }
    printf("Enter the gender 'b' or 'g':");
    scanf(" %c", &gender);
    
    total=marks_summation(marks,number_of_students,gender);
    printf("%d",total);
    return 0;
}

int marks_summation(int marks[],int number_of_students,char a){
    if(a=='b'){
        d=0;
    }
    if(a=='g'){
        d=1;
    }
    for(i=d;i<number_of_students;i+=2){
        sum+=marks[i];
    }
    return sum;
}