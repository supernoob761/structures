#include <stdio.h>
#include <math.h>

struct Rectangle {
float radius;

float area;
};
float declare_area(float radius){
float area=(radius*radius)*3.14;
return area;
}

int main(){
struct Rectangle *s1;

printf("radius (with m): ");
scanf("%f", &s1->radius);
s1->area=declare_area(s1->radius);


printf("------------OutPut------------------\n\n");
printf("radius = %.2f\n",s1->radius);

printf("area = %.2f\n\n",s1->area);
printf("------------------------------------");

return 0;
}