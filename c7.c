#include <stdio.h>
struct Date {
int Year;
int Month;
int Day;
};

int main(){
struct Date s1;
struct Date *ptr =&s1;
printf("Year : ");
scanf("%d", &ptr->Year);

 printf("Month : ");
scanf("%d", &ptr->Month);

printf("Day : ");
scanf("%d", &ptr->Day);


printf("------------OutPut------------------\n\n");
printf("%d",s1.Year);
printf("/%d",s1.Month);
printf("/%d\n\n",s1.Day);
printf("------------------------------------");

return 0;
}