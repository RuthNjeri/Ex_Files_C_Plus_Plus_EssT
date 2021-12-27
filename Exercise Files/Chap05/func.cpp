// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include "func.h"



int main()
{
    puts("this is main()");
    func(42);
    return 0;
}

void func(int i)
{
    printf("the value is %d\n", i);
}

// C++ by default passes by value when using parameters in a func
// The values are usually stored in a stack.
// Pass by reference using a reference operator(const qualified) or pointer for objects like strings
// This is a preferred standard than storing it inside a stack

