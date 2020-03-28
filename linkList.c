#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

int main()
{
struct node *head = NULL;
struct node *tail = NULL;

struct node *ptr= (struct node*)malloc(sizeof(struct node)); 

ptr->data = 45;
ptr->next = NULL;
head = ptr;
tail = ptr;

struct node *ptr1=(struct node*)malloc(sizeof(struct node));

ptr1->data=56;
ptr1->next = NULL;

tail->next = ptr1;
tail = ptr1;

struct node *yoyo = head;
do{
printf("\n%d",yoyo->data);
yoyo=yoyo->next;
}while(yoyo!=NULL);


}
