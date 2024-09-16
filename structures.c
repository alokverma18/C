#include <stdio.h>
#include <string.h>

 //defining Structures
    typedef struct student{
        int rollno;
        char name[100];
        float gpa;

    } stu;
void printer(struct student s1);

int main() {

    int i;
    //Using Structures
    struct student s1;
    s1.rollno=500;
    strcpy(s1.name,"Raghav");
    s1.gpa=9.8;

    printf("%d\n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%f\n",s1.gpa);

    //Initializing all at once
    struct student s2={499,"Anuj",9.9};
    printf("%s\n",s2.name);

    //Pointer to Structures

    struct student *ptr;
    ptr=&s1;

    printf("%s\n",(*ptr).name);

    //Pointer Arrow notation ->
    printf("%s\n",ptr->name);

    printf("Function Printer:\n");
    printer(s2);

    //typedef function use
    stu s3;
    s3.rollno=495;
    strcpy(s3.name,"Ballu");
    s3.gpa=9.7;

    printf("%s\n",s3.name);
   


    //Structures and Arrays
    typedef struct address{
        int hno;
        char city[100];
        char state[100];
    } ads;

    ads arr[3];
    for(i=0;i<3;i++){
        printf("Enter details of Person %d House No,City,State\n",i+1);
        scanf("%d",&arr[i].hno);
        scanf("%s",&arr[i].city);
        scanf("%s",&arr[i].state);
        printf("\n");
    }

    printf("Details of person 2 are: %d,%s,%s\n",arr[1].hno,arr[1].city,arr[1].state);
     return 0;
}

//Function definition
void printer(struct student s1){
    printf("%d\n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%f\n",s1.gpa);
}