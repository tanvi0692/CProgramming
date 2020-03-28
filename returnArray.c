#include <stdio.h>
const char * getString();
int main()
{
 printf("hello world\n");
 printf("%s\n", getString());
 return 0;
}

const char * getString()
{char f[]="yellow";
 printf("%s",f);
 const char *x;
 x="adhkajs";
 return x;
}
