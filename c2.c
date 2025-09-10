#include <stdio.h>
struct Student {
char full_name[50];
int Grade;
};



int main(){
struct Student s1;
printf("Full Name : ");
fgets(s1.full_name,sizeof(s1.full_name),stdin);
 printf("Age: ");
scanf("%d", &s1.Grade);


printf("info :\nFull Name: %s\nAge: %d", s1.full_name,s1.Grade);
return 0;
}