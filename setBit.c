#include<stdio.h>

int NumberOfSetBits32(int i)
{
    i = (i & 0x55555555) + ((i >> 1) & 0x55555555);
    printf("%d\n",i);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    i = (i & 0x0F0F0F0F) + ((i >> 4) & 0x0F0F0F0F);
    return (i*(0x01010101))>>24;
}




int main(){
int number;
number = NumberOfSetBits32(15);
printf ("%d", number);
return(number);
}
