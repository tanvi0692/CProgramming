#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *left;
struct node *right;
};

void createNode(int val,struct node **top ){
if(*top==NULL){
struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->data=val;
ptr->left=NULL;
ptr->right=NULL;
*top=ptr;
}
else if((*top)->data<val){
createNode(val,&(*top)->left);
}
else if((*top)->data>val){
createNode(val,&(*top)->right);
}
}

void printBinaryTree(struct node *top){
if(top!=NULL){
printf("%d\n",top->data);
printBinaryTree(top->left);
printBinaryTree(top->right);
}

}


void main(){

struct node *root=(struct node*)malloc(sizeof(struct node));
root->left=NULL;
root->right=NULL;
createNode(10,&root);
createNode(8,&root);
createNode(12,&root);
printBinaryTree(root);
}
