// pointers.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    int x = 7;
    int * ip = & x; // ip points to the address of x
    int & y = x; // Y is a reference, to x

    int* c = & y;

    printf("The value of c is %d\n", c);
    printf("The value of ip is %d\n", ip);
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y); // No need to dereference
    printf("The value of *ip is %d\n", *ip); // Dereferencing, getting the value at the address

    y = 73; // There is no syntax to change a reference, here, X is being changed not Y
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip); // Dereferencing, getting the value at the address

    int z = 7;
    ip = &z;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip); // Dereferencing, getting the value at the address


    return 0;
}
