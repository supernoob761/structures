#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{char name[100];float grade;struct Student *next;};
int main(){
    struct Student *head=NULL,*temp,*newNode;
    int n; scanf("%d",&n); getchar();
    for(int i=0;i<n;i++){
        char name[100]; float grade;
        fgets(name,100,stdin); name[strcspn(name,"\n")]=0;
        scanf("%f",&grade); getchar();
        newNode=malloc(sizeof(struct Student));
        strcpy(newNode->name,name); newNode->grade=grade; newNode->next=NULL;
        if(!head) head=newNode;
        else{ temp=head; while(temp->next) temp=temp->next; temp->next=newNode; }
    }
    temp=head;
    while(temp){ printf("%s %.2f\n",temp->name,temp->grade); struct Student *del=temp; temp=temp->next; free(del); }
    return 0;
}
