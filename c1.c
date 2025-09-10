#include <stdio.h>
#include <string.h>
struct Employee {
char full_name[50];
int age;
};



int main(){
struct Employee s1;

strcpy(s1.full_name,"Phoenix Baker");
s1.age=19;

printf("info :\nFull Name: %s\nAge: %d", s1.full_name,s1.age);
return 0;
}