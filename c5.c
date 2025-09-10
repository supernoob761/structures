#include <stdio.h>
#include <string.h>
struct Book {
int Year;
char Title[100];
char author[100];
};

void define_book(struct Book* p1, int year, const char* title, const char* author) {
    p1->Year = year;
    strcpy(p1->Title, title);
    strcpy(p1->author, author);
}

int main(){
struct Book p2;

define_book(&p2,2006,"God Help This Dying World","Phoenix Backer");

printf("Year : %d\n",p2.Year);
printf("Title : %s\n",p2.Title);
printf("author : %s\n",p2.author);



return 0;
}