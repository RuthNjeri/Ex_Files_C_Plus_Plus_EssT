// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

int main()
{
    int x = 24; // Assignment operator = makes a copy of the right side to the left side
    int y = 43;
    
    y += x; // Compound assignment operators, value of x add it to y  and leave the result in y without any copy.
    
    y = y + x; // Similar to the compound assignment but y is evaluated twice on the left and right, but on compound assignemnt y is evaluated once..compound assignment may be better in many occasions.
    
    printf("X is %d\n", x);
    printf("Y is %d\n", y);
    printf("Y is %d\n", ++y);
    printf("Y is %d\n", ++y); // Increments the value and returns the new value
    printf("Y is %d\n", y++); // Post increment, return the value first, then increment it, operates on it after it returns a value.
    
    if(x != y){ // returns a logical value, 0 is false and anything not a 0 is true
        printf("true %d\n", x != y);
    } else {
        printf("false");
    }
    
    // Boolean is 8 bits
    
    bool a = true;
    bool b = false;
    
    a = 7; // any non zero value is true, since the type of a is a bool
    
    printf("Logical value of a is %d\n", a);
    printf("Logical value of b is %d\n", b);
    
    // A bool is 8 bits

    printf("size is %zd\n", sizeof(a) * 8);
    
    if(a && b){ // logical and, || or, ! not, perform short curcuiting
        puts("true");
    }else{
        puts("false");
    }
    
    // Short curcuiting, a || b, b is never evaluated because a is false, b && a, a is never evaluated because b is false.
    // There is no bool xor operator(evaluate true if only one is true)
    // Similar to b != a only true if one of them is true and the other false, use ! before non logical variables, converts them to bools.
    
    // Ternary operator, don't need the complexity of if else
    const char * s = x > y ? "ÿes" : "no";
    puts(s);
}
