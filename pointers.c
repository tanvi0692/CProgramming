#include<stdio.h>

void main()
{
int d;
printf("The address of d :%p\n",(void*)&d);
d= 10;
int *t=&d;
int **f = &t;
printf("The adress stored in the pointer: %p\n the value it is pointing to: %d\n address in which pointer is stored : %p\n",t,*t,&t);
printf("the adress f stores : %p\n The adress it is pointing to : %d\n ", f, **f);
}

