#include <stdio.h>
#include <math.h>

struct circle {
int radius;

int area;
};
int declare_area(int radius){
int area=(radius*radius)*3.14;
return area;
}

int main(){
struct circle *s1;

printf("radius (with m): ");
scanf("%d", &s1->radius);
s1->area=declare_area(s1->radius);


printf("------------OutPut------------------\n\n");
printf("radius = %d\n",s1->radius);

printf("area = %d\n\n",s1->area);
printf("------------------------------------");

return 0;
}