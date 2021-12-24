// typeid.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <typeinfo>

struct A { int x; };
struct B { int x; };

A a1;
A a2;
B b1;
B b2;

int main() {
    if(typeid(a1) == typeid(A)) {
        printf("same %s\n", typeid(a1).name());
    } else {
        puts("different");
    }
    return 0;
}
