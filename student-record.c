#include <stdio.h>
#include <string.h>

int n,i,j,x,count;

struct student {
        int rollno;
        char name[100];
        char grade;
    } s[10];

void display(struct student s[], int n);
void search(struct student s[], int n);
void sort(struct student s[], int n);

int main(){

    printf("Enter the number of Students: ");
    scanf("%d",&n);


    for(i=0;i<n;i++){
        printf("Enter the Roll Number of Student %d :        ",i+1);
        scanf("%d",&s[i].rollno);

        printf("Enter the First Name of Student %d :         ",i+1);
        scanf("%s",s[i].name);

        printf("Enter the Grade of Student (Upper Case) %d : ",i+1);
        scanf(" %c",&s[i].grade);

        printf("\n");
    }

    char again='Y';
    
    while ((again == 'Y')||(again == 'y')){

        printf("Options : \n");
        printf("1. Display all Records. \n");
        printf("2. Search a Record. \n");
        printf("3. Sort the Records.\n\n");
        printf("Your Choice : ");
        scanf("%d",&x);
    
        switch (x){

            case 1 :
        
                display(s,n);

                break;

            case 2 :

                search(s,n);

                break;

            case 3 :

                sort(s,n);

                break;
    
            default:
                printf("Invalid Input !!!");
        
        }
        printf("\n\nDo you want to try again?? (Y/N) : ");
        scanf(" %c", &again);
    }
    printf("\n\n *** Thank You !!! ***");
}
void display(struct student s[], int n){

    for(i=0; i<n; i++){

            printf("\nDetails of Student %d: \n\n",i+1);
            printf("Roll No : %d\n",s[i].rollno);
            printf("Name : %s\n",s[i].name);
            printf("Grade : %c\n\n",s[i].grade);
     
    }
        
}

void search(struct student s[], int n){
    int a;
    printf("\nEnter a Choice: \n 1. Using Name \n 2. Using Roll Number \n\n Your Choice: ");
    scanf("%d",&a);
    switch(a){
        
        char str[100];
        int b;
        case 1:
            
            printf("\nEnter the Name (Case-sensitive): ");
            scanf("%s",str);
            
            for(i=0;i<n;i++){
                if(strcmp(s[i].name,str)==0){
                    printf("\nDetails of Student : \n");
                    printf("Roll No : %d\n",s[i].rollno);
                    printf("Name : %s\n",s[i].name);
                    printf("Grade : %c\n\n",s[i].grade);
                    count++;
                    
                }
                
            }
            if(count==0){
                    printf("Record Not Found !!!");
                }

            break;

        case 2:

            printf("\nEnter the Roll No : ");
            scanf("%d",&b);

            for(i=0;i<n;i++){
                if(s[i].rollno==b){
                    printf("\nDetails of Student : \n");
                    printf("Roll No : %d\n",s[i].rollno);
                    printf("Name : %s\n",s[i].name);
                    printf("Grade : %c\n\n",s[i].grade);
                    count++;
                           
                }
                
            }
            if(count==0){
                    printf("Record Not Found !!!");
                }

            break;

        default:
            printf("Invalid Input !!!");
    }

}

void sort(struct student s[], int n){

    int a;
    printf("Enter a Choice: \n 1. Sort using Roll Number \n 2. Sort using Grade  \n Your Choice: ");
    scanf("%d",&a);
    switch(a){

        struct student temp;

        case 1:

            for (i=0; i<n; i++){

                for (j=i+1; j<n; j++){
 
                    if(s[i].rollno > s[j].rollno){
 
                        temp =  s[i];
                        s[i] = s[j];
                        s[j] = temp;

                    }
    
                }
    
            }
            display(s,n);

            break;

        case 2:

            for (i=0; i<n; i++){

                for (j = i+1; j<n; j++){
 
                    if(s[i].grade>s[j].grade){
 
                        temp =  s[i];
                        s[i] = s[j];
                        s[j] = temp;
 
                }
 
            }
 
        }
        display(s,n);

            break;

        default:
            printf("Invalid Input !!!");
    }


}
