#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
struct node *prev;
};

void createnode(int val, struct node **head, struct node **tail, int num)
{
if(num==1){
if(*head==NULL){
struct node *ptr = (struct node*)malloc(sizeof(struct node));
ptr->data = val;
ptr->next=NULL;
ptr->prev=NULL;
*head=ptr;
*tail=ptr;
}
else{
printf("adding");
struct node *ptr = (struct node*)malloc(sizeof(struct node));
ptr->data=val;
ptr->prev=*head;
ptr->next=NULL;
(*head)->next=ptr;
*head=ptr;
}
}
if(num==0){
if(*tail==NULL){
struct node *ptr = (struct node*)malloc(sizeof(struct node));
ptr->data = val;
ptr->prev=NULL;
ptr->next=NULL;
*tail=ptr;
*head=ptr;
}
else{
struct node *ptr = (struct node*)malloc(sizeof(struct node));
ptr->data=val;
ptr->next=*tail;
ptr->prev=NULL;
(*tail)->prev=ptr;
*tail=ptr;
}
}

}

void printList(struct node *top, struct node *bottom){
printf("print list\n");
while(top!=NULL){
printf("%d\n",top->data);
top=top->prev;}

printf("bottom to top");

while(bottom!=NULL){
printf("%d\n",bottom->data);
bottom=bottom->next;}
}


int main(){
struct node *head = NULL;
struct node *tail =NULL;
printf("create 6\n");
createnode(6,&head,&tail,1);
printf("create 7\n");
createnode(7,&head,&tail,0);
createnode(9,&head,&tail,1);
createnode(33,&head,&tail,1);
createnode(34,&head,&tail,0);
createnode(77,&head,&tail,1);
createnode(78,&head,&tail,0);

printList(head,tail);
return 0;
}
