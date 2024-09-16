#include <stdio.h> 
#include <string.h> 
int main()

{

char a[50][50];

int i;

int n = 0;

for(i = 0; i < 5; i++)

{

gets(a[i]);

n++;

if(!strcmp(a[i],"x"))

break;

}

printf("%s\n",a[0]);

for(i=0;i<n;i++)

{

if(a[i][strlen(a[i])-1]==a[i+1][0])

printf("%s\n", a[i+1]);

}

return 0;

}