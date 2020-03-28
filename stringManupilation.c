#include<stdio.h>
#include<string.h>
int main(){
int a =9;
char str[12] = "hello";
printf("%p\n",&str);
printf("%d",&a);
char name[13] = "Tanvi";
char final[56];
strcat(str,name);
printf("%s",final);
return(0);
}
