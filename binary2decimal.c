#include <stdio.h>

int main()
{ int sum=0,base=1, binary=0;
  int data = 15;
  while(data>1){
  binary = (data%2);
  sum = sum + (binary * (base));
  printf("%d\t",sum);
  data = (data-binary)/2;
//  printf("%d",data);
  base =base*10;
  }
  printf("%d",sum);
  return(sum); 
}	 
