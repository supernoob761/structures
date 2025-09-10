#include <stdio.h>
struct Shape {
int length;
int width;
int area;
};
int declare_area(int length, int width){
int area=length*width;
}


int main(){
struct Shape s1;
printf("length (with m): ");
scanf("%d", &s1.length);

 printf("width,(with m): ");
scanf("%d", &s1.width);
s1.area=declare_area(s1.length,s1.width);


printf("------------OutPut------------------\n\n");
printf("length = %d\n",s1.length);
printf("width = %d\n",s1.width);
printf("area = %d\n\n",s1.area);
printf("------------------------------------");

return 0;
}