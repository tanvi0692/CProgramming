#include <string.h>
#include<stdio.h>
int main(){
    char a[]="hello";
    char *y=a;
    int len;
    len = strlen(a);
    printf("%d\n",len);
    y=y+1;
    printf("%s\n",a);
    return 0;
}
