#include <stdio.h>

typedef struct
 areas {
int X;
int Y;
} area;



int main(){
area s1;
s1.X=5;
s1.Y=32;
area *s1_ptr = &s1;
printf("declare X:");
scanf("%d",&s1_ptr->X);
printf("declare Y:");
scanf("%d",&s1_ptr->Y);
printf("coordinates:\n");
    printf("X = %d\n", s1.X);
    printf("Y = %d\n", s1.Y);
return 0;
}