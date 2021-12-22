// class.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

class C { // The class encapsulates the integer
    int i = 0; // Members default to private in a class but private in a struct
public: // Public function members, for interacting with objects made from the class and set private members values
    void setvalue( int value ) { i = value; }
    int getvalue() { return i; }
};

int main() {
    int i = 47;
    C o1; // Use C as a type to declare a new object.
    C o2;
    C o3;
    
    o1.setvalue(i);
    o2.setvalue(i * 2);
    o3.setvalue(i * 3);
    printf("value is %d\n", o1.getvalue());
    printf("value is %d\n", o2.getvalue()); 
    printf("value is %d\n", o3.getvalue());
    return 0;
}
