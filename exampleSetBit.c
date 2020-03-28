#include<stdio.h>

void main()
{int val = 15;
int count =0;
int i=0;
for(i=0;i<4;i++){
//if((val&1)==1) count++;
count = count+(val&1);
printf("%d : %d\n",val,count);
val>>= 1;
}
printf("%d\n",count);
}
