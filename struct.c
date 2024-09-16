#include <stdio.h>

struct address{
        int hno;
        char city[20];
    };

struct info{
    int id;
    char name[20];
    char sex;
    struct address add;
    int marks[2];
    
};
int main(){
struct info a[3];
for(int i=0;i<3;i++){
    scanf("%d",&a[i].id);
    scanf("%s",a[i].name);
    scanf(" %c",&a[i].sex);
    scanf("%d",&a[i].add.hno);
    scanf("%s",a[i].add.city);
    scanf("%d",&a[i].marks[0]);
    scanf("%d",&a[i].marks[1]);
}


for(int i=0;i<3;i++){
    printf("%d %s %c %d %s",a[i].id,a[i].name,a[i].sex,a[i].add.hno,a[i].add.city,a[i].marks[0],a[i].marks[1]);
}



return 0;
}
