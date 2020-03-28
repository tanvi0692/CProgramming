#include<stdio.h>

void main(){
int rows = 6;
int i =0,j=0;

for(i=0;i<=rows;i++){
printf("\n");
int count = rows-i;
for(j=0;j<=i;j++){
while(count){
printf(" ");
count--;
}
printf("* ");
}
}
}
