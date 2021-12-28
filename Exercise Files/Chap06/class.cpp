// class.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

// a very simple class, would often be in a header file
class C1 {// Class definitaion/ interface
    int i = 0; // Default to private..encapsulation
public:
    void setvalue( int value );
    int getvalue();
};

// Best practise to separate interface and definition, would be in a separate cpp file
void C1::setvalue(int value){
    i = value;
}

int C1::getvalue(){
    return i;
}



int main() { // Would be in a separate cpp file
    int i = 47;
    C1 o1;
    
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());
    return 0;
}
