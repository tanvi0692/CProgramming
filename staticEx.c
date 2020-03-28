#include <stdio.h>

int func() {
    static int x = 0; // x is initialized only once across three calls of func()
    printf("%d\n", x); // outputs the value of x
    x = x + 1;
    return(x);
}

int main(int argc, char * const argv[]) {
int a , b,c;
    a=func(); // prints 0
    b=func(); // prints 1
    c=func(); // prints 2
    printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}
