// working.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{ 
    int x = 42;
    int y = 7;

    printf("value is %d\n", x < y);


    if (x > y) { // any number other than 0 is true in c++
        puts("condition is true");
    }
    else {
        puts("Condition is dalse");
    }


    return 0;
}
