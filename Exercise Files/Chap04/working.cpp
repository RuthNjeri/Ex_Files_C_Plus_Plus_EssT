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
}
