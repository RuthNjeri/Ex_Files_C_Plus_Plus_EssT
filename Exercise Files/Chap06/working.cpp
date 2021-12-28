// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

// Can create a class with a struct

//struct A {// Members default to public
//    int ia;
//    int ib;
//    int ic;
//};

class A {
public:
    int ia;
    int ib;
    int ic;
};



int main()
{
    A a = {1, 2, 3};
    
    printf("ia is %d, ib is %d, ic is %d\n", a.ia, a.ib, a.ic);
    return 0;
}
