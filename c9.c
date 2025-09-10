#include <stdio.h>
#include <string.h>
struct Account {
char Account_name[100];
int Balance;
};
int Credit(int count,int add){

return count+add;
}
int main(){
struct Account p1;
p1.Balance=2000;
printf("Account : ");
fgets(p1.Account_name,sizeof(p1.Account_name),stdin);


printf("balance : %d$\n",p1.Balance);
int adding;
printf("how much you want to add? :\n");
scanf("%d",&adding);
p1. Balance=Credit(p1.Balance,adding);
printf("account : %s\n",p1.Account_name);
printf("Balance : %d\n",p1.Balance);
return 0;
}