#include <stdio.h>
#include <string.h>
struct Pricing
{
char Name[50];
float price;
int quantity;
};
int main(){

struct Pricing info[50];
printf("How many you wanna declare?: ");
int n;
scanf("%d", &n);
getchar();
for(int i=0;i<n;i++){
printf("Name :");
fgets(info[i].Name,sizeof(info[i].Name),stdin);
printf("Price :");
scanf("%f",&info[i].price);
getchar();
printf("quantity :");
scanf("%d",&info[i].quantity);
getchar();
}
for (int i = 0; i < n; i++)
{
    printf("%s costs %.2f and there's %d left\n",info[i].Name,info[i].price,info[i].quantity);
}



}
