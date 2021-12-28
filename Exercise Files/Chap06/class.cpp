// class.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

// a very simple class, would often be in a header file
class C1 {// Class definitaion/ interface
    int i = 0; // Default to private..encapsulation
public:
    void setvalue( int value );
    int getvalue() const; // Mark a function as const safe, tells a compiler it is safe to call this function from a const qualifies object
    int getvalue(); // Not const qualified
};

// Best practise to separate interface and definition, would be in a separate cpp file
void C1::setvalue(int value){
    i = value;
}

int C1::getvalue() const {
    puts("const qualified");
    return i;
}

int C1::getvalue(){
    puts("non const");
    return i;
}


int main() { // Would be in a separate cpp file
    int i = 47;
    C1 o1;
    
    o1.setvalue(i);
    const C1 o2 = o1; // Const qualified object
    
    printf("value is %d\n", o1.getvalue()); // non const qualified obj, mutable objects
    printf("value is %d\n", o2.getvalue());
    return 0;
}

// Rule of the thumb, const functions can be called by non const qualified obj, but non const functions cannot be called by const qualified objects
